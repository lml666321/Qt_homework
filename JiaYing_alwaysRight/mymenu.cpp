
#include "mymenu.h"

Mymenu::Mymenu(QWidget *parent) : QWidget(parent)
{




}

//背景设置
void Mymenu::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QImage bg(":/menu/res/bk.png");
    bg=bg.scaled(size(),Qt::KeepAspectRatioByExpanding);
    painter.drawImage(0,0,bg);

}

