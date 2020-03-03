#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include "Rectangle.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    auto *scene = new QGraphicsScene();

    auto *rect = new Rectangle();
    rect->setRect(0, 0, 200, 100);

    scene->addItem(rect);

    rect->setFlag(QGraphicsItem::ItemIsFocusable);
    rect->setFocus();

    auto *view = new QGraphicsView(scene);

    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->show();

    return QApplication::exec();
}