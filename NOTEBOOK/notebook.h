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

private:
    Ui::NoteBook *ui;
};
#endif // NOTEBOOK_H
