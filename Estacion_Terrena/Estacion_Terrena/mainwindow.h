#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
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

private slots:
    void on_actionConectar_microcontrolador_triggered(bool checked);

    void on_actionConectar_microcontrolador_triggered();

    void on_actionConectar_microcontrolador_toggled(bool arg1);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
