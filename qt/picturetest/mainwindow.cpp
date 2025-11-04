#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 이미지 불러오기 (리소스에서 불러오는 경우)
    /*QPixmap pixmap(":/images/red.png");

    // QLabel에 적용
    ui->labelImage->setPixmap(pixmap);

    // QLabel 크기에 맞춰 자동 스케일링
    ui->labelImage->setScaledContents(true);*/


    QPixmap pixmap(":/images/red.png");
    if (pixmap.isNull()) {
        qDebug("이미지 로드 실패!");
    }
    ui->labelImage->setPixmap(pixmap);
}

MainWindow::~MainWindow()
{
    delete ui;
}
