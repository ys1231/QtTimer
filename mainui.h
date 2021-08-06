//
// Created by iyue on 2021/8/6.
//

#ifndef MYQTHREAD_MAINUI_H
#define MYQTHREAD_MAINUI_H

#include <QWidget>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class mainui; }
QT_END_NAMESPACE

class mainui : public QWidget {
Q_OBJECT

public:
    explicit mainui(QWidget *parent = nullptr);

    ~mainui() override;

private:
    Ui::mainui *ui;
    QTimer *m_timer=new QTimer(this);

    void initui();
    void onTimeOut();

};


#endif //MYQTHREAD_MAINUI_H
