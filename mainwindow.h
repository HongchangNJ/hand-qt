#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QLabel>
#include <QFileDialog>
#include <QListWidgetItem>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

    ~MainWindow();

    void paintEvent(QPaintEvent *);

private slots:
    void on_pushButton_back_clicked();

    void on_pushButton_play_clicked();

    void playFile();

    void positionChange(qint64 position);

    void on_pushButton_volume_clicked();

    void on_volumeBar_valueChanged(int value);

    void on_pushButton_previous_clicked();

    void on_pushButton_next_clicked();

    //void on_music_list_itemClicked(QListWidgetItem *item);

    //void on_video_list_itemClicked(QListWidgetItem *item);

    void on_video_back_clicked();

protected:
    void dragEnterEvent(QDragEnterEvent *);

    bool eventFilter(QObject *obj, QEvent *event);

    void mousePressEvent(QMouseEvent *event);

private:
    Ui::MainWindow *ui;

    QSlider *volumeBar;

    QMediaPlayer *m_player;

    QString m_fileName;

    QMediaPlayer::State m_playerState;

    bool m_moveSlider;

    QLabel *m_timeStatus;

    QFileInfoList m_musicList, m_videoList, m_videoCoverList;

    QString m_type = "music";
};

#endif // MAINWINDOW_H
