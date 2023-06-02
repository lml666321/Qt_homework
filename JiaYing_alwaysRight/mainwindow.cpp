
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
}

MainWindow::~MainWindow()
{
    delete ui;
}


