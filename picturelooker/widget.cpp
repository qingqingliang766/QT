#include "widget.h"
#include "./ui_widget.h"
#include <QDebug>
#include <QFileDialog>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    ui->picture->clear();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_btnopen_clicked()
{
    qDebug("kdjfkdjfkdj");
    QString FileName = QFileDialog::getOpenFileName(this);
    ui->address->setText(FileName);
    ui->picture->setPixmap(QPixmap(FileName));
}
