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


    // 1.放置播放窗口
    m_pPlayer = new QMediaPlayer;//媒体播放器类
    m_pPlayerWidget = new QVideoWidget;// 视频显示组件窗口
    m_pPlayer->setVideoOutput(m_pPlayerWidget);//视频输出:设置视频输出，允许用户将视频渲染到自定义的视频输出设备上。
    ui->verticalLayout_14->addWidget(m_pPlayerWidget);//将视频显示组件窗口添加到QVBoxLayout垂直布局

    // 设置视频小部件是否自动填充背景。true则视频小部件将自动填充背景，以便在视频播放期间保持视觉效果。
    m_pPlayerWidget->setAutoFillBackground(true);

    // 2.界面美化
    QPalette qplte;// 调色板
    qplte.setColor(QPalette::Window, QColor(0,0,0));// 透明
    m_pPlayerWidget->setPalette(qplte);// 设置窗口部件的调色板

    // 3. 槽函数
    //载入
    connect(ui->BtnLoad, SIGNAL(clicked()), this, SLOT(OnSetMediaFile()));
    //播放
    connect(ui->BtnPlay, SIGNAL(clicked()), m_pPlayer, SLOT(play()));// 对QMediaPlayer媒体播放器操作
    //停止
    connect(ui->BtnStop, SIGNAL(clicked()), m_pPlayer, SLOT(stop()));// 对QMediaPlayer媒体播放器操作

    // Player对象的状态已经改变。
    connect(m_pPlayer, SIGNAL(stateChanged(QMediaPlayer::State)), this, SLOT(OnStateChanged(QMediaPlayer::State)));

    ui->BtnStop->setEnabled(false);// 停止：默认不可用
    //设置滑块行为
    m_bReLoad = true;
    ui->slider->setEnabled(false);// 进度条：默认不可用

    // 信号内容的位置已更改为位置，以毫秒表示，进度条也要变
    connect(m_pPlayer, SIGNAL(positionChanged(qint64)), this, SLOT(OnSlider(qint64)));
    // 信号表示内容的持续时间已更改为时长，以毫秒表示，进度条 的最大值和最小值
    connect(m_pPlayer, SIGNAL(durationChanged(qint64)), this, SLOT(OnDurationChanged(qint64)));
    // 进度条：鼠标移动位置
    connect(ui->slider, SIGNAL(sigProgress(qint64)), m_pPlayer, SLOT(setPosition(qint64)));

//    ui->progressBar->installEventFilter(this);
//    ui->volumeBar->setVisible(false);
//    setAcceptDrops(true);

//    //ui->music_list->setViewMode(QListView::ListMode); //设置为列表显示模式
//    ui->music_list->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff); //屏蔽水平滑动条
//    ui->music_list->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff); //屏蔽垂直滑动条
//    ui->music_list->setHorizontalScrollMode(QListWidget::ScrollPerPixel); //设置为像素滚动
//    QScroller::grabGesture(ui->music_list, QScroller::LeftMouseButtonGesture);

//    QDir music_dir("./resource/music/");
//    music_dir.setFilter(QDir::Files);
//    music_dir.setSorting(QDir::Name);
//    m_musicList = music_dir.entryInfoList();
//    //qDebug() << m_musicList;

//    m_player = new QMediaPlayer;
//    m_player->setVideoOutput(ui->widget);
//    m_player->setMedia(QUrl::fromLocalFile(m_musicList.first().filePath()));

//    QDir music_cover_dir("./resource/music_cover/");
//    music_cover_dir.setFilter(QDir::Files);
//    music_cover_dir.setSorting(QDir::Name);
//    QFileInfoList music_cover_list = music_cover_dir.entryInfoList();
//    for (int i = 0; i < music_cover_list.size(); ++i)
//    {
//        QFileInfo fileInfo = music_cover_list.at(i);
//        QPixmap pixmap(fileInfo.filePath());
//        QListWidgetItem *imageItem = new QListWidgetItem;
//        imageItem->setIcon(QIcon(pixmap));
//        imageItem->setText(fileInfo.baseName());
//        imageItem->setSizeHint(QSize(400, 120));
//        imageItem->setTextAlignment(Qt::AlignCenter);
//        imageItem->setForeground(QColor(255, 255, 255));
//        ui->music_list->addItem(imageItem);
//    }

//    QDir video_dir("./resource/video/");
//    video_dir.setFilter(QDir::Files);
//    video_dir.setSorting(QDir::Name);
//    m_videoList = video_dir.entryInfoList();
//    //qDebug() << m_videoList;

//    QDir video_cover_dir("./resource/video_cover/");
//    video_cover_dir.setFilter(QDir::Files | QDir::Hidden | QDir::NoSymLinks);
//    video_cover_dir.setSorting(QDir::Name);
//    m_videoCoverList = video_cover_dir.entryInfoList();
//    for (int i = 0; i < m_videoCoverList.size(); ++i)
//    {
//        QFileInfo fileInfo = m_videoCoverList.at(i);
//    }

//    ui->pushButton_left->setStyleSheet("QPushButton {background:transparent;}");
//    ui->pushButton_mid->setStyleSheet("QPushButton {background:transparent;}");
//    ui->pushButton_right->setStyleSheet("QPushButton {background:transparent;}");
//    ui->pushButton_left->setIcon(QIcon(QPixmap(m_videoCoverList.at(0).filePath()).scaled(ui->pushButton_left->rect().size())));
//    ui->pushButton_mid->setIcon(QIcon(QPixmap(m_videoCoverList.at(1).filePath()).scaled(ui->pushButton_mid->rect().size())));
//    ui->pushButton_right->setIcon(QIcon(QPixmap(m_videoCoverList.at(2).filePath()).scaled(ui->pushButton_right->rect().size())));
//    ui->label_video_name1->setText(m_videoCoverList.at(1).baseName());

//    QFileInfo fileInfo = music_cover_list.first();
//    QPixmap pixmap(fileInfo.filePath());
//    ui->label_music_cover->setPixmap(pixmap);
//    ui->label_music_name->setText(music_cover_list.first().baseName());

//    connect(m_player, SIGNAL(positionChanged(qint64)), this, SLOT(positionChange(qint64)));
//    connect(m_player, &QMediaPlayer::mediaStatusChanged, this, [=] (QMediaPlayer::MediaStatus status) {
//        if (status == QMediaPlayer::MediaStatus::EndOfMedia)
//        {
//            playFile();
//        }
//    });
//    connect(ui->pushButton_left, &MyButton::left_slide, this, &MainWindow::button_left_slide);
//    connect(ui->pushButton_mid, &MyButton::left_slide, this, &MainWindow::button_left_slide);
//    connect(ui->pushButton_right, &MyButton::left_slide, this, &MainWindow::button_left_slide);
//    connect(ui->pushButton_left, &MyButton::right_slide, this, &MainWindow::button_right_slide);
//    connect(ui->pushButton_mid, &MyButton::right_slide, this, &MainWindow::button_right_slide);
//    connect(ui->pushButton_right, &MyButton::right_slide, this, &MainWindow::button_right_slide);
//    connect(ui->music_list, &QListWidget::itemClicked, this, &MainWindow::on_music_list_itemClicked);
}

MainWindow::~MainWindow()
{
    delete m_pPlayer;
    delete m_pPlayerWidget;
    delete ui;
}

//void MainWindow::paintEvent(QPaintEvent *)
//{
//    QPainter painter(this);
//    QPixmap pixmap("./resource/Group 1000005051.png");
//    painter.drawPixmap(this->rect(), pixmap);
//}

//void MainWindow::on_pushButton_back_clicked()
//{
//    if(ui->stackedWidget->currentIndex() == 1)
//    {
//        ui->stackedWidget->setCurrentIndex(0);
//        ui->label_music_author->setVisible(true);
//        ui->label_music_cover->setVisible(true);
//        ui->label_music_name->setVisible(true);
//    }
//}

//void MainWindow::on_pushButton_play_clicked()
//{
//    if(ui->pushButton_play->isChecked())
//    {
//        m_player->play();
//    }
//    else
//    {
//        m_player->pause();
//    }
//}

//void MainWindow::playFile()
//{
////    if (m_player->playlist()->isEmpty())
////    {
////        return;
////    }
//    if (m_playerState != QMediaPlayer::PlayingState)
//    {
//        m_playerState = QMediaPlayer::PlayingState;
//        m_player->play();
//    }
//    else
//    {
//        m_playerState = QMediaPlayer::PausedState;
//        m_player->pause();
//    }
//}

//void MainWindow::positionChange(qint64 position)
//{
//    if(m_player->duration()/1000 != ui->progressBar->maximum())
//    {
//        ui->progressBar->setMaximum(static_cast<int>(m_player->duration()/1000));
//    }
//    ui->progressBar->setValue(static_cast<int>(position/1000));
//}

//void MainWindow::dragEnterEvent(QDragEnterEvent *event)
//{
//    event->acceptProposedAction();
//    QWidget::dragEnterEvent(event);
//}

//bool MainWindow::eventFilter(QObject *obj, QEvent *event)
//{
//    if (obj == ui->progressBar)
//    {
//        if (event->type() == QEvent::MouseButtonRelease)
//        {
//            int currentX = static_cast<QMouseEvent*>(event)->x();
//            double percentage = currentX*1.0/ui->progressBar->width();
//            int value = percentage*(ui->progressBar->maximum() - ui->progressBar->minimum()) + ui->progressBar->minimum();
//            ui->progressBar->setValue(value);
//            qint64 newValue = ui->progressBar->value() * 1000;
//            if (!m_player->currentMedia().isNull())
//            {
//                m_player->setPosition(newValue);
//            }
//        }
//        else if (event->type() == QEvent::MouseButtonPress)
//        {
//            return true;
//        }
//    }
//    return QMainWindow::eventFilter(obj, event);
//}

//void MainWindow::on_pushButton_volume_clicked()
//{
//    ui->volumeBar->setVisible(true);
//}

//void MainWindow::on_volumeBar_valueChanged(int value)
//{
//    //qDebug() << value;
//    m_player->setVolume(value);
//}

//void MainWindow::mousePressEvent(QMouseEvent *event)
//{
//    if (event->button() == Qt::LeftButton)
//    {
//        ui->volumeBar->setVisible(false);
//    }
//}

//void MainWindow::button_left_slide()
//{
//    QFileInfo first = m_videoCoverList.first();
//    m_videoCoverList.pop_front();
//    m_videoCoverList.push_back(first);

//    for (int i = 0; i < m_videoCoverList.size(); ++i)
//    {
//        QFileInfo fileInfo = m_videoCoverList.at(i);
//    }

//    ui->pushButton_left->setIcon(QIcon(QPixmap(m_videoCoverList.at(0).filePath()).scaled(ui->pushButton_left->rect().size())));
//    ui->pushButton_mid->setIcon(QIcon(QPixmap(m_videoCoverList.at(1).filePath()).scaled(ui->pushButton_mid->rect().size())));
//    ui->pushButton_right->setIcon(QIcon(QPixmap(m_videoCoverList.at(2).filePath()).scaled(ui->pushButton_right->rect().size())));
//    ui->label_video_name1->setText(m_videoCoverList.at(1).baseName());
//}

//void MainWindow::button_right_slide()
//{
//    QFileInfo last = m_videoCoverList.last();
//    m_videoCoverList.pop_back();
//    m_videoCoverList.push_front(last);

//    for (int i = 0; i < m_videoCoverList.size(); ++i)
//    {
//        QFileInfo fileInfo = m_videoCoverList.at(i);
//    }

//    ui->pushButton_left->setIcon(QIcon(QPixmap(m_videoCoverList.at(0).filePath()).scaled(ui->pushButton_left->rect().size())));
//    ui->pushButton_mid->setIcon(QIcon(QPixmap(m_videoCoverList.at(1).filePath()).scaled(ui->pushButton_mid->rect().size())));
//    ui->pushButton_right->setIcon(QIcon(QPixmap(m_videoCoverList.at(2).filePath()).scaled(ui->pushButton_right->rect().size())));
//    ui->label_video_name1->setText(m_videoCoverList.at(1).baseName());
//}

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

//void MainWindow::on_pushButton_previous_clicked()
//{
//    positionChange(0);
//    if(m_type == "music")
//    {
//        QFileInfo fileInfo("./resource/music/" + ui->label_music_name->text() + ".mp3");
//        int index = m_musicList.indexOf(fileInfo);
//        if(index > 0)
//        {
//            index--;
//            fileInfo = m_musicList.at(index);

//            QPixmap pixmap("./resource/music_cover/" + fileInfo.baseName() + ".png");
//            ui->label_music_cover->setPixmap(pixmap);
//            ui->label_music_name->setText(fileInfo.baseName());
//            m_player->setMedia(QUrl::fromLocalFile(fileInfo.absoluteFilePath()));
//        }
//    }
//    if(m_type == "video")
//    {
//        QFileInfo fileInfo("./resource/video/" + ui->label_video_name1->text() + ".mp4");
//        int index = m_videoList.indexOf(fileInfo);
//        qDebug()<<index;
//        if(index > 0)
//        {
//            index--;
//            fileInfo = m_videoList.at(index);

//            QPixmap pixmap("./resource/video_cover/" + fileInfo.baseName() + ".png");
//            qDebug()<<fileInfo.absoluteFilePath();
//            m_player->setMedia(QUrl::fromLocalFile(fileInfo.absoluteFilePath()));
//        }
//    }
//}

//void MainWindow::on_pushButton_next_clicked()
//{
//    positionChange(0);
//    if(m_type == "music")
//    {
//        QFileInfo fileInfo("./resource/music/" + ui->label_music_name->text() + ".mp3");
//        int index = m_musicList.indexOf(fileInfo);
//        if(index < m_musicList.size() - 1)
//        {
//            index++;
//            fileInfo = m_musicList.at(index);

//            QPixmap pixmap("./resource/music_cover/" + fileInfo.baseName() + ".png");
//            ui->label_music_cover->setPixmap(pixmap);
//            ui->label_music_name->setText(fileInfo.baseName());
//            m_player->setMedia(QUrl::fromLocalFile(fileInfo.absoluteFilePath()));
//        }
//    }
//    if(m_type == "video")
//    {
//        QFileInfo fileInfo("./resource/video/" + ui->label_video_name1->text() + ".mp4");
//        int index = m_videoList.indexOf(fileInfo);
//        if(index < m_videoList.size() - 1)
//        {
//            index++;
//            fileInfo = m_videoList.at(index);

//            QPixmap pixmap("./resource/video_cover/" + fileInfo.baseName() + ".png");
//            m_player->setMedia(QUrl::fromLocalFile(fileInfo.absoluteFilePath()));
//        }
//        ui->label_video_name1->setText(m_videoCoverList.at(index).baseName());
//    }
//}

//void MainWindow::on_music_list_itemClicked(QListWidgetItem *item)
//{
//    positionChange(0);
//    QPixmap pixmap("./resource/music_cover/" + item->text() + ".png");
//    ui->label_music_cover->setPixmap(pixmap);
//    ui->label_music_name->setText(item->text());
//    m_player->setMedia(QUrl::fromLocalFile("./resource/music/" + ui->label_music_name->text() + ".mp3"));
//}

//载入
void MainWindow::OnSetMediaFile()
{
    QFileDialog dialog(this);//文件选择窗口
    dialog.setFileMode(QFileDialog::AnyFile);//设置文件模式(文件/文件夹)：任意文件，无论是否存在
    QStringList fileNames;
    if (dialog.exec())
        fileNames = dialog.selectedFiles();// 存所有选择的文件

    if(!fileNames.empty())
    {
        qDebug()<<"文件名:"<<fileNames[0];
        m_pPlayer->setMedia(QUrl::fromLocalFile(fileNames[0]));// 设置媒体信息
        m_bReLoad = true;
        ui->slider->setValue(0);//进度条数字在0(开始位置)
        setWindowTitle(fileNames[0]);
    }
}
// 信号内容的位置已更改为位置，以毫秒表示，进度条也要变
void MainWindow::OnSlider(qint64 i64Pos)
{
    // 自定义的位置移动==setValue(i64Pos);
    ui->slider->setProgress(i64Pos);
}
// 信号表示内容的持续时间已更改为时长，以毫秒表示，进度条 的最大值和最小值
void MainWindow::OnDurationChanged(qint64 i64Duration)
{
    if(i64Duration > 0 && m_bReLoad) // 最大值>0并且 已经载入还没设置进度条最大值
    {
        ui->slider->setRange(0, i64Duration);

        ui->minTime->setText(QString::number(0));
        QTime time = QTime::fromMSecsSinceStartOfDay(i64Duration);
        ui->maxTime->setText(time.toString("hh:mm:ss:zzz"));

        m_bReLoad = false;// 不能再设置进度条最大值
    }
}
// Player对象的状态已经改变
void MainWindow::OnStateChanged(QMediaPlayer::State enumState)
{
    if(QMediaPlayer::StoppedState == enumState)//停止
    {
        ui->BtnPlay->setEnabled(true);
        ui->BtnStop->setEnabled(false);
        ui->slider->setEnabled(false);
    }
    else if(QMediaPlayer::PlayingState == enumState)// 播放
    {
        ui->BtnPlay->setEnabled(false);
        ui->BtnStop->setEnabled(true);
        ui->slider->setEnabled(true);
    }
}

