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


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->progressBar->installEventFilter(this);
   // ui->volumeBar->setVisible(false);
    setAcceptDrops(true);
    this->setWindowState(this->windowState() | Qt::WindowMaximized);

    ui->music_list->setFlow(QListView::TopToBottom);
    ui->music_list->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff); //屏蔽水平滑动条
    ui->music_list->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff); //屏蔽垂直滑动条
    ui->music_list->setHorizontalScrollMode(QListWidget::ScrollPerPixel); //设置为像素滚动
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
        imageItem->setIcon(QIcon(pixmap));
        imageItem->setText(fileInfo.baseName());
        imageItem->setSizeHint(QSize(400, 120));
        imageItem->setTextAlignment(Qt::AlignCenter);
        imageItem->setForeground(QColor(255, 255, 255));
        ui->music_list->addItem(imageItem);
    }

    ui->video_list->setFlow(QListView::LeftToRight);
    ui->video_list->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff); //屏蔽水平滑动条
    ui->video_list->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff); //屏蔽垂直滑动条
    ui->video_list->setHorizontalScrollMode(QListWidget::ScrollPerPixel); //设置为像素滚动
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

        QPainter painter(&pixmap);
        QPen pen = painter.pen();
        pen.setColor(Qt::white);
        QFont font = painter.font();
        font.setBold(true);
        font.setPixelSize(30);
        painter.setPen(pen);
        painter.setFont(font);
        painter.drawText(pixmap.rect(),Qt::AlignCenter,fileInfo.baseName());

        QListWidgetItem *imageItem = new QListWidgetItem;
        imageItem->setIcon(QIcon(pixmap));
        imageItem->setText(fileInfo.baseName());
        imageItem->setSizeHint(QSize(480, 360));
        ui->video_list->addItem(imageItem);
    }

    QFileInfo fileInfo = music_cover_list.first();
    QPixmap pixmap(fileInfo.filePath());
    ui->label_music_cover->setPixmap(pixmap);
    ui->label_name->setText(music_cover_list.first().baseName());

    volumeBar = new QSlider(Qt::Horizontal); ;

    connect(m_player, SIGNAL(positionChanged(qint64)), this, SLOT(positionChange(qint64)));
    connect(m_player, &QMediaPlayer::mediaStatusChanged, this, [=] (QMediaPlayer::MediaStatus status) {
        if (status == QMediaPlayer::MediaStatus::EndOfMedia)
        {
            playFile();
        }
    });
    connect(ui->music_list, &QListWidget::itemClicked, this, &MainWindow::on_music_list_itemClicked);
    connect(ui->video_list, &QListWidget::itemClicked, this, &MainWindow::on_video_list_itemClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
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
}

void MainWindow::playFile()
{
    //    if (m_player->playlist()->isEmpty())
    //    {
    //        return;
    //    }
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
    ui->volumeBar->setVisible(true);
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
        ui->volumeBar->setVisible(false);
    }
}


//void MainWindow::on_pushButton_play_video_clicked()
//{
//    positionChange(0);
//    ui->label_music_author->setVisible(false);
//    ui->label_music_cover->setVisible(false);
//    ui->label_music_name->setVisible(false);

//    if(ui->stackedWidget->currentIndex() == 0)
//    {
//        ui->stackedWidget->setCurrentIndex(1);
//        //ui->label_video_name2->setText(m_videoList.at(1).baseName());

//        m_player->setMedia(QUrl::fromLocalFile(m_videoList.at(1).absoluteFilePath()));
//        playFile();
//    }

//    m_type = "video";
//}

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

void MainWindow::on_music_list_itemClicked(QListWidgetItem *item)
{
    positionChange(0);
    QPixmap pixmap("./resource/music_cover/" + item->text() + ".png");
    ui->label_music_cover->setPixmap(pixmap);
    ui->label_name->setText(item->text());
    m_player->setMedia(QUrl::fromLocalFile(QDir::currentPath() + "/resource/music/" + item->text() + ".mp3"));
    m_playerState = QMediaPlayer::PausedState;
    playFile();
    m_type = "music";
}


void MainWindow::on_video_list_itemClicked(QListWidgetItem *item)
{
    positionChange(0);
    ui->stackedWidget->setCurrentIndex(0);
    ui->label_music_cover->setVisible(false);
    ui->label_name->setText(item->text());
    m_player->setMedia(QUrl::fromLocalFile(QDir::currentPath() + "/resource/video/" + item->text() + ".mp4"));
    m_playerState = QMediaPlayer::PausedState;
    playFile();
    m_type = "video";
    // ui->video_widget->setFullScreen(true);
}

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

