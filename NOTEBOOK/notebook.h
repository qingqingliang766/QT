#ifndef NOTEBOOK_H
#define NOTEBOOK_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class NoteBook;
}
QT_END_NAMESPACE

class NoteBook : public QWidget
{
    Q_OBJECT

public:
    NoteBook(QWidget *parent = nullptr);
    ~NoteBook();

private slots:
    void on_btnClose_clicked();

    void on_btnOpen_clicked();

    void on_btnSave_clicked();

private:
    Ui::NoteBook *ui;

private:
    void sendwrods();
};
#endif // NOTEBOOK_H
