#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "serialmanagement.h"
#include "dialogconnectmicrocontroller.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
signals:


private slots:
    void on_actionConectar_microcontrolador_triggered();
    void changeConnectionStatus(bool status);

private:
    Ui::MainWindow *ui;

    SerialManagement *serial_obj;
    DialogConnectMicrocontroller *dialog_connection;

};
#endif // MAINWINDOW_H
