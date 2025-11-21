#include "widget.h"
#include "./ui_widget.h"
#include "setdialog.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::handleSigAddOne(int value)
{
    ui->LineEdit->setText(QString::number(value));
}
void Widget::on_btnOpen_clicked()
{
    SetDialog dlg;

 //connect(发送者指针, &发送者类名::信号名, 接收者指针, &接收者类名::槽名);
    connect(&dlg, &SetDialog::sig_addOne, this, &Widget::handleSigAddOne);

    dlg.exec();
};
