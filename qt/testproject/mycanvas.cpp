#include "mycanvas.h"
#include <QPainter>

MyCanvas::MyCanvas(QWidget *parent)
    : QWidget(parent)
{
}

void MyCanvas::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);

    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing, true);

    int w = width();
    int h = height();

    // 기준 크기 (원래 400x600 기준으로 그렸다고 가정)
    double baseW = 400.0;
    double baseH = 600.0;

    double scaleX = w / baseW;
    double scaleY = h / baseH;

    // 방 외곽
    painter.setPen(QPen(Qt::black, 2));
    painter.setBrush(Qt::NoBrush);
    painter.drawRect(50 * scaleX, 50 * scaleY, 300 * scaleX, 400 * scaleY);

    // 내부 방
    painter.drawRect(70 * scaleX, 100 * scaleY, 80 * scaleX, 120 * scaleY); // x좌표, y좌표, 너비, 높이
    painter.drawRect(250 * scaleX, 120 * scaleY, 100 * scaleX, 150 * scaleY);
    painter.drawRect(150 * scaleX, 300 * scaleY, 150 * scaleX, 100 * scaleY);

    // 사람 (빨간 점)
    painter.setBrush(Qt::red);
    painter.drawEllipse(QPointF(200 * scaleX, 280 * scaleY),
                        10 * scaleX, 10 * scaleY);
}
