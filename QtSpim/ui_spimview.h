/********************************************************************************
** Form generated from reading UI file 'spimview.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPIMVIEW_H
#define UI_SPIMVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include "datatextedit.h"
#include "regtextedit.h"
#include "texttextedit.h"

QT_BEGIN_NAMESPACE

class Ui_SpimView
{
public:
    QAction *action_File_Load;
    QAction *action_File_SaveLog;
    QAction *action_File_Exit;
    QAction *action_Sim_ClearRegisters;
    QAction *action_Sim_Reinitialize;
    QAction *action_File_Reload;
    QAction *action_Sim_SetRunParameters;
    QAction *action_Sim_Run;
    QAction *action_Sim_Pause;
    QAction *action_Sim_Stop;
    QAction *action_Sim_SingleStep;
    QAction *action_Sim_DisplaySymbols;
    QAction *action_Sim_Settings;
    QAction *action_Reg_DisplayBinary;
    QAction *action_Reg_DisplayHex;
    QAction *action_Reg_DisplayDecimal;
    QAction *action_Text_DisplayUserText;
    QAction *action_Text_DisplayKernelText;
    QAction *action_Text_DisplayComments;
    QAction *action_Text_DisplayInstructionValue;
    QAction *action_Data_DisplayUserData;
    QAction *action_Data_DisplayUserStack;
    QAction *action_Data_DisplayKernelData;
    QAction *action_Data_DisplayBinary;
    QAction *action_Data_DisplayHex;
    QAction *action_Data_DisplayDecimal;
    QAction *action_Win_IntRegisters;
    QAction *action_Win_FPRegisters;
    QAction *action_Win_TextSegment;
    QAction *action_Win_DataSegment;
    QAction *action_Win_Console;
    QAction *action_Win_Tile;
    QAction *action_Win_Restore;
    QAction *action_Help_ViewHelp;
    QAction *action_Help_AboutSPIM;
    QAction *action_File_Print;
    QTabWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menu_File;
    QMenu *menuRecent_Files;
    QMenu *menu_Simulator;
    QMenu *menu_Registers;
    QMenu *menu_Text_Segment;
    QMenu *menu_Data_Segment;
    QMenu *menu_Window;
    QMenu *menu_Help;
    QStatusBar *statusBar;
    QDockWidget *IntRegDockWidget;
    regTextEdit *IntRegTextEdit;
    QDockWidget *FPRegDockWidget;
    regTextEdit *FPRegTextEdit;
    QDockWidget *TextSegDockWidget;
    textTextEdit *TextSegmentTextEdit;
    QDockWidget *DataSegDockWidget;
    dataTextEdit *DataSegmentTextEdit;
    QToolBar *toolBar;

    void setupUi(QMainWindow *SpimView)
    {
        if (SpimView->objectName().isEmpty())
            SpimView->setObjectName(QString::fromUtf8("SpimView"));
        SpimView->resize(1172, 773);
        SpimView->setDockOptions(QMainWindow::AnimatedDocks|QMainWindow::ForceTabbedDocks|QMainWindow::VerticalTabs);
        action_File_Load = new QAction(SpimView);
        action_File_Load->setObjectName(QString::fromUtf8("action_File_Load"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/LoadFile.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_File_Load->setIcon(icon);
        action_File_SaveLog = new QAction(SpimView);
        action_File_SaveLog->setObjectName(QString::fromUtf8("action_File_SaveLog"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/SaveLog.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_File_SaveLog->setIcon(icon1);
        action_File_Exit = new QAction(SpimView);
        action_File_Exit->setObjectName(QString::fromUtf8("action_File_Exit"));
        action_Sim_ClearRegisters = new QAction(SpimView);
        action_Sim_ClearRegisters->setObjectName(QString::fromUtf8("action_Sim_ClearRegisters"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/ClearRegs.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Sim_ClearRegisters->setIcon(icon2);
        action_Sim_Reinitialize = new QAction(SpimView);
        action_Sim_Reinitialize->setObjectName(QString::fromUtf8("action_Sim_Reinitialize"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/Reinit.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Sim_Reinitialize->setIcon(icon3);
        action_File_Reload = new QAction(SpimView);
        action_File_Reload->setObjectName(QString::fromUtf8("action_File_Reload"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/ReloadFile.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_File_Reload->setIcon(icon4);
        action_Sim_SetRunParameters = new QAction(SpimView);
        action_Sim_SetRunParameters->setObjectName(QString::fromUtf8("action_Sim_SetRunParameters"));
        action_Sim_Run = new QAction(SpimView);
        action_Sim_Run->setObjectName(QString::fromUtf8("action_Sim_Run"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/Run.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Sim_Run->setIcon(icon5);
        action_Sim_Pause = new QAction(SpimView);
        action_Sim_Pause->setObjectName(QString::fromUtf8("action_Sim_Pause"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/Pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Sim_Pause->setIcon(icon6);
        action_Sim_Stop = new QAction(SpimView);
        action_Sim_Stop->setObjectName(QString::fromUtf8("action_Sim_Stop"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/Stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Sim_Stop->setIcon(icon7);
        action_Sim_SingleStep = new QAction(SpimView);
        action_Sim_SingleStep->setObjectName(QString::fromUtf8("action_Sim_SingleStep"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/SingleStep.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Sim_SingleStep->setIcon(icon8);
        action_Sim_DisplaySymbols = new QAction(SpimView);
        action_Sim_DisplaySymbols->setObjectName(QString::fromUtf8("action_Sim_DisplaySymbols"));
        action_Sim_Settings = new QAction(SpimView);
        action_Sim_Settings->setObjectName(QString::fromUtf8("action_Sim_Settings"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/Settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Sim_Settings->setIcon(icon9);
        action_Reg_DisplayBinary = new QAction(SpimView);
        action_Reg_DisplayBinary->setObjectName(QString::fromUtf8("action_Reg_DisplayBinary"));
        action_Reg_DisplayBinary->setCheckable(true);
        action_Reg_DisplayHex = new QAction(SpimView);
        action_Reg_DisplayHex->setObjectName(QString::fromUtf8("action_Reg_DisplayHex"));
        action_Reg_DisplayHex->setCheckable(true);
        action_Reg_DisplayDecimal = new QAction(SpimView);
        action_Reg_DisplayDecimal->setObjectName(QString::fromUtf8("action_Reg_DisplayDecimal"));
        action_Reg_DisplayDecimal->setCheckable(true);
        action_Text_DisplayUserText = new QAction(SpimView);
        action_Text_DisplayUserText->setObjectName(QString::fromUtf8("action_Text_DisplayUserText"));
        action_Text_DisplayUserText->setCheckable(true);
        action_Text_DisplayKernelText = new QAction(SpimView);
        action_Text_DisplayKernelText->setObjectName(QString::fromUtf8("action_Text_DisplayKernelText"));
        action_Text_DisplayKernelText->setCheckable(true);
        action_Text_DisplayComments = new QAction(SpimView);
        action_Text_DisplayComments->setObjectName(QString::fromUtf8("action_Text_DisplayComments"));
        action_Text_DisplayComments->setCheckable(true);
        action_Text_DisplayInstructionValue = new QAction(SpimView);
        action_Text_DisplayInstructionValue->setObjectName(QString::fromUtf8("action_Text_DisplayInstructionValue"));
        action_Text_DisplayInstructionValue->setCheckable(true);
        action_Data_DisplayUserData = new QAction(SpimView);
        action_Data_DisplayUserData->setObjectName(QString::fromUtf8("action_Data_DisplayUserData"));
        action_Data_DisplayUserData->setCheckable(true);
        action_Data_DisplayUserStack = new QAction(SpimView);
        action_Data_DisplayUserStack->setObjectName(QString::fromUtf8("action_Data_DisplayUserStack"));
        action_Data_DisplayUserStack->setCheckable(true);
        action_Data_DisplayKernelData = new QAction(SpimView);
        action_Data_DisplayKernelData->setObjectName(QString::fromUtf8("action_Data_DisplayKernelData"));
        action_Data_DisplayKernelData->setCheckable(true);
        action_Data_DisplayBinary = new QAction(SpimView);
        action_Data_DisplayBinary->setObjectName(QString::fromUtf8("action_Data_DisplayBinary"));
        action_Data_DisplayBinary->setCheckable(true);
        action_Data_DisplayHex = new QAction(SpimView);
        action_Data_DisplayHex->setObjectName(QString::fromUtf8("action_Data_DisplayHex"));
        action_Data_DisplayHex->setCheckable(true);
        action_Data_DisplayDecimal = new QAction(SpimView);
        action_Data_DisplayDecimal->setObjectName(QString::fromUtf8("action_Data_DisplayDecimal"));
        action_Data_DisplayDecimal->setCheckable(true);
        action_Win_IntRegisters = new QAction(SpimView);
        action_Win_IntRegisters->setObjectName(QString::fromUtf8("action_Win_IntRegisters"));
        action_Win_IntRegisters->setCheckable(true);
        action_Win_FPRegisters = new QAction(SpimView);
        action_Win_FPRegisters->setObjectName(QString::fromUtf8("action_Win_FPRegisters"));
        action_Win_FPRegisters->setCheckable(true);
        action_Win_TextSegment = new QAction(SpimView);
        action_Win_TextSegment->setObjectName(QString::fromUtf8("action_Win_TextSegment"));
        action_Win_TextSegment->setCheckable(true);
        action_Win_DataSegment = new QAction(SpimView);
        action_Win_DataSegment->setObjectName(QString::fromUtf8("action_Win_DataSegment"));
        action_Win_DataSegment->setCheckable(true);
        action_Win_Console = new QAction(SpimView);
        action_Win_Console->setObjectName(QString::fromUtf8("action_Win_Console"));
        action_Win_Console->setCheckable(true);
        action_Win_Tile = new QAction(SpimView);
        action_Win_Tile->setObjectName(QString::fromUtf8("action_Win_Tile"));
        action_Win_Restore = new QAction(SpimView);
        action_Win_Restore->setObjectName(QString::fromUtf8("action_Win_Restore"));
        action_Help_ViewHelp = new QAction(SpimView);
        action_Help_ViewHelp->setObjectName(QString::fromUtf8("action_Help_ViewHelp"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icons/Help.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Help_ViewHelp->setIcon(icon10);
        action_Help_AboutSPIM = new QAction(SpimView);
        action_Help_AboutSPIM->setObjectName(QString::fromUtf8("action_Help_AboutSPIM"));
        action_File_Print = new QAction(SpimView);
        action_File_Print->setObjectName(QString::fromUtf8("action_File_Print"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icons/Print.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_File_Print->setIcon(icon11);
        centralWidget = new QTabWidget(SpimView);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        SpimView->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SpimView);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1172, 22));
        menu_File = new QMenu(menuBar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menuRecent_Files = new QMenu(menu_File);
        menuRecent_Files->setObjectName(QString::fromUtf8("menuRecent_Files"));
        menu_Simulator = new QMenu(menuBar);
        menu_Simulator->setObjectName(QString::fromUtf8("menu_Simulator"));
        menu_Registers = new QMenu(menuBar);
        menu_Registers->setObjectName(QString::fromUtf8("menu_Registers"));
        menu_Text_Segment = new QMenu(menuBar);
        menu_Text_Segment->setObjectName(QString::fromUtf8("menu_Text_Segment"));
        menu_Data_Segment = new QMenu(menuBar);
        menu_Data_Segment->setObjectName(QString::fromUtf8("menu_Data_Segment"));
        menu_Window = new QMenu(menuBar);
        menu_Window->setObjectName(QString::fromUtf8("menu_Window"));
        menu_Help = new QMenu(menuBar);
        menu_Help->setObjectName(QString::fromUtf8("menu_Help"));
        SpimView->setMenuBar(menuBar);
        statusBar = new QStatusBar(SpimView);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        SpimView->setStatusBar(statusBar);
        IntRegDockWidget = new QDockWidget(SpimView);
        IntRegDockWidget->setObjectName(QString::fromUtf8("IntRegDockWidget"));
        IntRegDockWidget->setMinimumSize(QSize(200, 35));
        IntRegDockWidget->setAllowedAreas(Qt::TopDockWidgetArea);
        IntRegTextEdit = new regTextEdit();
        IntRegTextEdit->setObjectName(QString::fromUtf8("IntRegTextEdit"));
        IntRegTextEdit->setMinimumSize(QSize(200, 0));
        IntRegTextEdit->setProperty("undoRedoEnabled", QVariant(false));
        IntRegTextEdit->setProperty("readOnly", QVariant(true));
        IntRegDockWidget->setWidget(IntRegTextEdit);
        SpimView->addDockWidget(static_cast<Qt::DockWidgetArea>(4), IntRegDockWidget);
        FPRegDockWidget = new QDockWidget(SpimView);
        FPRegDockWidget->setObjectName(QString::fromUtf8("FPRegDockWidget"));
        FPRegDockWidget->setMinimumSize(QSize(58, 35));
        FPRegDockWidget->setAllowedAreas(Qt::TopDockWidgetArea);
        FPRegTextEdit = new regTextEdit();
        FPRegTextEdit->setObjectName(QString::fromUtf8("FPRegTextEdit"));
        FPRegTextEdit->setProperty("undoRedoEnabled", QVariant(false));
        FPRegTextEdit->setProperty("readOnly", QVariant(true));
        FPRegDockWidget->setWidget(FPRegTextEdit);
        SpimView->addDockWidget(static_cast<Qt::DockWidgetArea>(4), FPRegDockWidget);
        TextSegDockWidget = new QDockWidget(SpimView);
        TextSegDockWidget->setObjectName(QString::fromUtf8("TextSegDockWidget"));
        sizePolicy.setHeightForWidth(TextSegDockWidget->sizePolicy().hasHeightForWidth());
        TextSegDockWidget->setSizePolicy(sizePolicy);
        TextSegDockWidget->setMinimumSize(QSize(800, 35));
        TextSegDockWidget->setAllowedAreas(Qt::BottomDockWidgetArea|Qt::TopDockWidgetArea);
        TextSegmentTextEdit = new textTextEdit();
        TextSegmentTextEdit->setObjectName(QString::fromUtf8("TextSegmentTextEdit"));
        TextSegmentTextEdit->setMinimumSize(QSize(800, 0));
        TextSegmentTextEdit->setProperty("undoRedoEnabled", QVariant(false));
        TextSegmentTextEdit->setProperty("readOnly", QVariant(true));
        TextSegDockWidget->setWidget(TextSegmentTextEdit);
        SpimView->addDockWidget(static_cast<Qt::DockWidgetArea>(4), TextSegDockWidget);
        DataSegDockWidget = new QDockWidget(SpimView);
        DataSegDockWidget->setObjectName(QString::fromUtf8("DataSegDockWidget"));
        DataSegDockWidget->setMinimumSize(QSize(58, 35));
        DataSegDockWidget->setAllowedAreas(Qt::TopDockWidgetArea);
        DataSegmentTextEdit = new dataTextEdit();
        DataSegmentTextEdit->setObjectName(QString::fromUtf8("DataSegmentTextEdit"));
        DataSegmentTextEdit->setProperty("undoRedoEnabled", QVariant(false));
        DataSegmentTextEdit->setProperty("readOnly", QVariant(true));
        DataSegDockWidget->setWidget(DataSegmentTextEdit);
        SpimView->addDockWidget(static_cast<Qt::DockWidgetArea>(4), DataSegDockWidget);
        toolBar = new QToolBar(SpimView);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        SpimView->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menu_File->menuAction());
        menuBar->addAction(menu_Simulator->menuAction());
        menuBar->addAction(menu_Registers->menuAction());
        menuBar->addAction(menu_Text_Segment->menuAction());
        menuBar->addAction(menu_Data_Segment->menuAction());
        menuBar->addAction(menu_Window->menuAction());
        menuBar->addAction(menu_Help->menuAction());
        menu_File->addAction(action_File_Load);
        menu_File->addAction(menuRecent_Files->menuAction());
        menu_File->addAction(action_File_Reload);
        menu_File->addSeparator();
        menu_File->addAction(action_File_SaveLog);
        menu_File->addSeparator();
        menu_File->addAction(action_File_Print);
        menu_File->addSeparator();
        menu_File->addAction(action_File_Exit);
        menu_Simulator->addAction(action_Sim_ClearRegisters);
        menu_Simulator->addAction(action_Sim_Reinitialize);
        menu_Simulator->addSeparator();
        menu_Simulator->addAction(action_Sim_SetRunParameters);
        menu_Simulator->addAction(action_Sim_Run);
        menu_Simulator->addAction(action_Sim_Pause);
        menu_Simulator->addAction(action_Sim_Stop);
        menu_Simulator->addAction(action_Sim_SingleStep);
        menu_Simulator->addSeparator();
        menu_Simulator->addAction(action_Sim_DisplaySymbols);
        menu_Simulator->addSeparator();
        menu_Simulator->addAction(action_Sim_Settings);
        menu_Registers->addAction(action_Reg_DisplayBinary);
        menu_Registers->addAction(action_Reg_DisplayHex);
        menu_Registers->addAction(action_Reg_DisplayDecimal);
        menu_Text_Segment->addAction(action_Text_DisplayUserText);
        menu_Text_Segment->addAction(action_Text_DisplayKernelText);
        menu_Text_Segment->addSeparator();
        menu_Text_Segment->addAction(action_Text_DisplayComments);
        menu_Text_Segment->addAction(action_Text_DisplayInstructionValue);
        menu_Data_Segment->addAction(action_Data_DisplayUserData);
        menu_Data_Segment->addAction(action_Data_DisplayUserStack);
        menu_Data_Segment->addAction(action_Data_DisplayKernelData);
        menu_Data_Segment->addSeparator();
        menu_Data_Segment->addSeparator();
        menu_Data_Segment->addAction(action_Data_DisplayBinary);
        menu_Data_Segment->addAction(action_Data_DisplayHex);
        menu_Data_Segment->addAction(action_Data_DisplayDecimal);
        menu_Window->addAction(action_Win_IntRegisters);
        menu_Window->addAction(action_Win_FPRegisters);
        menu_Window->addAction(action_Win_TextSegment);
        menu_Window->addAction(action_Win_DataSegment);
        menu_Window->addAction(action_Win_Console);
        menu_Window->addSeparator();
        menu_Window->addAction(action_Win_Tile);
        menu_Window->addAction(action_Win_Restore);
        menu_Help->addAction(action_Help_ViewHelp);
        menu_Help->addAction(action_Help_AboutSPIM);
        toolBar->addAction(action_File_Load);
        toolBar->addAction(action_File_Reload);
        toolBar->addSeparator();
        toolBar->addAction(action_File_SaveLog);
        toolBar->addAction(action_File_Print);
        toolBar->addSeparator();
        toolBar->addAction(action_Sim_ClearRegisters);
        toolBar->addAction(action_Sim_Reinitialize);
        toolBar->addSeparator();
        toolBar->addAction(action_Sim_Run);
        toolBar->addAction(action_Sim_Pause);
        toolBar->addAction(action_Sim_Stop);
        toolBar->addAction(action_Sim_SingleStep);
        toolBar->addSeparator();
        toolBar->addAction(action_Help_ViewHelp);

        retranslateUi(SpimView);

        QMetaObject::connectSlotsByName(SpimView);
    } // setupUi

    void retranslateUi(QMainWindow *SpimView)
    {
        SpimView->setWindowTitle(QApplication::translate("SpimView", "QtSpim", nullptr));
        action_File_Load->setText(QApplication::translate("SpimView", "&Load File", nullptr));
        action_File_SaveLog->setText(QApplication::translate("SpimView", "&Save Log File", nullptr));
        action_File_Exit->setText(QApplication::translate("SpimView", "&Exit", nullptr));
        action_Sim_ClearRegisters->setText(QApplication::translate("SpimView", "&Clear Registers", nullptr));
        action_Sim_Reinitialize->setText(QApplication::translate("SpimView", "Re&initialize Simulator", nullptr));
        action_File_Reload->setText(QApplication::translate("SpimView", "Re&initialize and Load File", nullptr));
        action_Sim_SetRunParameters->setText(QApplication::translate("SpimView", "Run &Parameters", nullptr));
        action_Sim_Run->setText(QApplication::translate("SpimView", "&Run/Continue", nullptr));
#ifndef QT_NO_SHORTCUT
        action_Sim_Run->setShortcut(QApplication::translate("SpimView", "F5", nullptr));
#endif // QT_NO_SHORTCUT
        action_Sim_Pause->setText(QApplication::translate("SpimView", "&Pause", nullptr));
        action_Sim_Stop->setText(QApplication::translate("SpimView", "&Stop", nullptr));
#ifndef QT_NO_SHORTCUT
        action_Sim_Stop->setShortcut(QString());
#endif // QT_NO_SHORTCUT
        action_Sim_SingleStep->setText(QApplication::translate("SpimView", "&Single Step", nullptr));
#ifndef QT_NO_SHORTCUT
        action_Sim_SingleStep->setShortcut(QApplication::translate("SpimView", "F10", nullptr));
#endif // QT_NO_SHORTCUT
        action_Sim_DisplaySymbols->setText(QApplication::translate("SpimView", "&Display Symbols", nullptr));
        action_Sim_Settings->setText(QApplication::translate("SpimView", "Settings", nullptr));
        action_Reg_DisplayBinary->setText(QApplication::translate("SpimView", "Binary", nullptr));
        action_Reg_DisplayHex->setText(QApplication::translate("SpimView", "Hex", nullptr));
        action_Reg_DisplayDecimal->setText(QApplication::translate("SpimView", "Decimal", nullptr));
        action_Text_DisplayUserText->setText(QApplication::translate("SpimView", "User Text", nullptr));
        action_Text_DisplayKernelText->setText(QApplication::translate("SpimView", "Kernel Text", nullptr));
        action_Text_DisplayComments->setText(QApplication::translate("SpimView", "Comments", nullptr));
        action_Text_DisplayInstructionValue->setText(QApplication::translate("SpimView", "Instruction Value", nullptr));
        action_Data_DisplayUserData->setText(QApplication::translate("SpimView", "User Data", nullptr));
        action_Data_DisplayUserStack->setText(QApplication::translate("SpimView", "User Stack", nullptr));
        action_Data_DisplayKernelData->setText(QApplication::translate("SpimView", "Kernel Data", nullptr));
        action_Data_DisplayBinary->setText(QApplication::translate("SpimView", "Binary", nullptr));
        action_Data_DisplayHex->setText(QApplication::translate("SpimView", "Hex", nullptr));
        action_Data_DisplayDecimal->setText(QApplication::translate("SpimView", "Decimal", nullptr));
        action_Win_IntRegisters->setText(QApplication::translate("SpimView", "Integer Registers", nullptr));
        action_Win_FPRegisters->setText(QApplication::translate("SpimView", "FP Registers", nullptr));
        action_Win_TextSegment->setText(QApplication::translate("SpimView", "Text Segment", nullptr));
        action_Win_DataSegment->setText(QApplication::translate("SpimView", "Data Segment", nullptr));
        action_Win_Console->setText(QApplication::translate("SpimView", "Console", nullptr));
        action_Win_Tile->setText(QApplication::translate("SpimView", "Tile", nullptr));
        action_Win_Restore->setText(QApplication::translate("SpimView", "Restore to default", nullptr));
        action_Help_ViewHelp->setText(QApplication::translate("SpimView", "View Help", nullptr));
        action_Help_AboutSPIM->setText(QApplication::translate("SpimView", "About QtSpim", nullptr));
        action_File_Print->setText(QApplication::translate("SpimView", "Print", nullptr));
        menu_File->setTitle(QApplication::translate("SpimView", "&File", nullptr));
        menuRecent_Files->setTitle(QApplication::translate("SpimView", "Recent Files", nullptr));
        menu_Simulator->setTitle(QApplication::translate("SpimView", "&Simulator", nullptr));
        menu_Registers->setTitle(QApplication::translate("SpimView", "&Registers", nullptr));
        menu_Text_Segment->setTitle(QApplication::translate("SpimView", "&Text Segment", nullptr));
        menu_Data_Segment->setTitle(QApplication::translate("SpimView", "&Data Segment", nullptr));
        menu_Window->setTitle(QApplication::translate("SpimView", "&Window", nullptr));
        menu_Help->setTitle(QApplication::translate("SpimView", "&Help", nullptr));
        IntRegDockWidget->setWindowTitle(QApplication::translate("SpimView", "Int Regs", nullptr));
        FPRegDockWidget->setWindowTitle(QApplication::translate("SpimView", "FP Regs", nullptr));
        TextSegDockWidget->setWindowTitle(QApplication::translate("SpimView", "Text", nullptr));
        DataSegDockWidget->setWindowTitle(QApplication::translate("SpimView", "Data", nullptr));
        toolBar->setWindowTitle(QApplication::translate("SpimView", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SpimView: public Ui_SpimView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPIMVIEW_H
