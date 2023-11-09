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
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
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
    QAction *actionValor_de_cuenta_regresiva;
    QAction *actionConectar_microcontrolador;
    QAction *actionDesconectar_controlador;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *tab_test;
    QPushButton *pushButton;
    QWidget *tab_launch;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *mision_timer_layout;
    QVBoxLayout *timer_layout;
    QLabel *lbl_mision_timer;
    QLCDNumber *lcd__mission_timer;
    QVBoxLayout *mission_status_lauyout;
    QLabel *lbl_mission_status;
    QHBoxLayout *graphs_layout;
    QGraphicsView *graphicsView;
    QGraphicsView *graphicsView_2;
    QGraphicsView *graphicsView_3;
    QHBoxLayout *buttons_launch_layout;
    QPushButton *btn_arm_servo;
    QPushButton *btn_test_connection;
    QPushButton *btn_calibrate_imu;
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
    QMenu *menuConexi_n;
    QMenu *menuGuardado;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1129, 484);
        actionValor_de_cuenta_regresiva = new QAction(MainWindow);
        actionValor_de_cuenta_regresiva->setObjectName("actionValor_de_cuenta_regresiva");
        actionConectar_microcontrolador = new QAction(MainWindow);
        actionConectar_microcontrolador->setObjectName("actionConectar_microcontrolador");
        actionConectar_microcontrolador->setCheckable(false);
        actionDesconectar_controlador = new QAction(MainWindow);
        actionDesconectar_controlador->setObjectName("actionDesconectar_controlador");
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
        tab_launch = new QWidget();
        tab_launch->setObjectName("tab_launch");
        verticalLayout_3 = new QVBoxLayout(tab_launch);
        verticalLayout_3->setSpacing(10);
        verticalLayout_3->setObjectName("verticalLayout_3");
        mision_timer_layout = new QHBoxLayout();
        mision_timer_layout->setObjectName("mision_timer_layout");
        mision_timer_layout->setSizeConstraint(QLayout::SetMinAndMaxSize);
        timer_layout = new QVBoxLayout();
        timer_layout->setObjectName("timer_layout");
        lbl_mision_timer = new QLabel(tab_launch);
        lbl_mision_timer->setObjectName("lbl_mision_timer");
        lbl_mision_timer->setAlignment(Qt::AlignCenter);

        timer_layout->addWidget(lbl_mision_timer);

        lcd__mission_timer = new QLCDNumber(tab_launch);
        lcd__mission_timer->setObjectName("lcd__mission_timer");
        lcd__mission_timer->setMinimumSize(QSize(0, 80));
        lcd__mission_timer->setMaximumSize(QSize(16777215, 80));
        QFont font;
        font.setBold(false);
        lcd__mission_timer->setFont(font);
        lcd__mission_timer->setStyleSheet(QString::fromUtf8(""));

        timer_layout->addWidget(lcd__mission_timer);


        mision_timer_layout->addLayout(timer_layout);

        mission_status_lauyout = new QVBoxLayout();
        mission_status_lauyout->setObjectName("mission_status_lauyout");
        lbl_mission_status = new QLabel(tab_launch);
        lbl_mission_status->setObjectName("lbl_mission_status");
        QFont font1;
        font1.setBold(true);
        lbl_mission_status->setFont(font1);
        lbl_mission_status->setStyleSheet(QString::fromUtf8(" font-size: 30px;"));
        lbl_mission_status->setAlignment(Qt::AlignCenter);

        mission_status_lauyout->addWidget(lbl_mission_status);


        mision_timer_layout->addLayout(mission_status_lauyout);


        verticalLayout_3->addLayout(mision_timer_layout);

        graphs_layout = new QHBoxLayout();
        graphs_layout->setSpacing(10);
        graphs_layout->setObjectName("graphs_layout");
        graphs_layout->setContentsMargins(10, 10, 10, 10);
        graphicsView = new QGraphicsView(tab_launch);
        graphicsView->setObjectName("graphicsView");

        graphs_layout->addWidget(graphicsView);

        graphicsView_2 = new QGraphicsView(tab_launch);
        graphicsView_2->setObjectName("graphicsView_2");

        graphs_layout->addWidget(graphicsView_2);

        graphicsView_3 = new QGraphicsView(tab_launch);
        graphicsView_3->setObjectName("graphicsView_3");

        graphs_layout->addWidget(graphicsView_3);


        verticalLayout_3->addLayout(graphs_layout);

        buttons_launch_layout = new QHBoxLayout();
        buttons_launch_layout->setObjectName("buttons_launch_layout");
        btn_arm_servo = new QPushButton(tab_launch);
        btn_arm_servo->setObjectName("btn_arm_servo");

        buttons_launch_layout->addWidget(btn_arm_servo);

        btn_test_connection = new QPushButton(tab_launch);
        btn_test_connection->setObjectName("btn_test_connection");

        buttons_launch_layout->addWidget(btn_test_connection);

        btn_calibrate_imu = new QPushButton(tab_launch);
        btn_calibrate_imu->setObjectName("btn_calibrate_imu");

        buttons_launch_layout->addWidget(btn_calibrate_imu);


        verticalLayout_3->addLayout(buttons_launch_layout);

        tabWidget->addTab(tab_launch, QString());

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
        lbl_status->setFont(font1);
        lbl_status->setStyleSheet(QString::fromUtf8("background: rgb(170, 0, 3)"));
        lbl_status->setAlignment(Qt::AlignCenter);

        status_info_layaout->addWidget(lbl_status);

        info_layout = new QVBoxLayout();
        info_layout->setObjectName("info_layout");
        lbl_tittle_information = new QLabel(centralwidget);
        lbl_tittle_information->setObjectName("lbl_tittle_information");
        lbl_tittle_information->setFont(font1);
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
        label_5->setFont(font1);
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
        menuBar->setGeometry(QRect(0, 0, 1129, 21));
        menuAjustes = new QMenu(menuBar);
        menuAjustes->setObjectName("menuAjustes");
        menuConexi_n = new QMenu(menuBar);
        menuConexi_n->setObjectName("menuConexi_n");
        menuGuardado = new QMenu(menuBar);
        menuGuardado->setObjectName("menuGuardado");
        MainWindow->setMenuBar(menuBar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menuBar->addAction(menuAjustes->menuAction());
        menuBar->addAction(menuConexi_n->menuAction());
        menuBar->addAction(menuGuardado->menuAction());
        menuAjustes->addAction(actionValor_de_cuenta_regresiva);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionValor_de_cuenta_regresiva->setText(QCoreApplication::translate("MainWindow", "Valor de cuenta regresiva", nullptr));
        actionConectar_microcontrolador->setText(QCoreApplication::translate("MainWindow", "Conectar microcontrolador", nullptr));
        actionDesconectar_controlador->setText(QCoreApplication::translate("MainWindow", "Desconectar controlador", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_test), QCoreApplication::translate("MainWindow", "TEST", nullptr));
        lbl_mision_timer->setText(QCoreApplication::translate("MainWindow", "MISSION", nullptr));
        lbl_mission_status->setText(QCoreApplication::translate("MainWindow", "Cohete no conectado", nullptr));
        btn_arm_servo->setText(QCoreApplication::translate("MainWindow", "Armar servo", nullptr));
        btn_test_connection->setText(QCoreApplication::translate("MainWindow", "Probar conexi\303\263n", nullptr));
        btn_calibrate_imu->setText(QCoreApplication::translate("MainWindow", "Calibrar IMU", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_launch), QCoreApplication::translate("MainWindow", "LAUNCH", nullptr));
        lbl_status->setText(QCoreApplication::translate("MainWindow", "DESCONECTADO", nullptr));
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
        menuConexi_n->setTitle(QCoreApplication::translate("MainWindow", "Conexi\303\263n", nullptr));
        menuGuardado->setTitle(QCoreApplication::translate("MainWindow", "Guardado", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
