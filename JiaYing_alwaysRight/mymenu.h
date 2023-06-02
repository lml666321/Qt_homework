#ifndef MYMENU_H
#define MYMENU_H

#include <QWidget>
#include <QImage>
#include <QPainter>
class Mymenu : public QWidget
{
    Q_OBJECT
public:
    explicit Mymenu(QWidget *parent = 0);
    void paintEvent(QPaintEvent *event);
    /*
signals:
    void readyforquit();
    void helpclicked();
    void optionclicked();
    void unableclicked();
    void play();
public slots:*/
};

#endif // MYMENU_H
