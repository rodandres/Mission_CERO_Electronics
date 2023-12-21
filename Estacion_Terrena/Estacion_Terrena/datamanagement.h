#ifndef DATAMANAGEMENT_H
#define DATAMANAGEMENT_H

#include <QObject>
#include <QFileDialog>

class DataManagement : public QObject
{
    Q_OBJECT
public:
    explicit DataManagement(QObject *parent = nullptr);
    void fileCreation();
    void dataWrite(QString data);
    void closeFile();

    QString directorioSeleccionado;
    QFile dataFile;
signals:

private:
    void pathSelection();
};

#endif // DATAMANAGEMENT_H
