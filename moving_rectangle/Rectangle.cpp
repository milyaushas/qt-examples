#include "Rectangle.h"
#include "Bullet.h"
#include <QDebug>
#include <QKeyEvent>
#include <QGraphicsScene>
void Rectangle::keyPressEvent(class QKeyEvent * event) {
    if (event->key() == Qt::Key_Left) {
        setPos(x()-10, y());
    };
    if (event->key() == Qt::Key_Right) {
        setPos(x()+10, y());
    };
    if (event->key() == Qt::Key_Up) {
        setPos(x(), y() - 10);
    };
    if (event->key() == Qt::Key_Down) {
        setPos(x(), y()+10);
    };
    if (event->key() == Qt::Key_Space) {
        auto *bullet = new Bullet();
        bullet->setPos(x() + 100, y());
        scene()->addItem(bullet);
    }
}
