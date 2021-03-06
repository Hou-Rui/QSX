/********************************************************************************
** Form generated from reading UI file 'savelogfile.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVELOGFILE_H
#define UI_SAVELOGFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SaveLogFileDialog
{
public:
    QWidget *verticalLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QCheckBox *RegsCheckBox;
    QCheckBox *TextCheckBox;
    QCheckBox *DataCheckBox;
    QCheckBox *ConsoleCheckBox;
    QLabel *label_2;
    QLineEdit *SaveLineEdit;
    QToolButton *saveFileToolButton;
    QSpacerItem *verticalSpacer_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SaveLogFileDialog)
    {
        if (SaveLogFileDialog->objectName().isEmpty())
            SaveLogFileDialog->setObjectName(QString::fromUtf8("SaveLogFileDialog"));
        SaveLogFileDialog->resize(370, 286);
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        SaveLogFileDialog->setFont(font);
        verticalLayoutWidget = new QWidget(SaveLogFileDialog);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 350, 235));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        verticalLayoutWidget->setFont(font1);
        gridLayout = new QGridLayout(verticalLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setFont(font1);

        gridLayout->addWidget(label, 1, 1, 1, 1);

        RegsCheckBox = new QCheckBox(verticalLayoutWidget);
        RegsCheckBox->setObjectName(QString::fromUtf8("RegsCheckBox"));
        RegsCheckBox->setFont(font);

        gridLayout->addWidget(RegsCheckBox, 2, 1, 1, 1);

        TextCheckBox = new QCheckBox(verticalLayoutWidget);
        TextCheckBox->setObjectName(QString::fromUtf8("TextCheckBox"));
        TextCheckBox->setFont(font);

        gridLayout->addWidget(TextCheckBox, 3, 1, 1, 1);

        DataCheckBox = new QCheckBox(verticalLayoutWidget);
        DataCheckBox->setObjectName(QString::fromUtf8("DataCheckBox"));
        DataCheckBox->setFont(font);

        gridLayout->addWidget(DataCheckBox, 4, 1, 1, 1);

        ConsoleCheckBox = new QCheckBox(verticalLayoutWidget);
        ConsoleCheckBox->setObjectName(QString::fromUtf8("ConsoleCheckBox"));
        ConsoleCheckBox->setFont(font);

        gridLayout->addWidget(ConsoleCheckBox, 5, 1, 1, 1);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 7, 0, 1, 1);

        SaveLineEdit = new QLineEdit(verticalLayoutWidget);
        SaveLineEdit->setObjectName(QString::fromUtf8("SaveLineEdit"));
        SaveLineEdit->setFont(font1);

        gridLayout->addWidget(SaveLineEdit, 7, 1, 1, 1);

        saveFileToolButton = new QToolButton(verticalLayoutWidget);
        saveFileToolButton->setObjectName(QString::fromUtf8("saveFileToolButton"));
        saveFileToolButton->setFont(font1);

        gridLayout->addWidget(saveFileToolButton, 7, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 6, 0, 1, 1);

        buttonBox = new QDialogButtonBox(SaveLogFileDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(110, 250, 156, 23));
        buttonBox->setFont(font);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(SaveLogFileDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SaveLogFileDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SaveLogFileDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SaveLogFileDialog);
    } // setupUi

    void retranslateUi(QDialog *SaveLogFileDialog)
    {
        SaveLogFileDialog->setWindowTitle(QApplication::translate("SaveLogFileDialog", "Save Windows To Log File", nullptr));
        label->setText(QApplication::translate("SaveLogFileDialog", "Select windows to write to log file", nullptr));
        RegsCheckBox->setText(QApplication::translate("SaveLogFileDialog", "Registers", nullptr));
        TextCheckBox->setText(QApplication::translate("SaveLogFileDialog", "Text Segments", nullptr));
        DataCheckBox->setText(QApplication::translate("SaveLogFileDialog", "Data Segments", nullptr));
        ConsoleCheckBox->setText(QApplication::translate("SaveLogFileDialog", "Console", nullptr));
        label_2->setText(QApplication::translate("SaveLogFileDialog", "Save to file", nullptr));
        saveFileToolButton->setText(QApplication::translate("SaveLogFileDialog", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SaveLogFileDialog: public Ui_SaveLogFileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVELOGFILE_H
