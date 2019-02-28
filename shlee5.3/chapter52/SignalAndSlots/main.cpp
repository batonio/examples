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
#include <QtScript>

// ----------------------------------------------------------------------
int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    QWidget      wgt;

    QLineEdit* ptxt = new QLineEdit;
    ptxt->setObjectName("lineedit");

    QLabel* plbl1 = new QLabel("1");
    plbl1->setObjectName("label1");

    QLabel* plbl2 = new QLabel("2");
    plbl2->setObjectName("label2");

    QLabel* plbl3 = new QLabel("3");
    plbl3->setObjectName("label3");

    //Layout Setup
    QVBoxLayout* pvbxLayout = new QVBoxLayout;
    pvbxLayout->addWidget(ptxt);
    pvbxLayout->addWidget(plbl1);
    pvbxLayout->addWidget(plbl2);
    pvbxLayout->addWidget(plbl3);
    wgt.setLayout(pvbxLayout);

    wgt.show();

    //Script part
    QScriptEngine scriptEngine;
    QFile         file(":/script.js");
    if (file.open(QFile::ReadOnly)) {
        QScriptValue scriptWgt = scriptEngine.newQObject(&wgt);

        scriptEngine.globalObject().setProperty("wgt", scriptWgt);

        QScriptValue result = 
            scriptEngine.evaluate(QLatin1String(file.readAll()));
        if (result.isError()) {
            QMessageBox::critical(0, 
                                  "Evaluating error", 
                                  result.toString(), 
                                  QMessageBox::Yes
                                 );
        }
    }
    else {
        QMessageBox::critical(0, 
                              "File open error", 
                              "Can not open the script file", 
                              QMessageBox::Yes
                             );
    }

    return app.exec();
}
