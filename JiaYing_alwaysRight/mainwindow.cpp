
#include "mainwindow.h"
#include "./ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setWindowIcon(QIcon(":/menu/res/qygh.png"));
    setFixedSize(1000,600);
    setWindowTitle("谁是人上人？");

    //设置退出弹框+按钮
    //connect(ui->menu,&Mymenu::readyforquit,[=](){
        /*ShapedWindow* quitwindow=new ShapedWindow(this,":/menu/res/QuitWindow.png");
        quitwindow->move((this->width()-quitwindow->width())*0.5,(this->height()-quitwindow->height())*0.5);

        MyPushButton* quit=new MyPushButton(quitwindow,true,":/menu/res/QuitButton.png");
        connect(quit,&MyPushButton::clicked,[=](){
            this->close();
        });
        quit->move(40,210);


        MyPushButton* cancel=new MyPushButton(quitwindow,true,":/menu/res/CancelButton.png");
        connect(cancel,&MyPushButton::clicked,[=](){
            delete quitwindow;
        });
        cancel->move(270,210);
        quitwindow->show();*/
    //});
}

MainWindow::~MainWindow()
{
    delete ui;
}


