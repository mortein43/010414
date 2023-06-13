#ifndef PASSWORDS_H
#define PASSWORDS_H

#include <QMainWindow>
#include <QRegularExpression>
#include <QRegularExpressionValidator>


QT_BEGIN_NAMESPACE
namespace Ui { class Passwords; }
QT_END_NAMESPACE

class Passwords : public QMainWindow
{
    Q_OBJECT

public:
    Passwords(QWidget *parent = nullptr);
    ~Passwords();

private slots:
    void on_pushButton_clicked();
    void check();
    void on_lineEdit_returnPressed();

private:
    Ui::Passwords *ui;
    QString reg = "^(?=.*[a-z])(?=.*[A-Z])(?=.*\\d)(?=.*[@#+*])[A-Za-z\\d@#+*]{4,6}$";
    QRegularExpression regular = QRegularExpression(reg);
};
#endif // PASSWORDS_H
