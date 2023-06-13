#include "passwords.h"
#include "./ui_passwords.h"

Passwords::Passwords(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Passwords)
{
    ui->setupUi(this);
}

Passwords::~Passwords()
{
    delete ui;
}
void Passwords::check()
{
    QString temp = ui->lineEdit->text();
    QRegularExpressionMatch obj = regular.match(temp);
    if (obj.hasMatch())
    {
        ui->label->setText(temp + " - " + "Може існувати");
        ui->lineEdit->clear();
    } else
    {
        ui->label->setText(temp + " - " + "Не може існувати");
        ui->lineEdit->clear();
    }
}


void Passwords::on_pushButton_clicked()
{
    check();
}


void Passwords::on_lineEdit_returnPressed()
{
    check();
}

