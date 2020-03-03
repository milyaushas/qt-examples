#include "Bullet.h"
#include <QTimer>

Bullet::Bullet(){
    setRect(0,0,10,50);

    auto * timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(100);
}

void Bullet::move(){
    setPos(x(),y()-10);
}