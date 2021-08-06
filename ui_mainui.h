/********************************************************************************
** Form generated from reading UI file 'mainui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINUI_H
#define UI_MAINUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainui
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLCDNumber *lcdNumber;
    QSplitter *splitter;
    QPushButton *start;
    QPushButton *stop;

    void setupUi(QWidget *mainui)
    {
        if (mainui->objectName().isEmpty())
            mainui->setObjectName(QString::fromUtf8("mainui"));
        mainui->resize(592, 233);
        verticalLayout_2 = new QVBoxLayout(mainui);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lcdNumber = new QLCDNumber(mainui);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));

        verticalLayout->addWidget(lcdNumber);

        splitter = new QSplitter(mainui);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        start = new QPushButton(splitter);
        start->setObjectName(QString::fromUtf8("start"));
        splitter->addWidget(start);
        stop = new QPushButton(splitter);
        stop->setObjectName(QString::fromUtf8("stop"));
        splitter->addWidget(stop);

        verticalLayout->addWidget(splitter);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(mainui);

        QMetaObject::connectSlotsByName(mainui);
    } // setupUi

    void retranslateUi(QWidget *mainui)
    {
        mainui->setWindowTitle(QCoreApplication::translate("mainui", "mainui", nullptr));
        start->setText(QCoreApplication::translate("mainui", "\345\274\200\345\247\213", nullptr));
        stop->setText(QCoreApplication::translate("mainui", "\345\201\234\346\255\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainui: public Ui_mainui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINUI_H
