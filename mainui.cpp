//
// Created by iyue on 2021/8/6.
//

// You may need to build the project (run Qt uic code generator) to get "ui_mainui.h" resolved

#include "mainui.h"
#include "ui_mainui.h"
#include<QPushButton>
#include <QDateTime>

mainui::mainui(QWidget *parent) :
        QWidget(parent), ui(new Ui::mainui) {
    ui->setupUi(this);
    this->initui();

    connect(m_timer,&QTimer::timeout,this,&mainui::onTimeOut);
    // 开始按钮绑定 开始定时器
    connect(ui->start,&QPushButton::released,this,[=]{
        m_timer->start();
    });
    // 停止按钮绑定停止定时器
    connect(ui->stop,&QPushButton::released,this,[&]{
        m_timer->stop();
    });

}

mainui::~mainui() {
    delete ui;
}

void mainui::initui() {

    setWindowTitle("ShowTime");
    //设置晶体管控件QLCDNumber能显示的位数
    ui->lcdNumber->setDigitCount(12);
    //设置显示的模式为十进制
    ui->lcdNumber->setMode(QLCDNumber::Dec);
    //设置显示方式
    ui->lcdNumber->setSegmentStyle(QLCDNumber::Flat);
    // 初始化定时器间隔时间
    m_timer->setInterval(10);

}

void mainui::onTimeOut() {
    // 获取系统当前时间
    QDateTime dateTime = QDateTime::currentDateTime();
    // 显示的内容
    ui->lcdNumber->display(dateTime.toString("HH:mm:ss.zzz"));
}

