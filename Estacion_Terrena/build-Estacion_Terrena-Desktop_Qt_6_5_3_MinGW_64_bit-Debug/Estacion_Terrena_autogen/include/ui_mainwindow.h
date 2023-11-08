/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *tab_test;
    QPushButton *pushButton;
    QWidget *tab_2;
    QPushButton *pushButton_2;
    QVBoxLayout *status_info_layaout;
    QLabel *lbl_status;
    QVBoxLayout *info_layout;
    QLabel *lbl_tittle_information;
    QHBoxLayout *info_collumins_layout;
    QVBoxLayout *info_left_layout;
    QLabel *label_6;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_15;
    QVBoxLayout *info_right_layout;
    QLabel *lbl_computadora_principal_info;
    QLabel *lbl_secondaty_computer_info;
    QLabel *lbl_imu_info;
    QLabel *lbl_gps_info;
    QLabel *lbl_vibration_info_;
    QLabel *lbl_parachute_info;
    QLabel *label_5;
    QHBoxLayout *data_collumns_layout;
    QVBoxLayout *data_right_layout;
    QLabel *label_7;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QVBoxLayout *verticalLayout_2;
    QLabel *lbl_acceleration_x_data;
    QLabel *lbl_acceleration_y_data;
    QLabel *lbl_acceleration_z_data;
    QLabel *lbl_barometer_data;
    QLabel *lbl_latitude_data;
    QLabel *lbl_longitude_data;
    QLabel *lbl_altitude_data;
    QSpacerItem *verticalSpacer;
    QMenuBar *menuBar;
    QMenu *menuAjustes;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(815, 474);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setTabPosition(QTabWidget::West);
        tab_test = new QWidget();
        tab_test->setObjectName("tab_test");
        pushButton = new QPushButton(tab_test);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(9, 132, 80, 24));
        tabWidget->addTab(tab_test, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        pushButton_2 = new QPushButton(tab_2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(9, 132, 80, 24));
        tabWidget->addTab(tab_2, QString());

        horizontalLayout->addWidget(tabWidget);

        status_info_layaout = new QVBoxLayout();
        status_info_layaout->setObjectName("status_info_layaout");
        status_info_layaout->setContentsMargins(-1, 0, 7, -1);
        lbl_status = new QLabel(centralwidget);
        lbl_status->setObjectName("lbl_status");
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lbl_status->sizePolicy().hasHeightForWidth());
        lbl_status->setSizePolicy(sizePolicy1);
        lbl_status->setMinimumSize(QSize(0, 75));
        lbl_status->setMaximumSize(QSize(16777215, 75));
        lbl_status->setAlignment(Qt::AlignCenter);

        status_info_layaout->addWidget(lbl_status);

        info_layout = new QVBoxLayout();
        info_layout->setObjectName("info_layout");
        lbl_tittle_information = new QLabel(centralwidget);
        lbl_tittle_information->setObjectName("lbl_tittle_information");
        lbl_tittle_information->setAlignment(Qt::AlignCenter);

        info_layout->addWidget(lbl_tittle_information);

        info_collumins_layout = new QHBoxLayout();
        info_collumins_layout->setObjectName("info_collumins_layout");
        info_left_layout = new QVBoxLayout();
        info_left_layout->setObjectName("info_left_layout");
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy2);
        label_6->setAlignment(Qt::AlignCenter);

        info_left_layout->addWidget(label_6);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignCenter);

        info_left_layout->addWidget(label_2);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignCenter);

        info_left_layout->addWidget(label_4);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);

        info_left_layout->addWidget(label);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignCenter);

        info_left_layout->addWidget(label_3);

        label_15 = new QLabel(centralwidget);
        label_15->setObjectName("label_15");
        label_15->setAlignment(Qt::AlignCenter);

        info_left_layout->addWidget(label_15);


        info_collumins_layout->addLayout(info_left_layout);

        info_right_layout = new QVBoxLayout();
        info_right_layout->setObjectName("info_right_layout");
        lbl_computadora_principal_info = new QLabel(centralwidget);
        lbl_computadora_principal_info->setObjectName("lbl_computadora_principal_info");
        lbl_computadora_principal_info->setAlignment(Qt::AlignCenter);

        info_right_layout->addWidget(lbl_computadora_principal_info);

        lbl_secondaty_computer_info = new QLabel(centralwidget);
        lbl_secondaty_computer_info->setObjectName("lbl_secondaty_computer_info");
        lbl_secondaty_computer_info->setAlignment(Qt::AlignCenter);

        info_right_layout->addWidget(lbl_secondaty_computer_info);

        lbl_imu_info = new QLabel(centralwidget);
        lbl_imu_info->setObjectName("lbl_imu_info");
        lbl_imu_info->setAlignment(Qt::AlignCenter);

        info_right_layout->addWidget(lbl_imu_info);

        lbl_gps_info = new QLabel(centralwidget);
        lbl_gps_info->setObjectName("lbl_gps_info");
        lbl_gps_info->setAlignment(Qt::AlignCenter);

        info_right_layout->addWidget(lbl_gps_info);

        lbl_vibration_info_ = new QLabel(centralwidget);
        lbl_vibration_info_->setObjectName("lbl_vibration_info_");
        lbl_vibration_info_->setAlignment(Qt::AlignCenter);

        info_right_layout->addWidget(lbl_vibration_info_);

        lbl_parachute_info = new QLabel(centralwidget);
        lbl_parachute_info->setObjectName("lbl_parachute_info");

        info_right_layout->addWidget(lbl_parachute_info);


        info_collumins_layout->addLayout(info_right_layout);


        info_layout->addLayout(info_collumins_layout);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignCenter);

        info_layout->addWidget(label_5);

        data_collumns_layout = new QHBoxLayout();
        data_collumns_layout->setObjectName("data_collumns_layout");
        data_right_layout = new QVBoxLayout();
        data_right_layout->setObjectName("data_right_layout");
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setAlignment(Qt::AlignCenter);

        data_right_layout->addWidget(label_7);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setAlignment(Qt::AlignCenter);

        data_right_layout->addWidget(label_9);

        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setAlignment(Qt::AlignCenter);

        data_right_layout->addWidget(label_10);

        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        label_11->setAlignment(Qt::AlignCenter);

        data_right_layout->addWidget(label_11);

        label_12 = new QLabel(centralwidget);
        label_12->setObjectName("label_12");
        label_12->setAlignment(Qt::AlignCenter);

        data_right_layout->addWidget(label_12);

        label_13 = new QLabel(centralwidget);
        label_13->setObjectName("label_13");
        label_13->setAlignment(Qt::AlignCenter);

        data_right_layout->addWidget(label_13);

        label_14 = new QLabel(centralwidget);
        label_14->setObjectName("label_14");
        label_14->setAlignment(Qt::AlignCenter);

        data_right_layout->addWidget(label_14);


        data_collumns_layout->addLayout(data_right_layout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        lbl_acceleration_x_data = new QLabel(centralwidget);
        lbl_acceleration_x_data->setObjectName("lbl_acceleration_x_data");
        lbl_acceleration_x_data->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lbl_acceleration_x_data);

        lbl_acceleration_y_data = new QLabel(centralwidget);
        lbl_acceleration_y_data->setObjectName("lbl_acceleration_y_data");
        lbl_acceleration_y_data->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lbl_acceleration_y_data);

        lbl_acceleration_z_data = new QLabel(centralwidget);
        lbl_acceleration_z_data->setObjectName("lbl_acceleration_z_data");
        lbl_acceleration_z_data->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lbl_acceleration_z_data);

        lbl_barometer_data = new QLabel(centralwidget);
        lbl_barometer_data->setObjectName("lbl_barometer_data");
        lbl_barometer_data->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lbl_barometer_data);

        lbl_latitude_data = new QLabel(centralwidget);
        lbl_latitude_data->setObjectName("lbl_latitude_data");
        lbl_latitude_data->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lbl_latitude_data);

        lbl_longitude_data = new QLabel(centralwidget);
        lbl_longitude_data->setObjectName("lbl_longitude_data");
        lbl_longitude_data->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lbl_longitude_data);

        lbl_altitude_data = new QLabel(centralwidget);
        lbl_altitude_data->setObjectName("lbl_altitude_data");
        lbl_altitude_data->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lbl_altitude_data);


        data_collumns_layout->addLayout(verticalLayout_2);


        info_layout->addLayout(data_collumns_layout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        info_layout->addItem(verticalSpacer);


        status_info_layaout->addLayout(info_layout);


        horizontalLayout->addLayout(status_info_layaout);

        MainWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 815, 21));
        menuAjustes = new QMenu(menuBar);
        menuAjustes->setObjectName("menuAjustes");
        MainWindow->setMenuBar(menuBar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menuBar->addAction(menuAjustes->menuAction());

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_test), QCoreApplication::translate("MainWindow", "TEST", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "LAUNCH", nullptr));
        lbl_status->setText(QCoreApplication::translate("MainWindow", "ESTADO ESTACION TERRENA", nullptr));
        lbl_tittle_information->setText(QCoreApplication::translate("MainWindow", "INFORMACION", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Computadora principal", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Computadora secundaria", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "IMU", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "GPS", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Sensor de Vibraci\303\263n", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Despliegue paracaidas", nullptr));
        lbl_computadora_principal_info->setText(QCoreApplication::translate("MainWindow", "SIN CONEXI\303\223N", nullptr));
        lbl_secondaty_computer_info->setText(QCoreApplication::translate("MainWindow", "SIN CONEXI\303\223N", nullptr));
        lbl_imu_info->setText(QCoreApplication::translate("MainWindow", "SIN CONEXI\303\223N", nullptr));
        lbl_gps_info->setText(QCoreApplication::translate("MainWindow", "SIN CONEXI\303\223N", nullptr));
        lbl_vibration_info_->setText(QCoreApplication::translate("MainWindow", "SIN CONEXI\303\223N", nullptr));
        lbl_parachute_info->setText(QCoreApplication::translate("MainWindow", "NO CONFIRMADO", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "DATA", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Aceleraci\303\263n X", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Aceleraci\303\263n Y", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Aceleraci\303\263n Z", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Barometro", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Latitud", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Longitud", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Altitud", nullptr));
        lbl_acceleration_x_data->setText(QCoreApplication::translate("MainWindow", "NO DATA", nullptr));
        lbl_acceleration_y_data->setText(QCoreApplication::translate("MainWindow", "NO DATA", nullptr));
        lbl_acceleration_z_data->setText(QCoreApplication::translate("MainWindow", "NO DATA", nullptr));
        lbl_barometer_data->setText(QCoreApplication::translate("MainWindow", "NO DATA", nullptr));
        lbl_latitude_data->setText(QCoreApplication::translate("MainWindow", "NO DATA", nullptr));
        lbl_longitude_data->setText(QCoreApplication::translate("MainWindow", "NO DATA", nullptr));
        lbl_altitude_data->setText(QCoreApplication::translate("MainWindow", "NO DATA", nullptr));
        menuAjustes->setTitle(QCoreApplication::translate("MainWindow", "Ajustes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
