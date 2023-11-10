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
    void readDataProcessed(QChar category_identifier, QString data);

    void on_actionTerminar_conexi_n_triggered();

    void on_btn_arm_servo_clicked();

    void on_btn_test_connection_clicked();

private:
    Ui::MainWindow *ui;

    SerialManagement *serial_obj;
    DialogConnectMicrocontroller *dialog_connection;

};
#endif // MAINWINDOW_H
