#pragma execution_character_set("utf-8")
#include "mainscene.h"
#include "ui_mainscene.h"
#include <QPainter>

MainScence::MainScence(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainScence)
{
    ui->setupUi(this);
    //设置固定大小
    this->setFixedSize(320,588);
    //设置应用图片
    this->setWindowIcon(QPixmap(":/res/Coin0001.png"));
    //设置窗口标题
    this->setWindowTitle("带你翻金币");
    connect(ui->actionQuit,&QAction::triggered,[=](){
        this->close();
    });
}

MainScence::~MainScence()
{
    delete ui;
}

void MainScence::paintEvent(QPaintEvent *event)
{
    //创建画家，指定绘图设备
    QPainter painter(this);
    //创建QPixmap对象
    QPixmap pix;
    //加载图片
    pix.load(":/res/PlayLevelSceneBg.png");
    //绘制背景图
    painter.drawPixmap(0,0,this->width(),this->height(),pix);
    //加载标题
    pix.load(":/res/Title.png");
    //缩放图片
    pix = pix.scaled(pix.width()*0.5,pix.height()*0.5);
    //绘制标题
    painter.drawPixmap( 10,30,pix.width(),pix.height(),pix);
}
