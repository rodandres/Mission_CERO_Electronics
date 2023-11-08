#ifndef SERIALMANAGEMENT_H
#define SERIALMANAGEMENT_H

#include <QObject>

#include <QSerialPort>
#include <QSerialPortInfo>
#include <QDebug>

class SerialManagement : public QObject
{
    Q_OBJECT
public:
    explicit SerialManagement(QObject *parent = nullptr);

    // Public methods
    void microcontrollerInit(QString port_description);
    void serialClose();
    void sendData(QString data);
    void searchPortDescription();
    void microcontrollerConecction(QString port_description);
    void test();

    //Public variables
    QSerialPort *micro_controller;
    QList<QString> micro_controller_names;

public slots:
    void serialRead();

private:
    //Private variables
    QString port_name;

    quint16 vendor_id;
    quint16 product_id;

    bool microcontroller_available;

    QByteArray serial_data;
    QString serial_buffer;

};

#endif // SERIALMANAGEMENT_H
