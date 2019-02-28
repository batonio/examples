// ======================================================================
//  main.cpp
// ======================================================================
//                   This file is a part of the book 
//             "Qt 5.3 Professional programming with C++"
// ======================================================================
//  Copyright (c) 2014 by Max Schlee
//
//  Email : Max.Schlee@neonway.com
//  Blog  : http://www.maxschlee.com
//
//  Social Networks
//  ---------------
//  FaceBook : http://www.facebook.com/mschlee
//  Twitter  : http://twitter.com/Max_Schlee
//  2Look.me : http://2look.me/NW100003
//  Xing     : http://www.xing.com/profile/Max_Schlee
//  vk.com   : https://vk.com/max.schlee
// ======================================================================

#include <QtWidgets>

// ----------------------------------------------------------------------
int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    QWidget      wgt;
    wgt.setAutoFillBackground(true);

    QTabWidget* pwgt1 = new QTabWidget(&wgt);
//    QWidget* pwgt1 = new QWidget();
    QPalette pal1;
    pal1.setColor(pwgt1->backgroundRole(), Qt::blue);
    pwgt1->setPalette(pal1);
    pwgt1->resize(800, 600);
    pwgt1->move(25, 25);
    pwgt1->setAutoFillBackground(true);
//    pwgt1->show();

    QWidget* pwgt2 = new QWidget();
//    QWidget* pwgt2 = new QWidget();
    QPalette pal2;
    pal2.setBrush(pwgt2->backgroundRole(), QBrush(QPixmap(":/stone.jpg")));
    pwgt2->setPalette(pal2);
    pwgt2->resize(400, 300);
    pwgt2->move(75, 75);
    pwgt2->setAutoFillBackground(true);

    QLabel* lbl3 = new QLabel("label3");
    pwgt1->addTab(pwgt2, "123456");
    pwgt1->addTab(lbl3, "lll");



    wgt.resize(1000, 800);
    wgt.show();

    return app.exec();
}
