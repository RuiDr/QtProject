#pragma execution_character_set("utf-8")
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include "mypushbutton.h"
#include <QDebug>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
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
    //开始按钮
    MyPushButton * startBtn = new MyPushButton(":/res/MenuSceneStartButton.png");
    startBtn->setParent(this);
    startBtn->move( this->width() * 0.5 - startBtn->width() * 0.5 ,this->height() * 0.7 );
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *){
    //创建画家，指定绘图设备
    QPainter painter(this);
    QPixmap pix;
    bool ret = pix.load(":/res/PlayLevelSceneBg.png");
    qDebug()<<"return "<<ret;

    //绘制背景图
    painter.drawPixmap(0,0,this->width(),this->height(),pix);

    //加载标题
    pix.load(":/res/Title.png");

    pix = pix.scaled(pix.width()*0.5,pix.height()*0.5);

    painter.drawPixmap(10,30,pix);
}
