#include <QApplication>
#include <QPushButton>
#include "mainui.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    mainui *ui=new mainui();
    ui->show();


    return QApplication::exec();
}
