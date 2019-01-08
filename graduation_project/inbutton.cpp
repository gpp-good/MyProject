#include "inbutton.h"
#include <QApplication>
#include <QLineEdit>
#include <QKeyEvent>

InButton::InButton(QWidget *parent):QToolButton(parent)
{

}

InButton::~InButton()
{

}

//鼠标点击事件
void InButton::mousePressEvent(QMouseEvent *e)
{
    //QString sty = QString("border-image: url(:%1);").arg(press_pic);
    //this->setStyleSheet(sty);
    QToolButton::mousePressEvent(e);
}

//鼠标释放事件
void InButton::mouseReleaseEvent(QMouseEvent *e)
{
    //事件实现软键盘功能（模拟按键事件）
    QString ch = this->text();
    char keych = ch.at(0).toLatin1();//从QString取出第一个字符QChar转成char
    //获取删除按钮的键值
    QKeyEvent *key = NULL;
    if(this->text() == "<-")
    {
       //创建BackSpace按钮事件
       key = new QKeyEvent(QEvent::KeyPress,Qt::Key_Backspace, Qt::NoModifier);
    }else
    {
        //创建按钮事件
        key = new QKeyEvent(QEvent::KeyPress,keych, Qt::NoModifier,ch);

    }
    //发送按钮事件
    QApplication::postEvent(QApplication::focusWidget(), key);

    QToolButton::mouseReleaseEvent(e);
}

void InButton::setButtonBackground(QString press, QString release)
{
    this->press_pic = press;
    this->release_pic = release;
}
