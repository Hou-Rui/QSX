/********************************************************************************
** Form generated from reading UI file 'changevalue.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEVALUE_H
#define UI_CHANGEVALUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChangeValueDialog
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *answerLineEdit;
    QHBoxLayout *horizontalLayout;
    QRadioButton *hexRadioButton;
    QRadioButton *decimalRadioButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ChangeValueDialog)
    {
        if (ChangeValueDialog->objectName().isEmpty())
            ChangeValueDialog->setObjectName(QString::fromUtf8("ChangeValueDialog"));
        ChangeValueDialog->resize(239, 160);
        verticalLayoutWidget = new QWidget(ChangeValueDialog);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 221, 141));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        answerLineEdit = new QLineEdit(verticalLayoutWidget);
        answerLineEdit->setObjectName(QString::fromUtf8("answerLineEdit"));

        verticalLayout->addWidget(answerLineEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        hexRadioButton = new QRadioButton(verticalLayoutWidget);
        hexRadioButton->setObjectName(QString::fromUtf8("hexRadioButton"));

        horizontalLayout->addWidget(hexRadioButton);

        decimalRadioButton = new QRadioButton(verticalLayoutWidget);
        decimalRadioButton->setObjectName(QString::fromUtf8("decimalRadioButton"));

        horizontalLayout->addWidget(decimalRadioButton);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(verticalLayoutWidget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ChangeValueDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ChangeValueDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ChangeValueDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ChangeValueDialog);
    } // setupUi

    void retranslateUi(QDialog *ChangeValueDialog)
    {
        ChangeValueDialog->setWindowTitle(QApplication::translate("ChangeValueDialog", "Change Value", nullptr));
        label->setText(QApplication::translate("ChangeValueDialog", "Change value to:", nullptr));
        hexRadioButton->setText(QApplication::translate("ChangeValueDialog", "Hexadecimal", nullptr));
        decimalRadioButton->setText(QApplication::translate("ChangeValueDialog", "Decimal", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChangeValueDialog: public Ui_ChangeValueDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEVALUE_H
