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
    bool microcontroller_available;
    bool microcontroller_connected;


public slots:
    void serialRead();

private:
    //Private variables
    QString port_name;

    quint16 vendor_id;
    quint16 product_id;

    QByteArray serial_data;
    QString serial_buffer;

    QMap<QChar, QStringList> category_data_map;


signals:
    void microcontrollerConnectionStatus(bool status);
    void sendDataMainWindow(QChar categoty_identifier, QString data);
};

#endif // SERIALMANAGEMENT_H
