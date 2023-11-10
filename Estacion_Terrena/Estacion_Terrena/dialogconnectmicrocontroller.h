#ifndef DIALOGCONNECTMICROCONTROLLER_H
#define DIALOGCONNECTMICROCONTROLLER_H

#include <QDialog>
#include "serialmanagement.h"

namespace Ui {
class DialogConnectMicrocontroller;
}

class DialogConnectMicrocontroller : public QDialog
{
    Q_OBJECT

public:
    explicit DialogConnectMicrocontroller(QWidget *parent = nullptr);
    ~DialogConnectMicrocontroller();

    SerialManagement* serial_obj;

private slots:
    void on_btn_search_microcontrollers_clicked();

    void on_cb_microcontrollers_names_activated(int index);

private:
    Ui::DialogConnectMicrocontroller *ui;



};

#endif // DIALOGCONNECTMICROCONTROLLER_H
