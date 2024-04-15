#ifndef VOLUMECONTROL_H
#define VOLUMECONTROL_H

#include <QWidget>
#include <QSlider>
#include <QVBoxLayout>
#include <QMediaPlayer>

class VolumnControl : public QWidget {
    Q_OBJECT

public:
    // 构造函数，接收一个QMediaPlayer的指针和一个父QWidget指针（默认为nullptr）
    explicit VolumnControl(QMediaPlayer *player, QWidget *parent = nullptr);

protected:
    // 重写mousePressEvent用于点击控件外部时隐藏窗口
    void mousePressEvent(QMouseEvent *event) override;

private:
    QSlider *slider;        // 用于音量调节的滑动条
    QMediaPlayer *m_player; // 控制的媒体播放器

    // 连接滑动条的信号到媒体播放器的槽
    void setupConnections();
};

#endif // VOLUMECONTROL_H
