#include "student.h"
#include <QDebug>

Student::Student(QObject *parent) : QObject(parent)
{

}

void Student::treat(QString qs)
{
    qDebug()<<"请老师吃饭"<<qs;
}
