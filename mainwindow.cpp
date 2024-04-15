#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QDragEnterEvent>
#include <QDropEvent>
#include <QList>
#include <QMimeData>
#include <QTime>
#include <QListWidgetItem>
#include <QScroller>
#include "musicform.h"
#include "ui_musicform.h"
#include "videoform.h"
#include "ui_videoform.h"
#include <QPoint>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->progressBar->installEventFilter(this);
    setAcceptDrops(true);
    this->setWindowState(this->windowState() | Qt::WindowMaximized);

    // set ui style
    // QSlide style  background:transparent;\nborder-image: url(:/resource/Rectangle 6152.png);
    ui->progressBar->setStyleSheet("QSlider {"
                                       "min-height: 40px;"  // 设置滑动条的最小高度
                                       "max-height: 40px;"  // 设置滑动条的最大高度
                                       "background:transparent;"
                                       "border:none;"
                                       "border-style:none"
                                   "}"
                                   "QSlider::groove:horizontal {"
                                        "border-radius: 5px;"  // 槽的圆角
                                   "}"
                                   "QSlider::handle:horizontal {"
                                        "background-color: #1EC9FF;"  // 滑块的背景颜色
                                        "width: 40px;"  // 滑块的宽度
                                        "height: 40px;"  // 滑块的高度
                                        "border-radius: 20px;"  // 设置边角为滑块宽度的一半，产生圆形效果
                                   "}"
                                   "QSlider::sub-page:horizontal {"
                                        "background-image: url(:/resource/Rectangle 6152.png);"  // 滑块左侧使用图片背景
                                        "margin-top:10px;"
                                        "margin-bottom:10px;"
                                   "}"
                                   "QSlider::add-page:horizontal {"
                                        "background: rgba(255, 255, 255, 50);"  // 滑块右侧的颜色
                                        "margin-top:10px;"
                                        "margin-bottom:10px;"
                                   "}"
                                   );


    //设置按钮Pressed背景
    QString buttonStyle = "QPushButton {"
                          "background: transparent;"
                          "border:none;"
                          "border-style:none;"
                     "}"
                     "QPushButton:pressed {"
                          "background: rgba(255,255,255, 0.3);"         // 按下时的背景颜色
                          "border-radius: 64px;"            // 确保圆形形状
                          "border-style:none;"
                     "}";
    ui->pushButton_previous->setStyleSheet(buttonStyle);
    ui->pushButton_next->setStyleSheet(buttonStyle);
    ui->pushButton_volume->setStyleSheet(buttonStyle);

    // ui->music_list->ScrollMode
    ui->music_list->setFlow(QListView::TopToBottom);
    ui->music_list->setFocusPolicy(Qt::NoFocus);

    ui->music_list->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff); //屏蔽水平滑动条
    ui->music_list->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff); //屏蔽垂直滑动条
    ui->music_list->setHorizontalScrollMode(QListWidget::ScrollPerPixel); //设置为像素滚动
    ui->music_list->setStyleSheet("QListWidget::item:selected { background-color:rgba(255,255,255,20%);}"
                                  "QListWidget::item:hover { background-color:rgba(255,255,255,5%);}");
    QScroller::grabGesture(ui->music_list, QScroller::LeftMouseButtonGesture);

    QDir music_dir(QDir::currentPath() + ("/resource/music/"));
    music_dir.setFilter(QDir::Files);
    music_dir.setSorting(QDir::Name);
    m_musicList = music_dir.entryInfoList();
    //qDebug() << m_musicList;

    m_player = new QMediaPlayer;
    m_player->setVideoOutput(ui->video_widget);
    m_player->setMedia(QUrl::fromLocalFile(m_musicList.first().filePath()));

    QDir music_cover_dir("./resource/music_cover/");
    music_cover_dir.setFilter(QDir::Files);
    music_cover_dir.setSorting(QDir::Name);
    QFileInfoList music_cover_list = music_cover_dir.entryInfoList();
    for (int i = 0; i < music_cover_list.size(); ++i)
    {
        QFileInfo fileInfo = music_cover_list.at(i);
        QPixmap pixmap(fileInfo.filePath());
        QListWidgetItem *imageItem = new QListWidgetItem;
        musicForm *music_form = new musicForm;
        music_form->ui->label_icon->setPixmap(pixmap);
        music_form->ui->label_music_title->setText(fileInfo.baseName());
        music_form->ui->label_music_author->setText("Justin Hurwitz");
        imageItem->setIcon(QIcon(pixmap));
        imageItem->setText(fileInfo.baseName());
        imageItem->setSizeHint(QSize(400, 140));
        ui->music_list->addItem(imageItem);
        ui->music_list->setItemWidget(imageItem, music_form);
        // imageItem->setCheckState(false);

        QString music_title = music_form->ui->label_music_title->text();
        connect(music_form, &musicForm::clicked, this, [=]()
        {
            imageItem->setSelected(true);
            ui->label_music_cover->setVisible(true);
            QPixmap pixmap("./resource/music_cover/" + music_title + ".png");
            ui->label_music_cover->setPixmap(pixmap);
            ui->label_name->setText(music_title);
            m_player->setMedia(QUrl::fromLocalFile(QDir::currentPath() + "/resource/music/" + music_title + ".mp3"));
            m_playerState = QMediaPlayer::PausedState;
            playFile();
            m_type = "music";
        });
    }

    ui->video_list->setFlow(QListView::LeftToRight);
    ui->video_list->setFocusPolicy(Qt::NoFocus);
    ui->video_list->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff); //屏蔽水平滑动条
    ui->video_list->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff); //屏蔽垂直滑动条
    ui->video_list->setHorizontalScrollMode(QListWidget::ScrollPerPixel); //设置为像素滚动
    ui->video_list->setStyleSheet("QListWidget {background:transparent}"
                                  "QListWidget::item { margin: 10px; padding: 10px; }"
                                  "QListWidget::item:selected { background-color:rgba(255,255,255,20%); border-radius: 5;}"
                                  "QListWidget::item:hover { background-color:rgba(255,255,255,5%);border-radius: 5;}");
    QScroller::grabGesture(ui->video_list, QScroller::LeftMouseButtonGesture);

    QDir video_dir("./resource/video/");
    video_dir.setFilter(QDir::Files);
    video_dir.setSorting(QDir::Name);
    m_videoList = video_dir.entryInfoList();
    //qDebug() << m_videoList;

    QDir video_cover_dir("./resource/video_cover/");
    video_cover_dir.setFilter(QDir::Files | QDir::Hidden | QDir::NoSymLinks);
    video_cover_dir.setSorting(QDir::Name);
    m_videoCoverList = video_cover_dir.entryInfoList();

    for (int i = 0; i < m_videoCoverList.size(); ++i)
    {
        QFileInfo fileInfo = m_videoCoverList.at(i);
        QPixmap pixmap(fileInfo.filePath());
        QListWidgetItem *imageItem = new QListWidgetItem;

        videoForm *video_form = new videoForm;
        video_form->ui->label_video_cover->setPixmap(pixmap);
        video_form->ui->label_video_title->setText(fileInfo.baseName());
        imageItem->setSizeHint(QSize(480, 360));
        ui->video_list->addItem(imageItem);
        ui->video_list->setItemWidget(imageItem, video_form);

        QString video_title = video_form->ui->label_video_title->text();
        connect(video_form, &videoForm::clicked, this, [=]()
        {
            positionChange(0);
            imageItem->setSelected(true);
            ui->stackedWidget->setCurrentIndex(0);
            ui->label_music_cover->setVisible(false);
            ui->label_name->setText(video_title);
            m_player->setMedia(QUrl::fromLocalFile(QDir::currentPath() + "/resource/video/" + video_title + ".mp4"));
            m_playerState = QMediaPlayer::PausedState;
            playFile();
            m_type = "video";
        });
    }

    QFileInfo fileInfo = music_cover_list.first();
    QPixmap pixmap(fileInfo.filePath());
    ui->label_music_cover->setPixmap(pixmap);
    ui->label_name->setText(music_cover_list.first().baseName());

    // volumeBar = new QSlider(Qt::Horizontal);
    volumn_control = new VolumnControl(m_player, this);  // 传递播放器引用
    connect(ui->pushButton_volume, &QPushButton::clicked, this, &MainWindow::toggle_volumeControl);

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(volumn_control);
    setLayout(layout);

    connect(m_player, SIGNAL(positionChanged(qint64)), this, SLOT(positionChange(qint64)));
    connect(m_player, &QMediaPlayer::stateChanged, this, [=] (QMediaPlayer::State newState) {
        if (newState == QMediaPlayer::State::PlayingState) {
            ui->pushButton_play->setChecked(true);
        } else if (newState == QMediaPlayer::State::PausedState) {
            ui->pushButton_play->setChecked(false);

        } else if (newState == QMediaPlayer::State::StoppedState) {
            ui->pushButton_play->setChecked(false);

        }
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

// 显示音量调节控件
void MainWindow::toggle_volumeControl() {
    QPoint globalPos  = ui->pushButton_volume->mapToGlobal(QPoint(0, 0));
    volumn_control->move(globalPos.x() +  ui->pushButton_volume->width() / 2 - 15,
                         globalPos.y() - ui->pushButton_volume->height() / 2 - 470);
    volumn_control->show();
}

void MainWindow::paintEvent(QPaintEvent *)
{
    QPainter painter_mainWindow(this);
    QPixmap pixmap_mainWindow("./resource/Group 1000005051.png");
    painter_mainWindow.drawPixmap(this->rect(), pixmap_mainWindow);

    //QPainter painter_bottom(ui->audio_control_container);
    QPalette palette;
    QPixmap pixmap_bottom("./resource/Rectangle 34624654.png");
    palette.setBrush(QPalette::Background, pixmap_bottom);
    ui->audio_control_container->setPalette(palette);
    //painter_bottom.drawPixmap(ui->audio_control_container->rect(), pixmap_bottom);
}

void MainWindow::on_pushButton_back_clicked()
{

}

void MainWindow::on_pushButton_play_clicked()
{
    if(ui->pushButton_play->isChecked())
    {
        m_player->play();
    }
    else
    {
        m_player->pause();
    }

    if(m_type == "music")
        ui->stackedWidget->setCurrentIndex(1);
    if(m_type == "video")
        ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::playFile()
{
    if (m_playerState != QMediaPlayer::PlayingState)
    {
        m_playerState = QMediaPlayer::PlayingState;
        m_player->play();
    }
    else
    {
        m_playerState = QMediaPlayer::PausedState;
        m_player->pause();
    }
}

void MainWindow::positionChange(qint64 position)
{
    if(m_player->duration()/1000 != ui->progressBar->maximum())
    {
        ui->progressBar->setMaximum(static_cast<int>(m_player->duration()/1000));
    }
    ui->progressBar->setValue(static_cast<int>(position/1000));
}

void MainWindow::dragEnterEvent(QDragEnterEvent *event)
{
    event->acceptProposedAction();
    QWidget::dragEnterEvent(event);
}

bool MainWindow::eventFilter(QObject *obj, QEvent *event)
{
    if (obj == ui->progressBar)
    {
        if (event->type() == QEvent::MouseMove || event->type() == QEvent::MouseButtonRelease)
        {
            int currentX = static_cast<QMouseEvent*>(event)->x();
            double percentage = currentX*1.0/ui->progressBar->width();
            int value = percentage*(ui->progressBar->maximum() - ui->progressBar->minimum()) + ui->progressBar->minimum();
            ui->progressBar->setValue(value);
            qint64 newValue = ui->progressBar->value() * 1000;
            if (!m_player->currentMedia().isNull())
            {
                m_player->setPosition(newValue);
            }
        }
    }
    return QMainWindow::eventFilter(obj, event);
}

void MainWindow::on_pushButton_volume_clicked()
{
    //ui->volumeBar->setVisible(false);
}

void MainWindow::on_volumeBar_valueChanged(int value)
{
    //qDebug() << value;
    m_player->setVolume(value);
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    {
        //ui->volumeBar->setVisible(false);
    }
}

void MainWindow::on_pushButton_previous_clicked()
{
    positionChange(0);
    if(m_type == "music")
    {
        QFileInfo fileInfo("./resource/music/" + ui->label_name->text() + ".mp3");
        int index = m_musicList.indexOf(fileInfo);
        if(index > 0)
        {
            index--;
            fileInfo = m_musicList.at(index);

            QPixmap pixmap("./resource/music_cover/" + fileInfo.baseName() + ".png");
            ui->label_music_cover->setPixmap(pixmap);
            ui->label_name->setText(fileInfo.baseName());
            m_player->setMedia(QUrl::fromLocalFile(fileInfo.absoluteFilePath()));
            m_playerState = QMediaPlayer::PausedState;
            playFile();
        }
    }
    if(m_type == "video")
    {
        QFileInfo fileInfo("./resource/video/" + ui->label_name->text() + ".mp4");
        int index = m_videoList.indexOf(fileInfo);
        if(index > 0)
        {
            index--;
            fileInfo = m_videoList.at(index);

            QPixmap pixmap("./resource/video_cover/" + fileInfo.baseName() + ".png");
            m_player->setMedia(QUrl::fromLocalFile(fileInfo.absoluteFilePath()));
            m_playerState = QMediaPlayer::PausedState;
            playFile();
        }
    }
}

void MainWindow::on_pushButton_next_clicked()
{
    positionChange(0);
    if(m_type == "music")
    {
        QFileInfo fileInfo("./resource/music/" + ui->label_name->text() + ".mp3");
        int index = m_musicList.indexOf(fileInfo);
        if(index < m_musicList.size() - 1)
        {
            index++;
            fileInfo = m_musicList.at(index);

            QPixmap pixmap("./resource/music_cover/" + fileInfo.baseName() + ".png");
            ui->label_music_cover->setPixmap(pixmap);
            ui->label_name->setText(fileInfo.baseName());
            m_player->setMedia(QUrl::fromLocalFile(fileInfo.absoluteFilePath()));
            m_playerState = QMediaPlayer::PausedState;
            playFile();
        }
    }
    if(m_type == "video")
    {
        QFileInfo fileInfo("./resource/video/" + ui->label_name->text() + ".mp4");
        int index = m_videoList.indexOf(fileInfo);
        if(index < m_videoList.size() - 1)
        {
            index++;
            fileInfo = m_videoList.at(index);

            QPixmap pixmap("./resource/video_cover/" + fileInfo.baseName() + ".png");
            m_player->setMedia(QUrl::fromLocalFile(fileInfo.absoluteFilePath()));
            m_playerState = QMediaPlayer::PausedState;
            playFile();
        }
        ui->label_name->setText(m_videoCoverList.at(index).baseName());
    }
}


//void MainWindow::on_music_list_itemClicked(QListWidgetItem *item)
//{
//    positionChange(0);
//    QPixmap pixmap("./resource/music_cover/" + item->text() + ".png");
//    ui->label_music_cover->setPixmap(pixmap);
//    ui->label_name->setText(item->text());
//    m_player->setMedia(QUrl::fromLocalFile(QDir::currentPath() + "/resource/music/" + item->text() + ".mp3"));
//    m_playerState = QMediaPlayer::PausedState;
//    playFile();
//    m_type = "music";
//}

//void MainWindow::on_video_list_itemClicked(QListWidgetItem *item)
//{
//    positionChange(0);
//    ui->stackedWidget->setCurrentIndex(0);
//    ui->label_music_cover->setVisible(false);
//    ui->label_name->setText(item->text());
//    m_player->setMedia(QUrl::fromLocalFile(QDir::currentPath() + "/resource/video/" + item->text() + ".mp4"));
//    m_playerState = QMediaPlayer::PausedState;
//    playFile();
//    m_type = "video";
//}

void MainWindow::on_video_back_clicked()
{
    if(ui->stackedWidget->currentIndex() == 0)
    {
        ui->stackedWidget->setCurrentIndex(1);
        if (m_playerState == QMediaPlayer::PlayingState)
        {
            m_playerState = QMediaPlayer::PausedState;
            m_player->pause();
        }
    }
}

