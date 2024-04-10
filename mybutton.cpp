#include "mybutton.h"
#include <QDebug>


MyButton::MyButton(QWidget *parent): QPushButton (parent)
{
    setAttribute(Qt::WA_Hover,true);
}

MyButton::~MyButton()
{

}

void MyButton::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    {
       ButtonPos = event->pos();
    }
}

void MyButton::mouseReleaseEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    {
        QPoint delta = event->pos() - ButtonPos;
        if (delta.x() > 0)
        {
            qDebug() << "Mouse moved to the right";
            emit this->right_slide();
        }
        if (delta.x() < 0)
        {
            qDebug() << "Mouse moved to the left";
            emit this->left_slide();
        }
    }
}
