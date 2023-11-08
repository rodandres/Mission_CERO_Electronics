#include "serialmanagement.h"

SerialManagement::SerialManagement(QObject *parent)
    : QObject{parent}
{
    micro_controller = new QSerialPort(); //Incializa la variabñe serial puesta en el header
    microcontroller_available = false;
    serial_buffer = "";
}

void SerialManagement::searchPortDescription()
{
    micro_controller_names.clear();   //Borrar la lista anterior que contiene todos los micrcontroladores antes disponibles
    foreach(const QSerialPortInfo& port, QSerialPortInfo::availablePorts()) //Añadir a la lista los microcontoladores que se encuentren disponibles
    {
        micro_controller_names.append(port.description());
    }
}

void SerialManagement::microcontrollerConecction(QString port_description)
{
    foreach (const QSerialPortInfo &serial_info, QSerialPortInfo::availablePorts()) {    //Buscar cada microcontrolador disponible para conexion
        if(serial_info.description() == port_description){    //Si detecta el microcontrolador seleccionado por el usuario, obtiene los datos
            qDebug()<<"Puerto: " << serial_info.portName();
            port_name = serial_info.portName();
            qDebug() << "Vendor ID: " << serial_info.vendorIdentifier();
            vendor_id = serial_info.vendorIdentifier();
            qDebug() << "Product ID: " << serial_info.productIdentifier();
            vendor_id = serial_info.productIdentifier();
            microcontroller_available = true;    // Confirma que el micrcontrolador sí está disponible
            break;
        }else{
            microcontroller_available  = false;   //Si no encuentra el micrcontrolador seleccionado por el usuario
        }
    }

    if(microcontroller_available){   //Si hay confirmacion de micrcontrolador disponible, inicializa la conexion
        qDebug() << "Se encontró un " << port_description <<", iniciando conexión";
        microcontrollerInit(port_description);  //Inicia la conexion con el micrcontrolador seleccionado por el usuario
    }else{
        qDebug() << "No se encontró a " << port_description; //No se enconro el microcontrolador seleccionado por el usuario, devuelve el mensaje
    }
}



void SerialManagement::microcontrollerInit(QString port_description)    //Inicializa la conexion con el microcontrolador especificado por el usuario
{
    micro_controller-> setPortName(port_name);
    micro_controller-> setBaudRate(QSerialPort::Baud9600);    //Tiene que ser la Misma que en arduino
    micro_controller-> setDataBits(QSerialPort::Data8);    //La longitud de la cadena de datos que se envia mediante el puerto serial
    micro_controller-> setParity(QSerialPort::NoParity);
    micro_controller-> setStopBits(QSerialPort::OneStop);
    micro_controller-> setFlowControl(QSerialPort::NoFlowControl);
    micro_controller-> open(QIODevice::ReadWrite);

    connect(micro_controller, SIGNAL(readyRead()),this,SLOT(serial_read())); //Conecta la señal de que llega un dato por el serial con el slot de leer el dato

    if (micro_controller->isOpen()){ //Si se pudo conectar con el microcontrolador, especifica el mensaje
        qDebug() << "Coneción con" << port_description<<" exitosa";
    }else{
        qDebug() << "No se pudo conectar con " << port_description;
    }
}

void SerialManagement::serialRead()
{
    QString data;
    QMap<QChar, QStringList> category_data_map;  // Usar un QMap para categorías
    const int LIMITE_DATOS_POR_CATEGORIA= 10;


    if (micro_controller->isReadable() && microcontroller_available) {    //Asegurarse que el micrcontrolador esta disponible y se puede leer
        // Leer datos del puerto serial
        serial_data = micro_controller->readAll();
        //Asegurarse que los elementos se leen correctamente
        serial_buffer += QString::fromStdString(serial_data .toStdString());

        // Dividir la cadena en elementos utilizando ',' como separador
        QStringList buffer_split = serial_buffer.split(',', Qt::SkipEmptyParts);  //ADATO, BDATO,...

        // Procesar los elementos divididos
        foreach (const QString &element, buffer_split ) {
            // Procesamiento con cada elemento

            //            qDebug() << "Elemento:" << element;
            // Verificar que el elemento no esté vacío por algún error
            if (!element.isEmpty()) {
                // Saber el primer carácter del elemento que corresponde a la categoría
                QChar category_identifier = element.at(0);
                // Obtener los datos (eliminar la categoría)
                data = element.mid(1);


                // Obtener la lista de datos de la categoría
                QStringList &category_data_list = category_data_map[category_identifier ];

                // Verificar si la lista supera el límite de datos
                if (category_data_list.size() >= LIMITE_DATOS_POR_CATEGORIA) {
                    // Si supera el límite, elimina el elemento más antiguo (el primero)
                    category_data_list.pop_front();
                }

                // Usar el QMap para categorías
                category_data_list.append(data);

                qDebug() << "Categoria: " << category_identifier;
                qDebug() << "Dato: " << data;
            }
        }
    }
    qDebug() << "Categoría A:" << category_data_map['A'];
        qDebug() << "Categoría B:" << category_data_map['B'];
        qDebug() << "Categoría C:" << category_data_map['C'];


}

void SerialManagement::serialClose()   //Terminar conexión con el serial
{
    micro_controller->close();
    qDebug() << "Conexión terminada";
}

void SerialManagement::sendData(QString data) //Para enviar datos al arduino
{
    if(micro_controller->isWritable()){  //Asegurarse que se puede escribir por el puerto seril
        micro_controller->write(data.toUtf8());  //Enviar el dato correctamente
    }else{
        qDebug()<<"No se pueden enviar los datos";
    }
}


void SerialManagement::test() // Para porbar cosas
{
}
