#include "agesiganl.h"

AgeSiganl::AgeSiganl(QObject *parent)
    : QObject{parent}
{

}

void AgeSiganl::incAge()
{
    age++;
    emit ageChanged(age);
}
