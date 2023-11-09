/********************************************************************************
** Form generated from reading UI file 'dialogconnectmicrocontroller.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCONNECTMICROCONTROLLER_H
#define UI_DIALOGCONNECTMICROCONTROLLER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogConnectMicrocontroller
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *DialogConnectMicrocontroller)
    {
        if (DialogConnectMicrocontroller->objectName().isEmpty())
            DialogConnectMicrocontroller->setObjectName("DialogConnectMicrocontroller");
        DialogConnectMicrocontroller->resize(400, 300);
        pushButton = new QPushButton(DialogConnectMicrocontroller);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(80, 80, 80, 24));

        retranslateUi(DialogConnectMicrocontroller);

        QMetaObject::connectSlotsByName(DialogConnectMicrocontroller);
    } // setupUi

    void retranslateUi(QDialog *DialogConnectMicrocontroller)
    {
        DialogConnectMicrocontroller->setWindowTitle(QCoreApplication::translate("DialogConnectMicrocontroller", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("DialogConnectMicrocontroller", "Conectar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogConnectMicrocontroller: public Ui_DialogConnectMicrocontroller {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCONNECTMICROCONTROLLER_H
