/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <settablecheckbox.h>

QT_BEGIN_NAMESPACE

class Ui_SettingDialog
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *gridLayoutWidget_1;
    QGridLayout *gridLayout;
    QGroupBox *groupBox_3;
    QWidget *gridLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_3;
    QLineEdit *exceptionHandlerLineEdit;
    QCheckBox *loadExceptionHandlerCheckBox;
    QLabel *label_2;
    QToolButton *exceptionHandlerToolButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *exceptionHandlerResetButton;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget_1;
    QVBoxLayout *verticalLayout_1;
    QGridLayout *gridLayout_2;
    settableCheckBox *bareMachineCheckBox;
    settableCheckBox *delayedBranchCheckBox;
    settableCheckBox *delayedLoadCheckBox;
    QCheckBox *mappedIOCheckBox;
    settableCheckBox *pseudoInstCheckBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *simplePushButton;
    QPushButton *barePushButton;
    QWidget *tab_2;
    QWidget *verticalLayoutWidget_1;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *recentFilesLineEdit;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *quietCheckBox;
    QGroupBox *groupBox_4;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_4;
    QLineEdit *regWinBackgroundLineEdit;
    QLineEdit *regWinFontLineEdit;
    QLabel *label_4;
    QToolButton *regWinBackgroundToolButton;
    QLabel *label;
    QLineEdit *regWinFontColorLineEdit;
    QToolButton *regWinFontColorToolButton;
    QLabel *label_7;
    QToolButton *regWinFontToolButton;
    QGroupBox *groupBox_5;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_5;
    QToolButton *textWinFontColorToolButton;
    QLineEdit *textWinFontColorLineEdit;
    QLineEdit *textWinBackgroundLineEdit;
    QLabel *label_6;
    QToolButton *textWinBackgroundToolButton;
    QLabel *label_8;
    QLabel *label_5;
    QToolButton *textWinFontToolButton;
    QLineEdit *textWinFontLineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SettingDialog)
    {
        if (SettingDialog->objectName().isEmpty())
            SettingDialog->setObjectName(QString::fromUtf8("SettingDialog"));
        SettingDialog->resize(600, 466);
        tabWidget = new QTabWidget(SettingDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 0, 580, 421));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayoutWidget_1 = new QWidget(tab);
        gridLayoutWidget_1->setObjectName(QString::fromUtf8("gridLayoutWidget_1"));
        gridLayoutWidget_1->setGeometry(QRect(20, 10, 531, 371));
        gridLayout = new QGridLayout(gridLayoutWidget_1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        groupBox_3 = new QGroupBox(gridLayoutWidget_1);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayoutWidget_2 = new QWidget(groupBox_3);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(20, 20, 481, 72));
        verticalLayout_2 = new QVBoxLayout(gridLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        exceptionHandlerLineEdit = new QLineEdit(gridLayoutWidget_2);
        exceptionHandlerLineEdit->setObjectName(QString::fromUtf8("exceptionHandlerLineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(exceptionHandlerLineEdit->sizePolicy().hasHeightForWidth());
        exceptionHandlerLineEdit->setSizePolicy(sizePolicy);
        exceptionHandlerLineEdit->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(exceptionHandlerLineEdit, 0, 3, 1, 1);

        loadExceptionHandlerCheckBox = new QCheckBox(gridLayoutWidget_2);
        loadExceptionHandlerCheckBox->setObjectName(QString::fromUtf8("loadExceptionHandlerCheckBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(loadExceptionHandlerCheckBox->sizePolicy().hasHeightForWidth());
        loadExceptionHandlerCheckBox->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(loadExceptionHandlerCheckBox, 0, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(label_2, 0, 2, 1, 1);

        exceptionHandlerToolButton = new QToolButton(gridLayoutWidget_2);
        exceptionHandlerToolButton->setObjectName(QString::fromUtf8("exceptionHandlerToolButton"));
        exceptionHandlerToolButton->setMinimumSize(QSize(26, 22));

        gridLayout_3->addWidget(exceptionHandlerToolButton, 0, 4, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 0, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_3);

        exceptionHandlerResetButton = new QPushButton(gridLayoutWidget_2);
        exceptionHandlerResetButton->setObjectName(QString::fromUtf8("exceptionHandlerResetButton"));
        exceptionHandlerResetButton->setMinimumSize(QSize(200, 32));

        verticalLayout_2->addWidget(exceptionHandlerResetButton, 0, Qt::AlignHCenter);


        gridLayout->addWidget(groupBox_3, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(gridLayoutWidget_1);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        layoutWidget_1 = new QWidget(groupBox_2);
        layoutWidget_1->setObjectName(QString::fromUtf8("layoutWidget_1"));
        layoutWidget_1->setGeometry(QRect(20, 30, 481, 141));
        verticalLayout_1 = new QVBoxLayout(layoutWidget_1);
        verticalLayout_1->setObjectName(QString::fromUtf8("verticalLayout_1"));
        verticalLayout_1->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        bareMachineCheckBox = new settableCheckBox(layoutWidget_1);
        bareMachineCheckBox->setObjectName(QString::fromUtf8("bareMachineCheckBox"));

        gridLayout_2->addWidget(bareMachineCheckBox, 0, 0, 1, 1);

        delayedBranchCheckBox = new settableCheckBox(layoutWidget_1);
        delayedBranchCheckBox->setObjectName(QString::fromUtf8("delayedBranchCheckBox"));

        gridLayout_2->addWidget(delayedBranchCheckBox, 1, 0, 1, 1);

        delayedLoadCheckBox = new settableCheckBox(layoutWidget_1);
        delayedLoadCheckBox->setObjectName(QString::fromUtf8("delayedLoadCheckBox"));

        gridLayout_2->addWidget(delayedLoadCheckBox, 1, 1, 1, 1);

        mappedIOCheckBox = new QCheckBox(layoutWidget_1);
        mappedIOCheckBox->setObjectName(QString::fromUtf8("mappedIOCheckBox"));

        gridLayout_2->addWidget(mappedIOCheckBox, 2, 0, 1, 1);

        pseudoInstCheckBox = new settableCheckBox(layoutWidget_1);
        pseudoInstCheckBox->setObjectName(QString::fromUtf8("pseudoInstCheckBox"));

        gridLayout_2->addWidget(pseudoInstCheckBox, 0, 1, 1, 1);


        verticalLayout_1->addLayout(gridLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        simplePushButton = new QPushButton(layoutWidget_1);
        simplePushButton->setObjectName(QString::fromUtf8("simplePushButton"));
        simplePushButton->setMinimumSize(QSize(239, 32));

        horizontalLayout->addWidget(simplePushButton);

        barePushButton = new QPushButton(layoutWidget_1);
        barePushButton->setObjectName(QString::fromUtf8("barePushButton"));
        barePushButton->setMinimumSize(QSize(238, 32));

        horizontalLayout->addWidget(barePushButton);


        verticalLayout_1->addLayout(horizontalLayout);


        gridLayout->addWidget(groupBox_2, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayoutWidget_1 = new QWidget(tab_2);
        verticalLayoutWidget_1->setObjectName(QString::fromUtf8("verticalLayoutWidget_1"));
        verticalLayoutWidget_1->setGeometry(QRect(20, 10, 531, 371));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_1);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(verticalLayoutWidget_1);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        layoutWidget_2 = new QWidget(groupBox);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 20, 491, 91));
        verticalLayout_3 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        recentFilesLineEdit = new QLineEdit(layoutWidget_2);
        recentFilesLineEdit->setObjectName(QString::fromUtf8("recentFilesLineEdit"));
        sizePolicy1.setHeightForWidth(recentFilesLineEdit->sizePolicy().hasHeightForWidth());
        recentFilesLineEdit->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(recentFilesLineEdit);

        horizontalSpacer_4 = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        quietCheckBox = new QCheckBox(layoutWidget_2);
        quietCheckBox->setObjectName(QString::fromUtf8("quietCheckBox"));

        horizontalLayout_3->addWidget(quietCheckBox);


        verticalLayout_3->addLayout(horizontalLayout_3);


        verticalLayout_4->addWidget(groupBox);

        groupBox_4 = new QGroupBox(verticalLayoutWidget_1);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayoutWidget_3 = new QWidget(groupBox_4);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(20, 20, 491, 91));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        regWinBackgroundLineEdit = new QLineEdit(gridLayoutWidget_3);
        regWinBackgroundLineEdit->setObjectName(QString::fromUtf8("regWinBackgroundLineEdit"));
        sizePolicy1.setHeightForWidth(regWinBackgroundLineEdit->sizePolicy().hasHeightForWidth());
        regWinBackgroundLineEdit->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(regWinBackgroundLineEdit, 1, 1, 1, 1);

        regWinFontLineEdit = new QLineEdit(gridLayoutWidget_3);
        regWinFontLineEdit->setObjectName(QString::fromUtf8("regWinFontLineEdit"));
        sizePolicy1.setHeightForWidth(regWinFontLineEdit->sizePolicy().hasHeightForWidth());
        regWinFontLineEdit->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(regWinFontLineEdit, 0, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_4, 1, 0, 1, 1);

        regWinBackgroundToolButton = new QToolButton(gridLayoutWidget_3);
        regWinBackgroundToolButton->setObjectName(QString::fromUtf8("regWinBackgroundToolButton"));
        regWinBackgroundToolButton->setMinimumSize(QSize(26, 22));

        gridLayout_4->addWidget(regWinBackgroundToolButton, 1, 2, 1, 1);

        label = new QLabel(gridLayoutWidget_3);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        regWinFontColorLineEdit = new QLineEdit(gridLayoutWidget_3);
        regWinFontColorLineEdit->setObjectName(QString::fromUtf8("regWinFontColorLineEdit"));

        gridLayout_4->addWidget(regWinFontColorLineEdit, 0, 4, 1, 1);

        regWinFontColorToolButton = new QToolButton(gridLayoutWidget_3);
        regWinFontColorToolButton->setObjectName(QString::fromUtf8("regWinFontColorToolButton"));
        regWinFontColorToolButton->setMinimumSize(QSize(26, 22));

        gridLayout_4->addWidget(regWinFontColorToolButton, 0, 5, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_4->addWidget(label_7, 0, 3, 1, 1);

        regWinFontToolButton = new QToolButton(gridLayoutWidget_3);
        regWinFontToolButton->setObjectName(QString::fromUtf8("regWinFontToolButton"));
        regWinFontToolButton->setMinimumSize(QSize(26, 22));

        gridLayout_4->addWidget(regWinFontToolButton, 0, 2, 1, 1);


        verticalLayout_4->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(verticalLayoutWidget_1);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayoutWidget_4 = new QWidget(groupBox_5);
        gridLayoutWidget_4->setObjectName(QString::fromUtf8("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(20, 20, 491, 91));
        gridLayout_5 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        textWinFontColorToolButton = new QToolButton(gridLayoutWidget_4);
        textWinFontColorToolButton->setObjectName(QString::fromUtf8("textWinFontColorToolButton"));
        textWinFontColorToolButton->setMinimumSize(QSize(26, 22));

        gridLayout_5->addWidget(textWinFontColorToolButton, 0, 5, 1, 1);

        textWinFontColorLineEdit = new QLineEdit(gridLayoutWidget_4);
        textWinFontColorLineEdit->setObjectName(QString::fromUtf8("textWinFontColorLineEdit"));

        gridLayout_5->addWidget(textWinFontColorLineEdit, 0, 4, 1, 1);

        textWinBackgroundLineEdit = new QLineEdit(gridLayoutWidget_4);
        textWinBackgroundLineEdit->setObjectName(QString::fromUtf8("textWinBackgroundLineEdit"));
        sizePolicy1.setHeightForWidth(textWinBackgroundLineEdit->sizePolicy().hasHeightForWidth());
        textWinBackgroundLineEdit->setSizePolicy(sizePolicy1);

        gridLayout_5->addWidget(textWinBackgroundLineEdit, 1, 1, 1, 1);

        label_6 = new QLabel(gridLayoutWidget_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_5->addWidget(label_6, 1, 0, 1, 1);

        textWinBackgroundToolButton = new QToolButton(gridLayoutWidget_4);
        textWinBackgroundToolButton->setObjectName(QString::fromUtf8("textWinBackgroundToolButton"));
        textWinBackgroundToolButton->setMinimumSize(QSize(26, 22));

        gridLayout_5->addWidget(textWinBackgroundToolButton, 1, 2, 1, 1);

        label_8 = new QLabel(gridLayoutWidget_4);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_5->addWidget(label_8, 0, 3, 1, 1);

        label_5 = new QLabel(gridLayoutWidget_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_5->addWidget(label_5, 0, 0, 1, 1);

        textWinFontToolButton = new QToolButton(gridLayoutWidget_4);
        textWinFontToolButton->setObjectName(QString::fromUtf8("textWinFontToolButton"));
        textWinFontToolButton->setMinimumSize(QSize(26, 22));

        gridLayout_5->addWidget(textWinFontToolButton, 0, 2, 1, 1);

        textWinFontLineEdit = new QLineEdit(gridLayoutWidget_4);
        textWinFontLineEdit->setObjectName(QString::fromUtf8("textWinFontLineEdit"));
        sizePolicy1.setHeightForWidth(textWinFontLineEdit->sizePolicy().hasHeightForWidth());
        textWinFontLineEdit->setSizePolicy(sizePolicy1);

        gridLayout_5->addWidget(textWinFontLineEdit, 0, 1, 1, 1);


        verticalLayout_4->addWidget(groupBox_5);

        tabWidget->addTab(tab_2, QString());
        buttonBox = new QDialogButtonBox(SettingDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(210, 430, 180, 23));
        buttonBox->setMinimumSize(QSize(180, 23));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);
        QWidget::setTabOrder(tabWidget, bareMachineCheckBox);
        QWidget::setTabOrder(bareMachineCheckBox, pseudoInstCheckBox);
        QWidget::setTabOrder(pseudoInstCheckBox, delayedBranchCheckBox);
        QWidget::setTabOrder(delayedBranchCheckBox, delayedLoadCheckBox);
        QWidget::setTabOrder(delayedLoadCheckBox, mappedIOCheckBox);
        QWidget::setTabOrder(mappedIOCheckBox, simplePushButton);
        QWidget::setTabOrder(simplePushButton, barePushButton);
        QWidget::setTabOrder(barePushButton, loadExceptionHandlerCheckBox);
        QWidget::setTabOrder(loadExceptionHandlerCheckBox, exceptionHandlerLineEdit);
        QWidget::setTabOrder(exceptionHandlerLineEdit, exceptionHandlerToolButton);
        QWidget::setTabOrder(exceptionHandlerToolButton, exceptionHandlerResetButton);
        QWidget::setTabOrder(exceptionHandlerResetButton, buttonBox);
        QWidget::setTabOrder(buttonBox, recentFilesLineEdit);
        QWidget::setTabOrder(recentFilesLineEdit, regWinFontLineEdit);
        QWidget::setTabOrder(regWinFontLineEdit, regWinFontToolButton);
        QWidget::setTabOrder(regWinFontToolButton, regWinFontColorLineEdit);
        QWidget::setTabOrder(regWinFontColorLineEdit, regWinFontColorToolButton);
        QWidget::setTabOrder(regWinFontColorToolButton, regWinBackgroundLineEdit);
        QWidget::setTabOrder(regWinBackgroundLineEdit, regWinBackgroundToolButton);
        QWidget::setTabOrder(regWinBackgroundToolButton, textWinFontLineEdit);
        QWidget::setTabOrder(textWinFontLineEdit, textWinFontToolButton);
        QWidget::setTabOrder(textWinFontToolButton, textWinFontColorLineEdit);
        QWidget::setTabOrder(textWinFontColorLineEdit, textWinFontColorToolButton);
        QWidget::setTabOrder(textWinFontColorToolButton, textWinBackgroundLineEdit);
        QWidget::setTabOrder(textWinBackgroundLineEdit, textWinBackgroundToolButton);

        retranslateUi(SettingDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SettingDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SettingDialog, SLOT(reject()));

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(SettingDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingDialog)
    {
        SettingDialog->setWindowTitle(QApplication::translate("SettingDialog", "QtSpim Settings", nullptr));
        groupBox_3->setTitle(QApplication::translate("SettingDialog", "Exception Handler", nullptr));
        loadExceptionHandlerCheckBox->setText(QApplication::translate("SettingDialog", "Load Exception Handler", nullptr));
        label_2->setText(QApplication::translate("SettingDialog", "File", nullptr));
        exceptionHandlerToolButton->setText(QApplication::translate("SettingDialog", "...", nullptr));
        exceptionHandlerResetButton->setText(QApplication::translate("SettingDialog", "Use default exception handler", nullptr));
        groupBox_2->setTitle(QApplication::translate("SettingDialog", "MIPS Simulation Settings", nullptr));
        bareMachineCheckBox->setText(QApplication::translate("SettingDialog", "Bare Machine", nullptr));
        delayedBranchCheckBox->setText(QApplication::translate("SettingDialog", "Enable Delayed Branches", nullptr));
        delayedLoadCheckBox->setText(QApplication::translate("SettingDialog", "Enable Delayed Loads", nullptr));
        mappedIOCheckBox->setText(QApplication::translate("SettingDialog", "Enable Mapped IO", nullptr));
        pseudoInstCheckBox->setText(QApplication::translate("SettingDialog", "Accept Pseudo Instructions", nullptr));
        simplePushButton->setText(QApplication::translate("SettingDialog", "Simple Machine", nullptr));
        barePushButton->setText(QApplication::translate("SettingDialog", "Bare Machine", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("SettingDialog", "MIPS", nullptr));
        groupBox->setTitle(QApplication::translate("SettingDialog", "Simulator", nullptr));
        label_3->setText(QApplication::translate("SettingDialog", "Length of Recent File list", nullptr));
        quietCheckBox->setText(QApplication::translate("SettingDialog", "Quiet", nullptr));
        groupBox_4->setTitle(QApplication::translate("SettingDialog", "Register Windows", nullptr));
        label_4->setText(QApplication::translate("SettingDialog", "Background Color", nullptr));
        regWinBackgroundToolButton->setText(QApplication::translate("SettingDialog", "...", nullptr));
        label->setText(QApplication::translate("SettingDialog", "Font", nullptr));
        regWinFontColorToolButton->setText(QApplication::translate("SettingDialog", "...", nullptr));
        label_7->setText(QApplication::translate("SettingDialog", "Color", nullptr));
        regWinFontToolButton->setText(QApplication::translate("SettingDialog", "...", nullptr));
        groupBox_5->setTitle(QApplication::translate("SettingDialog", "Text and Data Windows", nullptr));
        textWinFontColorToolButton->setText(QApplication::translate("SettingDialog", "...", nullptr));
        label_6->setText(QApplication::translate("SettingDialog", "Background Color", nullptr));
        textWinBackgroundToolButton->setText(QApplication::translate("SettingDialog", "...", nullptr));
        label_8->setText(QApplication::translate("SettingDialog", "Color", nullptr));
        label_5->setText(QApplication::translate("SettingDialog", "Font", nullptr));
        textWinFontToolButton->setText(QApplication::translate("SettingDialog", "...", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("SettingDialog", "QtSpim", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingDialog: public Ui_SettingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
