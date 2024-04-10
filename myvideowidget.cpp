#include "myvideowidget.h"
#include <QDebug>

MyVideoWidget::MyVideoWidget(QWidget *parent):QVideoWidget(parent)
{

}

void MyVideoWidget::setMediaPlayer(QMediaPlayer *player)
{
    thePlayer = player;
}

void MyVideoWidget::keyPressEvent(QKeyEvent *event)
{
    //按键事件，ESC退出全屏状态
    if ((event->key() == Qt::Key_Escape) && (isFullScreen()))
    {
        setFullScreen(false);
    }

    event->accept() ;

    QVideoWidget::keyPressEvent(event) ;
}

void MyVideoWidget::mousePressEvent(QMouseEvent *event)
{
    //鼠标事件，单击控制暂停和继续播放
    if (event->button()==Qt::LeftButton){

        if (thePlayer->state () ==QMediaPlayer::PlayingState){
            thePlayer->pause() ;
        }
        else{
            thePlayer->play();
        }
    }

    QVideoWidget::mousePressEvent (event) ;
}
