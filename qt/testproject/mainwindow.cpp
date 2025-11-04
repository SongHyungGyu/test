#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer> // 테스트용 타이머

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    /* 테스트용 코드
     * currentLight = 0;

    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, [=]() {
        updateTrafficLight(currentLight);

        // 다음 값으로 변경 (0 → 1 → 2 → 0)
        currentLight = (currentLight + 1) % 3;
    });

    timer->start(1000); // 1초마다 실행 (ms 단위)*/

    updateTrafficLight(0);

    // Page1 → Page2
    connect(ui->btnToPage2, &QPushButton::clicked, this, [=]() {
        ui->stackedWidget->setCurrentIndex(1);
    });

    // Page2 → Page1
    connect(ui->btnToPage1, &QPushButton::clicked, this, [=]() {
        ui->stackedWidget->setCurrentIndex(0);
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateTrafficLight(int value)
{
    if (value == 0) {
        ui->labelTraffic->setPixmap(QPixmap(":/images/green.png"));
    } else if (value == 1) {
        ui->labelTraffic->setPixmap(QPixmap(":/images/red.png"));
    } else if (value == 2) {
        ui->labelTraffic->setPixmap(QPixmap(":/images/yellow.png"));
    }
}
