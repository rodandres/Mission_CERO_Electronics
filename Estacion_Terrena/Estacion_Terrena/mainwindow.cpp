#include "mainwindow.h"
#include "./ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    serial_obj  = new SerialManagement;   //Crear objeto para manejar el serial
    dialog_connection = new DialogConnectMicrocontroller;
    //    connect(dialog_connection, SIGNAL(microcontrollerConnectionStatus),this,changeConnectionStatus());
//    connect(dialog_connection, SIGNAL(microcontrollerConnectionStatus()), this, SLOT(changeConnectionStatus()));
    // Conecta la señal de DialogConnectMicrocontroller a una ranura en MainWindow
    connect(serial_obj, &SerialManagement::microcontrollerConnectionStatus, this, &MainWindow::changeConnectionStatus);
    connect(serial_obj, &SerialManagement::sendDataMainWindow, this, &MainWindow::readDataProcessed);


}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_actionConectar_microcontrolador_triggered()
{
    dialog_connection->setModal(true);
    dialog_connection->serial_obj = serial_obj;
    qDebug()<<"Entro C";
    dialog_connection->exec();

}

void MainWindow::changeConnectionStatus(bool status)
{

    if(status){
        ui->lbl_status->setText("CONECTADO");
        ui->lbl_status->setStyleSheet("background-color: rgb(0, 177, 41)");
        ui->actionTerminar_conexi_n->setEnabled(true);
    }else{
        ui->lbl_status->setText("DESCONECTADO");
        ui->lbl_status->setStyleSheet("background-color: rgb(170, 0, 3);");
        ui->actionTerminar_conexi_n->setEnabled(false);

        ui->lbl_acceleration_x_data->setText("NO DATA");
        ui->lbl_acceleration_y_data->setText("NO DATA");
        ui->lbl_acceleration_z_data->setText("NO DATA");
        ui->lbl_barometer_data->setText("NO DATA");
        ui->lbl_altitude_data->setText("NO DATA");
        ui->lbl_longitude_data->setText("NO DATA");
        ui->lbl_latitude_data->setText("NO DATA");

    }
    qDebug()<<"ENTROOOOOOO";
}

void MainWindow::readDataProcessed(QChar category_identifier, QString data)
{
    int category_value = category_identifier.toLatin1();  // Convierte el QChar a un valor entero
    QString text = data + " m/s^2";
    switch (category_value) {
    case 'A':
        ui->lbl_acceleration_x_data->setText(text);
        break;
    case 'B':
        ui->lbl_acceleration_y_data->setText(text);
        break;
    case 'C':
        ui->lbl_acceleration_z_data->setText(text);
        break;
    default:
        break;
    }
}


void MainWindow::on_actionTerminar_conexi_n_triggered()
{
    serial_obj->serialClose();
}


void MainWindow::on_btn_arm_servo_clicked()
{
    serial_obj->sendData("1");
}


void MainWindow::on_btn_test_connection_clicked()
{
    serial_obj->sendData("2");

}

