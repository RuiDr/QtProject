#ifndef MYPUSHBUTTON_H
#define MYPUSHBUTTON_H

#include <QPushButton>

class MyPushButton : public QPushButton
{
    Q_OBJECT
public:
//    explicit QPushButton(QWidget *parent = 0);
    //normalImg 代表正常显示的图片
    //pressImg 代表按下后显示的图片，默认为空
    MyPushButton(QString normalImg, QString pressImg ="");
    //默认显示图片路径
    QString normalImgPath;
    //按下后显示图片路径
    QString pressedImgPath;



signals:

public slots:
};

#endif // MYPUSHBUTTON_H
