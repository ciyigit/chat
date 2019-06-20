#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include"widget.h"
namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = 0);
    ~Login();
private slots:
    void on_pushButton_clicked();

private:
    Ui::Login *ui;
    QString userName;

    Widget *chatWidget;
};

#endif // LOGIN_H
