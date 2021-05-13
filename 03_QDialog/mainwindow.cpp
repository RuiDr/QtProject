#pragma execution_character_set("utf-8")
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDialog>
#include <QDebug>
#include <QMessageBox>
#include <QColorDialog>
#include <QFileDialog>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //点击新建弹出对话框
    connect(ui->actionnew,&QAction::triggered,[=](){
        //对话框 分类
        //模态对话框（不可以对其他窗口进程） 非模态对话框（可以对其他窗口进行操作）
        //模态创建 阻塞的功能
//        QDialog dlg(this);
//        dlg.resize(200,100);
//        dlg.exec();

//        qDebug()<<"模态对话框";
        //非模态对话框
//        QDialog *dlg2 = new QDialog(this);
//        dlg2->resize(200,100);
//        dlg2->show();
//        dlg2->setAttribute(Qt::WA_DeleteOnClose);//55号属性
//        qDebug()<<"非模态对话框";
        //消息对话框
        //错误对话框 第一个参数 父类，第二个 名字，第三个 提示内容，第四个 关联按键的类型 第五个 默认关联回车的按键
//        QMessageBox::critical(this,"critical","错误");
//        QMessageBox::information(this,"info","信息");
//        if(QMessageBox::Save == QMessageBox::question(this,"ques","提问",QMessageBox::Save|QMessageBox::Cancel))
//        {
//            qDebug()<<"选择的是保存";

//        }
//        else
//        {
//            qDebug()<<"选择的是取消";
//        }
        //警告对话框
//        QMessageBox::warning(this,"warning","警告");
        //其他标准对话框
        //颜色对话框
//        QColor color = QColorDialog::getColor(QColor(255,0,0));
//        qDebug() << "r = " << color.red() << "g = " << color.green() << "b = "<< color.blue();
        //文件对话框 第一个 父亲，第二个 标题， 第三个 默认路径， 第四个 打开文件类型 返回值是选取的路径
          QString str = QFileDialog::getOpenFileName(this,"打开文件","C:\\Users\\admin\\Desktop","(*.txt)");
           qDebug()<<str;


    });
}

MainWindow::~MainWindow()
{
    delete ui;
}
