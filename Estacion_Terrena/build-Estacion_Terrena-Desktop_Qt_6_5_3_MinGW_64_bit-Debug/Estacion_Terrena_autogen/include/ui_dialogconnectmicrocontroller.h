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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogConnectMicrocontroller
{
public:
    QPushButton *btn_search_microcontrollers;
    QComboBox *cb_microcontrollers_names;

    void setupUi(QDialog *DialogConnectMicrocontroller)
    {
        if (DialogConnectMicrocontroller->objectName().isEmpty())
            DialogConnectMicrocontroller->setObjectName("DialogConnectMicrocontroller");
        DialogConnectMicrocontroller->resize(352, 165);
        btn_search_microcontrollers = new QPushButton(DialogConnectMicrocontroller);
        btn_search_microcontrollers->setObjectName("btn_search_microcontrollers");
        btn_search_microcontrollers->setGeometry(QRect(100, 40, 171, 31));
        cb_microcontrollers_names = new QComboBox(DialogConnectMicrocontroller);
        cb_microcontrollers_names->addItem(QString());
        cb_microcontrollers_names->setObjectName("cb_microcontrollers_names");
        cb_microcontrollers_names->setGeometry(QRect(100, 90, 171, 24));

        retranslateUi(DialogConnectMicrocontroller);

        QMetaObject::connectSlotsByName(DialogConnectMicrocontroller);
    } // setupUi

    void retranslateUi(QDialog *DialogConnectMicrocontroller)
    {
        DialogConnectMicrocontroller->setWindowTitle(QCoreApplication::translate("DialogConnectMicrocontroller", "Dialog", nullptr));
        btn_search_microcontrollers->setText(QCoreApplication::translate("DialogConnectMicrocontroller", "Buscar microcontroladores", nullptr));
        cb_microcontrollers_names->setItemText(0, QCoreApplication::translate("DialogConnectMicrocontroller", "Buscar microcontroladores", nullptr));

    } // retranslateUi

};

namespace Ui {
    class DialogConnectMicrocontroller: public Ui_DialogConnectMicrocontroller {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCONNECTMICROCONTROLLER_H
