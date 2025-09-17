#ifndef AGESIGANL_H
#define AGESIGANL_H

#include <QObject>

class AgeSiganl :public QObject
{
    Q_OBJECT

private:
    int age = 10;
public:
    explicit AgeSiganl(QObject *parent = nullptr);
    void incAge();


signals:
    //不能有返回值，可以有参数，不需要实现（moc会帮我们写）
    void ageChanged(int value);
};

#endif // AGESIGANL_H
