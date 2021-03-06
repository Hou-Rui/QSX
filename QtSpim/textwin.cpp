/* SPIM S20 MIPS simulator.
   Terminal interface for SPIM simulator.

   Copyright (c) 1990-2010, James R. Larus.
   All rights reserved.

   Redistribution and use in source and binary forms, with or without modification,
   are permitted provided that the following conditions are met:

   Redistributions of source code must retain the above copyright notice,
   this list of conditions and the following disclaimer.

   Redistributions in binary form must reproduce the above copyright notice,
   this list of conditions and the following disclaimer in the documentation and/or
   other materials provided with the distribution.

   Neither the name of the James R. Larus nor the names of its contributors may be
   used to endorse or promote products derived from this software without specific
   prior written permission.

   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
   AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
   IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
   ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
   LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
   CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
   GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
   HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
   LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
   OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#include "spimview.h"
#include "ui_spimview.h"
#

#include <QContextMenuEvent>
#include <QRegExp>
#include <QStringBuilder>
#define QT_USE_FAST_CONCATENATION

//
// Text segment window
//

void SpimView::DisplayTextSegments(bool force) {
    if (force || text_modified) {
        textTextEdit *te = ui->TextSegDockWidget->findChild<textTextEdit *>("TextSegmentTextEdit");

        te->clear();
        QString windowContents =
              loadStyleSheet()
            % windowFormattingStart(st_textWinFont, st_textWinFontColor, st_textWinBackgroundColor)
            % formatUserTextSeg()
            % formatKernelTextSeg()
            % windowFormattingEnd();
        te->insertHtml(windowContents);
        highlightInstruction(PC);
    }
    text_modified = false;
}

QString SpimView::formatUserTextSeg() {
    if (st_showUserTextSegment) {
        return formatSegLabel("User Text Segment", TEXT_BOT, text_top)
            % formatInstructions(TEXT_BOT, text_top);
    } else {
        return QString("");
    }
}

QString SpimView::formatKernelTextSeg() {
    if (st_showKernelTextSegment) {
        return formatSegLabel("Kernel Text Segment", K_TEXT_BOT, k_text_top)
            % formatInstructions(K_TEXT_BOT, k_text_top);
    } else {
        return QString("");
    }
}

QString breakpointMark() {
    return QString("<font face='Wingdings 2' color='red'>N</font> ");
}

QString formatPc(QString pc) {
    return QString("[<font class=\"qsx-pc\">%1</font>] ").arg(pc);
}

QString formatBinInst(QString binInst) {
    return QString("<font class=\"qsx-bin-inst\">%1</font>").arg(binInst);
}

QString formatDisassembly(QString disassembly) {
    QString result;
    QStringList cs = disassembly.split("#", QString::SkipEmptyParts);
    QStringList ss = cs[0].split(QRegExp(",|(\\s+)"), QString::SkipEmptyParts);
    result += QString("<font class=\"qsx-inst\">%1</font>").arg(ss[0]);
    for (int i = 1; i < ss.length(); i++) {
        if (i == 1 || ss[i][0] == '[') {
            result += " ";
        } else {
            result += ", ";
        }
        if (ss[i][0] == '$') {
            result += QString("<font class=\"qsx-reg\">%1</font>").arg(ss[i]);
        } else if (ss[i][0].isDigit() || ss[i][0] == '-' || ss[i][0] == '\'') {
            QStringList sss = ss[i].split(QRegExp("[\\(\\)]"), QString::SkipEmptyParts);
            result += QString("<font class=\"qsx-int\"'>%1</font>").arg(sss[0]);
            if (sss.length() > 1) {
                result += QString("(<font class=\"qsx-reg\">%1</font>)").arg(sss[1]);
            }
        } else {
            result += ss[i];
        }
    }
    if (cs.length() > 1) {
        result += QString("<i class=\"qsx-comment\">%1</i>").arg(" #" + cs[1]);
    }
    return result;
}

QString formatComment(QString comment) {
    if (comment.isEmpty()) {
        return "";
    }
    QString prefix;
    int p = 0;
    while (p < comment.length() && comment[p] != ':') {
        prefix += comment[p++];
    }
    if (p < comment.length()) {
        prefix += comment[p++];
    }
    return QString("<font class=\"qsx-comment\">%1</font>").arg(prefix)
        + formatDisassembly(comment.mid(p));
}

QString SpimView::formatInstructions(mem_addr from, mem_addr to) {
    str_stream ss;
    mem_addr a;
    QString windowContents;

    ss_init(&ss);
    for (a = from; a < to; a += 4) {
        instruction *inst = read_mem_inst(a);
        if (inst != NULL) {
            format_an_inst(&ss, inst, a);

            char *pc = ss_to_string(&ss);
            char *binInst = pc + 14;
            char *disassembly = binInst + 11;
            char *comment = NULL;

            pc += 3;
            pc[8] = '\0';
            binInst += 1;
            binInst[8] = '\0';
            comment = strstr(disassembly, ";");
            if (comment != NULL) {
                char *s;
                for (s = comment - 1; *s == ' '; s--)
                    ;
                *(s + 1) = '\0';
            }
            if (inst_is_breakpoint(a)) {
                windowContents += QString(breakpointMark());
            }
            windowContents += formatPc(pc)
                % (st_showTextDisassembly ? formatBinInst(binInst) : QString(""))
                % nnbsp(2) % formatDisassembly(disassembly)
                % nnbsp(40 - strlen(disassembly))
                % (comment != NULL && st_showTextComments
                        ? formatComment(comment)
                        : QString(""))
                % QString("<br>");
            ss_clear(&ss);
        }
    }

    return windowContents;
}

void SpimView::highlightInstruction(mem_addr pc) {
    QTextEdit *te = ui->TextSegDockWidget->findChild<QTextEdit *>("TextSegmentTextEdit");
    QTextCursor cursor(te->document());

    QRegExp rx("\\[" + formatAddress(pc) + "\\]"); // Start of specific line
    cursor = te->document()->find(rx, cursor);
    if (!cursor.isNull()) {
        cursor.select(QTextCursor::LineUnderCursor);
        QString l = cursor.selectedText();

        QTextCharFormat format;
        format.setBackground(QBrush(Qt::cyan));

        QTextEdit::ExtraSelection es;
        es.cursor = cursor;
        es.format = format;
        QList<QTextEdit::ExtraSelection> ess;
        ess << es;
        te->setExtraSelections(ess);

        te->setTextCursor(cursor);
        te->ensureCursorVisible();
    }
}

//
// Breakpoint
//

textTextEdit::textTextEdit() {
    this->setObjectName("textwin");
    action_Context_SetBreakpoint = new QAction(this);
    action_Context_SetBreakpoint->setObjectName("action_SetBreakpoint");
    action_Context_SetBreakpoint->setText("Set Breakpoint");

    action_Context_ClearBreakpoint = new QAction(this);
    action_Context_ClearBreakpoint->setObjectName("action_ClearBreakpoint");
    action_Context_ClearBreakpoint->setText("Clear Breakpoint");
}

void textTextEdit::contextMenuEvent(QContextMenuEvent *event) {
    QMenu *menu = createStandardContextMenu();
    menu->addSeparator();
    menu->addAction(action_Context_SetBreakpoint);
    menu->addAction(action_Context_ClearBreakpoint);
    contextGlobalPos = event->globalPos();

    menu->exec(event->globalPos());
}

void textTextEdit::setBreakpoint() {
    QTextCursor cursor;
    mem_addr pc = pcFromPos(&cursor);
    if (pc != 0 && !inst_is_breakpoint(pc)) {
        add_breakpoint(pc);

        cursor.setPosition(cursor.anchor());
        cursor.insertHtml(breakpointMark());
        update();
    }
}

void textTextEdit::clearBreakpoint() {
    QTextCursor cursor;
    mem_addr pc = pcFromPos(&cursor);
    if (pc != 0 && inst_is_breakpoint(pc)) {
        delete_breakpoint(pc);

        cursor.setPosition(cursor.anchor());
        cursor.movePosition(QTextCursor::NextCharacter, QTextCursor::KeepAnchor, 2);
        cursor.removeSelectedText();
        update();
    }
}

int textTextEdit::pcFromPos(QTextCursor *cursor) {
    // Position of context menu is location user right-click. Find the line at this point
    // extract the pc.
    //
    QPoint mouseViewportPos = this->viewport()->mapFromGlobal(contextGlobalPos);

    *cursor = this->cursorForPosition(mouseViewportPos);
    cursor->select(QTextCursor::LineUnderCursor);
    QString line = cursor->selectedText();

    QRegExp rx("\\[([0-9a-fA-F]{8})\\]"); // Address of instruction

    rx.indexIn(line);
    QString pcStr = rx.cap(1);
    if (pcStr != "") {
        bool ok;
        mem_addr pc = pcStr.toUInt(&ok, 16);
        return (ok ? pc : 0);
    }
    return 0;
}

void textTextEdit::closeEvent(QCloseEvent *event) {
    if (Window != NULL) // Event can occur while window is being constructed; ignore in that case
    {
        Window->ui->action_Win_TextSegment->setChecked(false);
    }
    event->accept();
}

void textTextEdit::hideEvent(QHideEvent *event) {
    if (Window != NULL) // Event can occur while window is being constructed; ignore in that case
    {
        Window->ui->action_Win_TextSegment->setChecked(false);
    }
    event->accept();
}

void textTextEdit::showEvent(QShowEvent *event) {
    if (Window != NULL) // Event can occur while window is being constructed; ignore in that case
    {
        Window->ui->action_Win_TextSegment->setChecked(true);
    }
    event->accept();
}
