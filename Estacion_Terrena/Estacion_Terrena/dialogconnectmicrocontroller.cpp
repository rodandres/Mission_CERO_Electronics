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

void DialogConnectMicrocontroller::on_btn_search_microcontrollers_clicked()
{
    serial_obj->serialClose();
    serial_obj->searchPortDescription();

    ui->cb_microcontrollers_names->clear();
    ui->cb_microcontrollers_names->addItem("Seleccione:");

    foreach (QString data, serial_obj->micro_controller_names) {
        ui->cb_microcontrollers_names->addItem(data);
    }
}

void DialogConnectMicrocontroller::on_cb_microcontrollers_names_activated(int index)
{
    int selected_index = ui->cb_microcontrollers_names->currentIndex(); // Obtiene el índice del elemento seleccionado
    serial_obj->serialClose();
    if (selected_index != -1) { // Si el índice seleccionado es diferente de -1, significa que hay un elemento seleccionado
        QString valorSeleccionado = ui->cb_microcontrollers_names->itemText(selected_index); //Obtiene el nombre del elemento de la lista (nombre del microcontrolador seleccionado)
        serial_obj->microcontrollerConecction(valorSeleccionado); //Inicia la conexion con el micrcontrolador seleccionado
    } else {
        ui->cb_microcontrollers_names->addItem("No se encuentran microcontroladores");
    }

}

