#ifndef MYVIDEOWIDGET_H
#define MYVIDEOWIDGET_H

#include <QVideoWidget>
#include <QMediaPlayer>


class MyVideoWidget : public QVideoWidget
{
    Q_OBJECT
    public:
        MyVideoWidget(QWidget * parent = nullptr);

        void setMediaPlayer(QMediaPlayer *player) ;
    private :
        QMediaPlayer * thePlayer;
    protected:
        void keyPressEvent (QKeyEvent *event) ;
        void mousePressEvent(QMouseEvent *event) ;
#endif // MYVIDEOWIDGET_H

