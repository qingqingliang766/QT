#include "setdialog.h"
#include "ui_setdialog.h"

SetDialog::SetDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SetDialog)
{
    ui->setupUi(this);
}

SetDialog::~SetDialog()
{
    delete ui;
}

void SetDialog::on_btnAdd_clicked()
{
    emit sig_addOne(100);
}
