#include "notebook.h"
#include "./ui_notebook.h"
#include <QDebug>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>

NoteBook::NoteBook(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::NoteBook)
{
    //设置QTdesigner里面的ui关联到widget类的私有变量ui里面
    ui->setupUi(this);

    //放窗口可以进行拉伸
    this->setLayout(ui->verticalLayout_2);
}

NoteBook::~NoteBook()
{
    delete ui;
}


void NoteBook::on_btnOpen_clicked()
{
    ui->textEdit->clear();

    QString filePath = QFileDialog::getOpenFileName(
        this,
        "打开文件",
        "..",
        "文本文件 (*.txt *.*);"
        );

    // 3. 打开文件并读取内容
    QFile file(filePath);  // 创建文件对象，传入文件路径

    // 以“只读模式”打开文件
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        // 打开失败，弹出错误提示
        QMessageBox::warning(this, "打开失败", "无法打开文件！\n原因：" + file.errorString());
        return;
    }

    // 4. 读取文件内容
    QTextStream in(&file);  // 绑定文件到文本流
    in.setEncoding(QStringDecoder ::Utf8);    // 强制设置编码为 UTF-8
    QString fileContent;
    while (!in.atEnd()) {
        fileContent.append(in.readLine() + "\n") ;  // 读取全部内容
    }

    file.close();

    //将内容显示到 QTextEdit
    ui->textEdit->setPlainText(fileContent);
}


void NoteBook::on_btnClose_clicked()
{
    this->close();
}

void NoteBook::on_btnSave_clicked()
{
    QString TextContent = ui->textEdit->toPlainText();

    QString SavefilePath = QFileDialog::getSaveFileName(
        this,
        "保存文件",
        ".",
        "文本文件 (*.txt *.*);"
        );
    QFile file(SavefilePath);  // 创建文件对象，传入文件路径

    //打开文件
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        // 打开失败，弹出错误提示
        QMessageBox::warning(this, "打开失败", "无法打开文件！\n原因：" + file.errorString());
        return;
    }

    QTextStream out(&file);
    out.setEncoding(QStringEncoder::Utf8);  // 保存为UTF-8，跨平台兼容
    out << TextContent;

    file.close();
}

