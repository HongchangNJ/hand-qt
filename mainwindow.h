#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QLabel>
#include <QFileDialog>
#include <QListWidgetItem>

#include <QWidget>
#include <QtMultimedia>
#include <QVideoWidget> // 视频显示组件窗口
#include "playerslider.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

    ~MainWindow();
    bool m_bReLoad;// 已经载入还没设置进度条最大值

    // void paintEvent(QPaintEvent *);

private slots:
//    void on_pushButton_back_clicked();

//    void on_pushButton_play_clicked();

//    void playFile();

//    void positionChange(qint64 position);

//    void on_pushButton_volume_clicked();

//    void on_volumeBar_valueChanged(int value);

//    void button_left_slide();

//    void button_right_slide();

//    void on_pushButton_play_video_clicked();

//    void on_pushButton_previous_clicked();

//    void on_pushButton_next_clicked();

//    void on_music_list_itemClicked(QListWidgetItem *item);

    void    OnSetMediaFile(void);//载入
    void    OnSlider(qint64); // 信号内容的位置已更改为位置，以毫秒表示，进度条也要变
    void    OnDurationChanged(qint64);// 信号表示内容的持续时间已更改为时长，以毫秒表示，进度条 的最大值和最小值
    void    OnStateChanged(QMediaPlayer::State);// Player对象的状态已经改变

protected:
//    void dragEnterEvent(QDragEnterEvent *);

//    bool eventFilter(QObject *obj, QEvent *event);

//    void mousePressEvent(QMouseEvent *event);

private:
    Ui::MainWindow *ui;

    QMediaPlayer *m_player;

    QString m_fileName;

    QMediaPlayer::State m_playerState;

    bool m_moveSlider;

    QLabel *m_timeStatus;

    QFileInfoList m_musicList, m_videoList, m_videoCoverList;

    QString m_type = "music";

    QVideoWidget *m_pPlayerWidget;// 视频显示组件
    QMediaPlayer * m_pPlayer;//媒体播放器类
};

#endif // MAINWINDOW_H
