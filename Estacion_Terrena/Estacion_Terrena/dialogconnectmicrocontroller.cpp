#include "dialogconnectmicrocontroller.h"
#include "ui_dialogconnectmicrocontroller.h"

DialogConnectMicrocontroller::DialogConnectMicrocontroller(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogConnectMicrocontroller)
{
    ui->setupUi(this);
}

DialogConnectMicrocontroller::~DialogConnectMicrocontroller()
{
    delete ui;
}
