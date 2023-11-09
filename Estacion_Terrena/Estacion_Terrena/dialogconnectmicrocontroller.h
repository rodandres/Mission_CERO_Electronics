#ifndef DIALOGCONNECTMICROCONTROLLER_H
#define DIALOGCONNECTMICROCONTROLLER_H

#include <QDialog>

namespace Ui {
class DialogConnectMicrocontroller;
}

class DialogConnectMicrocontroller : public QDialog
{
    Q_OBJECT

public:
    explicit DialogConnectMicrocontroller(QWidget *parent = nullptr);
    ~DialogConnectMicrocontroller();

private:
    Ui::DialogConnectMicrocontroller *ui;
};

#endif // DIALOGCONNECTMICROCONTROLLER_H
