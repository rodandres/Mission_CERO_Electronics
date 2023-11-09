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
    connect(dialog_connection, &DialogConnectMicrocontroller::microcontrollerConnectionStatus, this, &MainWindow::changeConnectionStatus);

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
    }else{
        ui->lbl_status->setText("DESCONECTADO");
        ui->lbl_status->setStyleSheet("background-color: rgb(170, 0, 3);");
    }
    qDebug()<<"ENTROOOOOOO";
}

