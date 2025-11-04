/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "mycanvas.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *btnToPage2;
    QLabel *labelTraffic;
    QLabel *label;
    QWidget *page_2;
    QPushButton *btnToPage1;
    MyCanvas *canvasWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 801, 441));
        page = new QWidget();
        page->setObjectName("page");
        btnToPage2 = new QPushButton(page);
        btnToPage2->setObjectName("btnToPage2");
        btnToPage2->setGeometry(QRect(670, 370, 101, 41));
        labelTraffic = new QLabel(page);
        labelTraffic->setObjectName("labelTraffic");
        labelTraffic->setGeometry(QRect(40, 60, 100, 100));
        labelTraffic->setScaledContents(true);
        label = new QLabel(page);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 20, 62, 20));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        btnToPage1 = new QPushButton(page_2);
        btnToPage1->setObjectName("btnToPage1");
        btnToPage1->setGeometry(QRect(710, 398, 81, 31));
        canvasWidget = new MyCanvas(page_2);
        canvasWidget->setObjectName("canvasWidget");
        canvasWidget->setGeometry(QRect(0, 0, 801, 571));
        stackedWidget->addWidget(page_2);
        canvasWidget->raise();
        btnToPage1->raise();
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btnToPage2->setText(QCoreApplication::translate("MainWindow", "map", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\352\262\275\352\263\240 \354\225\214\353\246\274\354\235\264", nullptr));
        btnToPage1->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
