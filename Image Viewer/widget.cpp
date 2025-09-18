#include "widget.h"
#include "./ui_widget.h"
#include <QDebug>
#include <QFileDialog>
#include <QSettings>
#include <QStandardPaths>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->btnopen, &QPushButton::clicked, this, &Widget::btnopen_clicked);
    ui->picture->clear();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::btnopen_clicked()
{
    QString config_path = qApp->applicationDirPath() + "/config.ini";
    qDebug() << config_path;

    //从 INI 配置文件中读取指定键的值
    QSettings *pIniSet = new QSettings(config_path, QSettings::IniFormat);

    //并转成字符串存到变量里
    QString lastPath = pIniSet->value("/LastPath/path").toString();

    if(lastPath.isEmpty())
    {
        //默认打开电脑图片路径
        lastPath = QStandardPaths::writableLocation(QStandardPaths::PicturesLocation);
    }

    QString FileName = QFileDialog::getOpenFileName(this, "请选择目录：", lastPath);
    if (FileName.isEmpty()) { // 处理“用户取消选择”的情况
        delete pIniSet;
        return;
    }

    //图片自适应功能
    QPixmap *pix = new QPixmap(FileName);
    pix->scaled(ui->picture->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation);
    //ui->picture->setScaledContents(true);
    ui->picture->setAlignment(Qt::AlignCenter); // 图片在 QLabel 中居中

    ui->address->setText(FileName);
    ui->picture->setPixmap(*pix);
    delete pix;
    pix = nullptr;

    //保存上次打开目录
    int end = FileName.lastIndexOf("/");
    QString _path = FileName.left(end);
    pIniSet->setValue("/LastPath/path", _path);
    qDebug() << _path;
    delete pIniSet;
    pIniSet = nullptr;
}
