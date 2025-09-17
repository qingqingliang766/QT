#include "notebook.h"
#include "./ui_notebook.h"

NoteBook::NoteBook(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::NoteBook)
{
    ui->setupUi(this);
}

NoteBook::~NoteBook()
{
    delete ui;
}
