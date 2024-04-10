#ifndef MYBUTTON_H
#define MYBUTTON_H

#include <QPushButton>
#include <QEvent>
#include <QHoverEvent>

class MyButton: public QPushButton
{
    Q_OBJECT
public:
    MyButton(QWidget *parent = nullptr);
    ~MyButton();

   void mousePressEvent(QMouseEvent *event);
   void mouseReleaseEvent(QMouseEvent *event);

private:
   QPoint ButtonPos;

signals:
   void left_slide();
   void right_slide();
};

#endif // MYBUTTON_H
