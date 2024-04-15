#include "VolumnControl.h"
#include <QMouseEvent>

// 构造函数实现
VolumnControl::VolumnControl(QMediaPlayer *player, QWidget *parent)
    : QWidget(parent, Qt::Popup), m_player(player) {
    // 创建并配置滑动条
    slider = new QSlider(Qt::Vertical, this);
    slider->setRange(0, 100);  // 设置音量的范围从0到100
    slider->setValue(player->volume());  // 将滑动条初始化为当前音量值
    slider->setInvertedAppearance(true);  // 使0在下方，100在上方
    slider->setInvertedControls(true);    // 滑动控制也反转

    slider->setStyleSheet("QSlider {"
                                           "min-height: 455px;"  // 设置滑动条的最小高度
                                           "max-height: 455px;"  // 设置滑动条的最大高度
                                       "}"
                                       "QSlider::groove:vertical {"
                                            "border-radius: 20px;"  // 槽的圆角
                                       "}"
                                       "QSlider::handle:vertical {"
                                            "background-color: #1EC9FF;"  // 滑块的背景颜色
                                            "width: 40px;"  // 滑块的宽度
                                            "height: 40px;"  // 滑块的高度
                                            "border-radius: 20px;"  // 设置边角为滑块宽度的一半，产生圆形效果
                                       "}"
                                       "QSlider::sub-page:vertical {"
                                            "background-image: url(:/resource/Rectangle 6152.png);"  // 滑块左侧使用图片背景
                                            "margin-left:10px;"
                                            "margin-right:10px;"
                                       "}"
                                       "QSlider::add-page:vertical {"
                                            "background: rgba(255, 255, 255, 50);"  // 滑块右侧的颜色
                                            "margin-left:10px;"
                                            "margin-right:10px;"
                                       "}"
                                       );

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(slider);  // 将滑动条添加到布局
    setLayout(layout);

    setupConnections();  // 设置滑动条和媒体播放器之间的连接
}

// 设置滑动条的信号和媒体播放器槽的连接
void VolumnControl::setupConnections() {
    connect(slider, &QSlider::valueChanged, m_player, &QMediaPlayer::setVolume);
}

// 重写mousePressEvent以处理点击控件外部隐藏窗口的功能
void VolumnControl::mousePressEvent(QMouseEvent *event) {
    // 如果点击事件发生在控件外部，则隐藏控件
    if (!rect().contains(event->pos())) {
        this->hide();
    }
    // 将事件传递给父类处理
    QWidget::mousePressEvent(event);
}
