#ifndef MYCANVAS_H
#define MYCANVAS_H

#include <QWidget>
#include <QPainter>

class MyCanvas : public QWidget
{
    Q_OBJECT

public:
    explicit MyCanvas(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *event) override;
};

#endif // MYCANVAS_H
