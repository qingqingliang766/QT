#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QPushButton>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    auto *quitBtn = new QPushButton("Quit", this);
    quitBtn->setGeometry(50, 25, 100, 50);
    connect(quitBtn, &QPushButton::clicked, qApp, &QApplication::quit);
}

MainWindow::~MainWindow()
{
    delete ui;
}
