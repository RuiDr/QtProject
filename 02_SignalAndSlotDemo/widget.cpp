#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->zt = new Teacher(this);
    this->st = new Student(this);
//    //下课,老师饿了，学生请客吃饭
//    connect(zt,&Teacher::hungry,st,&Student::treat);

    // 无参信号槽
//    void(Teacher:: *TeacherSingal)(void) = &Teacher::hungry;
//    void(Student:: *StudentSlot)(void) = &Student::treat;
//    connect(zt,TeacherSingal,st,StudentSlot);
    // 参数信号槽
    void(Teacher:: *TeacherSingal)(QString) = &Teacher::hungry;
    void(Student:: *StudentSlot)(QString) = &Student::treat;
    connect(zt,TeacherSingal,st,StudentSlot);
    ClassIsOver();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::ClassIsOver()
{
    // 下课了,发射信号老师饿了
    emit zt->hungry("chicken");
}
