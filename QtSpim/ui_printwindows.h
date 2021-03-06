/********************************************************************************
** Form generated from reading UI file 'printwindows.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINTWINDOWS_H
#define UI_PRINTWINDOWS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PrintWindowsDialog
{
public:
    QWidget *verticalLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QCheckBox *RegsCheckBox;
    QCheckBox *TextCheckBox;
    QCheckBox *DataCheckBox;
    QCheckBox *ConsoleCheckBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PrintWindowsDialog)
    {
        if (PrintWindowsDialog->objectName().isEmpty())
            PrintWindowsDialog->setObjectName(QString::fromUtf8("PrintWindowsDialog"));
        PrintWindowsDialog->resize(297, 174);
        verticalLayoutWidget = new QWidget(PrintWindowsDialog);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 261, 121));
        gridLayout = new QGridLayout(verticalLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        RegsCheckBox = new QCheckBox(verticalLayoutWidget);
        RegsCheckBox->setObjectName(QString::fromUtf8("RegsCheckBox"));

        gridLayout->addWidget(RegsCheckBox, 2, 1, 1, 1);

        TextCheckBox = new QCheckBox(verticalLayoutWidget);
        TextCheckBox->setObjectName(QString::fromUtf8("TextCheckBox"));

        gridLayout->addWidget(TextCheckBox, 3, 1, 1, 1);

        DataCheckBox = new QCheckBox(verticalLayoutWidget);
        DataCheckBox->setObjectName(QString::fromUtf8("DataCheckBox"));

        gridLayout->addWidget(DataCheckBox, 4, 1, 1, 1);

        ConsoleCheckBox = new QCheckBox(verticalLayoutWidget);
        ConsoleCheckBox->setObjectName(QString::fromUtf8("ConsoleCheckBox"));

        gridLayout->addWidget(ConsoleCheckBox, 5, 1, 1, 1);

        buttonBox = new QDialogButtonBox(PrintWindowsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(-10, 140, 273, 23));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        retranslateUi(PrintWindowsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PrintWindowsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PrintWindowsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(PrintWindowsDialog);
    } // setupUi

    void retranslateUi(QDialog *PrintWindowsDialog)
    {
        PrintWindowsDialog->setWindowTitle(QApplication::translate("PrintWindowsDialog", "Print Windows", nullptr));
        label->setText(QApplication::translate("PrintWindowsDialog", "Print windows ", nullptr));
        RegsCheckBox->setText(QApplication::translate("PrintWindowsDialog", "Registers", nullptr));
        TextCheckBox->setText(QApplication::translate("PrintWindowsDialog", "Text Segments", nullptr));
        DataCheckBox->setText(QApplication::translate("PrintWindowsDialog", "Data Segments", nullptr));
        ConsoleCheckBox->setText(QApplication::translate("PrintWindowsDialog", "Console", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PrintWindowsDialog: public Ui_PrintWindowsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINTWINDOWS_H
