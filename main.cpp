#include "passwords.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Passwords w;
    w.show();
    return a.exec();
}
