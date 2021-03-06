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

    QStringListModel model;
    model.setStringList(QStringList() << "Xandria"
                                      << "Epica" 
                                      << "Therion" 
                                      << "Evanescence"
                                      << "Nightwish"
                       );

    QSortFilterProxyModel proxyModel;
    proxyModel.setSourceModel(&model);
    proxyModel.setFilterWildcard("E*");

    QListView* pListView1 = new QListView;
    pListView1->setModel(&model);

    QListView* pListView2 = new QListView;
    pListView2->setModel(&proxyModel);

    //Layout setup
    QHBoxLayout* phbxLayout = new QHBoxLayout;    
    phbxLayout->addWidget(pListView1);
    phbxLayout->addWidget(pListView2);
    wgt.setLayout(phbxLayout);

    wgt.show();

    return app.exec();
}
