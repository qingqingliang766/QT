#include "mainwindow.h"
#include <QDebug>
#include <QApplication>
#include "agesiganl.h"
#include "Receiver.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    qDebug() << a.applicationFilePath();//显示应用程序目录
    AgeSiganl senderOBJ;
    Receiver receiverOBJ;
    senderOBJ.incAge();
    QObject::connect(&senderOBJ, &AgeSiganl::ageChanged,
                     &receiverOBJ, &Receiver::ageChanged);
    //QObject::connect(发送者, 信号, 接收者, 槽函数);
    senderOBJ.incAge();
    senderOBJ.incAge();
    QObject::disconnect(&senderOBJ, &AgeSiganl::ageChanged,
                     &receiverOBJ, &Receiver::ageChanged);
    senderOBJ.incAge();
    senderOBJ.incAge();
    return a.exec();
}
