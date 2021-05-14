#pragma execution_character_set("utf-8")
#include "mainwindow.h"
#include "ui_mainwindow.h"

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
}

MainWindow::~MainWindow()
{
    delete ui;
}
