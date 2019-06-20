#include "login.h"
#include "ui_login.h"
#include<QDebug>
#include<QPainter>
#include<QMessageBox>
Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;

     ui->label->setFont(QFont("Timers", 28, QFont::Bold));

}


void Login::on_pushButton_clicked()
{
    userName=ui->lineEdit->text();
    if (userName == "") {
        QMessageBox::warning(0,tr("警告"),tr("昵称不能为空"),QMessageBox::Ok);
        return;
    }
    chatWidget=new Widget(0,userName);
    chatWidget->setAttribute(Qt::WA_DeleteOnClose);

    chatWidget->show();

   // this->close();
}
