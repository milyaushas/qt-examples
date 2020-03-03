#pragma once
#include <QGraphicsRectItem>

class Rectangle: public QGraphicsRectItem {
public:
    void keyPressEvent(QKeyEvent *event) override;
};


