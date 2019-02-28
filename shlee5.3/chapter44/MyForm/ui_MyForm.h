/********************************************************************************
** Form generated from reading UI file 'MyForm.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYFORM_H
#define UI_MYFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyForm
{
public:
    QHBoxLayout *hboxLayout;
    QVBoxLayout *vboxLayout;
    QLCDNumber *m_lcd;
    QSlider *m_sld;
    QVBoxLayout *vboxLayout1;
    QPushButton *m_cmdReset;
    QPushButton *m_cmdQuit;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *MyForm)
    {
        if (MyForm->objectName().isEmpty())
            MyForm->setObjectName(QStringLiteral("MyForm"));
        MyForm->resize(400, 300);
        hboxLayout = new QHBoxLayout(MyForm);
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        vboxLayout = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        m_lcd = new QLCDNumber(MyForm);
        m_lcd->setObjectName(QStringLiteral("m_lcd"));

        vboxLayout->addWidget(m_lcd);

        m_sld = new QSlider(MyForm);
        m_sld->setObjectName(QStringLiteral("m_sld"));
        m_sld->setOrientation(Qt::Horizontal);

        vboxLayout->addWidget(m_sld);


        hboxLayout->addLayout(vboxLayout);

        vboxLayout1 = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout1->setSpacing(6);
#endif
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        m_cmdReset = new QPushButton(MyForm);
        m_cmdReset->setObjectName(QStringLiteral("m_cmdReset"));

        vboxLayout1->addWidget(m_cmdReset);

        m_cmdQuit = new QPushButton(MyForm);
        m_cmdQuit->setObjectName(QStringLiteral("m_cmdQuit"));

        vboxLayout1->addWidget(m_cmdQuit);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem);


        hboxLayout->addLayout(vboxLayout1);


        retranslateUi(MyForm);
        QObject::connect(m_sld, SIGNAL(sliderMoved(int)), m_lcd, SLOT(display(int)));
        QObject::connect(m_cmdQuit, SIGNAL(clicked()), MyForm, SLOT(close()));

        QMetaObject::connectSlotsByName(MyForm);
    } // setupUi

    void retranslateUi(QWidget *MyForm)
    {
        MyForm->setWindowTitle(QApplication::translate("MyForm", "DesignedWidget", Q_NULLPTR));
        m_cmdReset->setText(QApplication::translate("MyForm", "&Reset", Q_NULLPTR));
        m_cmdQuit->setText(QApplication::translate("MyForm", "&Quit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MyForm: public Ui_MyForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYFORM_H
