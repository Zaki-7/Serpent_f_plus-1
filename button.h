#ifndef BUTTON_H
#define BUTTON_H

#include <QGraphicsRectItem>
#include <QObject>

class Button :public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    Button(QString name,int width, int height, QGraphicsItem * parent = NULL);
    Button(QString name,int width, int height,int niveau, QGraphicsItem * parent = NULL);
    Button(QString name,int width, int height,int stg, bool locked, QGraphicsItem * parent = NULL);


    QGraphicsPixmapItem* locke = NULL;
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void hoverEnterEvent(QGraphicsSceneHoverEvent *event);
    void hoverLeaveEvent(QGraphicsSceneHoverEvent *event);
    void deletelock();
    void setHoverd();
    int stgNum;
    int nivNum;
signals:
    void clicked();
    void clicked(int);
private:
    QGraphicsTextItem* text;
    int width;
    int height;
};

#endif // BUTTON_H
