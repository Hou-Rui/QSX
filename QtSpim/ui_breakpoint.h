/********************************************************************************
** Form generated from reading UI file 'breakpoint.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BREAKPOINT_H
#define UI_BREAKPOINT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BreakpointDialog
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *continuePushButton;
    QPushButton *singleStepPushButton;
    QPushButton *abortPushButton;

    void setupUi(QDialog *BreakpointDialog)
    {
        if (BreakpointDialog->objectName().isEmpty())
            BreakpointDialog->setObjectName(QString::fromUtf8("BreakpointDialog"));
        BreakpointDialog->resize(282, 100);
        verticalLayoutWidget = new QWidget(BreakpointDialog);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 261, 80));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        continuePushButton = new QPushButton(verticalLayoutWidget);
        continuePushButton->setObjectName(QString::fromUtf8("continuePushButton"));

        horizontalLayout_2->addWidget(continuePushButton);

        singleStepPushButton = new QPushButton(verticalLayoutWidget);
        singleStepPushButton->setObjectName(QString::fromUtf8("singleStepPushButton"));

        horizontalLayout_2->addWidget(singleStepPushButton);

        abortPushButton = new QPushButton(verticalLayoutWidget);
        abortPushButton->setObjectName(QString::fromUtf8("abortPushButton"));

        horizontalLayout_2->addWidget(abortPushButton);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(BreakpointDialog);
        QObject::connect(continuePushButton, SIGNAL(clicked()), BreakpointDialog, SLOT(close()));
        QObject::connect(singleStepPushButton, SIGNAL(clicked()), BreakpointDialog, SLOT(close()));
        QObject::connect(abortPushButton, SIGNAL(clicked()), BreakpointDialog, SLOT(close()));

        continuePushButton->setDefault(true);


        QMetaObject::connectSlotsByName(BreakpointDialog);
    } // setupUi

    void retranslateUi(QDialog *BreakpointDialog)
    {
        BreakpointDialog->setWindowTitle(QApplication::translate("BreakpointDialog", "Breakpoint", nullptr));
        label->setText(QApplication::translate("BreakpointDialog", "Execution stopped at a breakpoint", nullptr));
        continuePushButton->setText(QApplication::translate("BreakpointDialog", "Continue", nullptr));
        singleStepPushButton->setText(QApplication::translate("BreakpointDialog", "Single Step", nullptr));
        abortPushButton->setText(QApplication::translate("BreakpointDialog", "Abort", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BreakpointDialog: public Ui_BreakpointDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BREAKPOINT_H
