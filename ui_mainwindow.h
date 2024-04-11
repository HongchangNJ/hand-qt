/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <videowidget.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page_7;
    QVBoxLayout *verticalLayout_4;
    QPushButton *video_back;
    VideoWidget *video_widget;
    QWidget *root_widget_3;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout_12;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_back;
    QLabel *label_title;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_5;
    QWidget *widget_11;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_music_title;
    QListWidget *music_list;
    QWidget *widget_12;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_video_title;
    QListWidget *video_list;
    QWidget *widget_6;
    QVBoxLayout *verticalLayout_10;
    QSlider *progressBar;
    QWidget *audio_control_container;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_music_cover;
    QWidget *widget_10;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_name;
    QLabel *label_author;
    QPushButton *pushButton_previous;
    QPushButton *pushButton_play;
    QPushButton *pushButton_next;
    QPushButton *pushButton_volume;
    QSlider *volumeBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1303, 574);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow::titleBar { background-color: red; }"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page_7 = new QWidget();
        page_7->setObjectName(QString::fromUtf8("page_7"));
        verticalLayout_4 = new QVBoxLayout(page_7);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        video_back = new QPushButton(page_7);
        video_back->setObjectName(QString::fromUtf8("video_back"));
        video_back->setMinimumSize(QSize(96, 96));
        video_back->setMaximumSize(QSize(96, 96));
        video_back->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-image: url(:/resource/Frame 41.png);"));
        video_back->setIconSize(QSize(96, 96));

        verticalLayout_4->addWidget(video_back);

        video_widget = new VideoWidget(page_7);
        video_widget->setObjectName(QString::fromUtf8("video_widget"));
        QFont font;
        font.setPointSize(16);
        video_widget->setFont(font);

        verticalLayout_4->addWidget(video_widget);

        stackedWidget->addWidget(page_7);
        root_widget_3 = new QWidget();
        root_widget_3->setObjectName(QString::fromUtf8("root_widget_3"));
        horizontalLayout_2 = new QHBoxLayout(root_widget_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        widget = new QWidget(root_widget_3);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout_12 = new QVBoxLayout(widget);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMaximumSize(QSize(16777215, 96));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_back = new QPushButton(widget_2);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        pushButton_back->setMinimumSize(QSize(96, 96));
        pushButton_back->setMaximumSize(QSize(96, 96));
        pushButton_back->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-image: url(:/resource/Frame 41.png);"));
        pushButton_back->setIconSize(QSize(96, 96));

        horizontalLayout->addWidget(pushButton_back);

        label_title = new QLabel(widget_2);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        QFont font1;
        font1.setPointSize(24);
        label_title->setFont(font1);
        label_title->setStyleSheet(QString::fromUtf8("color: white\357\274\233"));
        label_title->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_title);

        horizontalLayout->setStretch(1, 1);

        verticalLayout_12->addWidget(widget_2);

        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setMaximumSize(QSize(16777215, 500));
        horizontalLayout_5 = new QHBoxLayout(widget_3);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        widget_11 = new QWidget(widget_3);
        widget_11->setObjectName(QString::fromUtf8("widget_11"));
        widget_11->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-image: url(:/resource/Rectangle 34624647.png);"));
        verticalLayout_5 = new QVBoxLayout(widget_11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_music_title = new QLabel(widget_11);
        label_music_title->setObjectName(QString::fromUtf8("label_music_title"));
        label_music_title->setFont(font);
        label_music_title->setStyleSheet(QString::fromUtf8("color: white\357\274\233"));

        verticalLayout_5->addWidget(label_music_title);

        music_list = new QListWidget(widget_11);
        music_list->setObjectName(QString::fromUtf8("music_list"));
        QFont font2;
        font2.setPointSize(12);
        music_list->setFont(font2);
        music_list->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border: 0px solid transparent;\n"
""));
        music_list->setAutoScrollMargin(150);
        music_list->setIconSize(QSize(100, 100));
        music_list->setBatchSize(10);

        verticalLayout_5->addWidget(music_list);


        horizontalLayout_5->addWidget(widget_11);

        widget_12 = new QWidget(widget_3);
        widget_12->setObjectName(QString::fromUtf8("widget_12"));
        widget_12->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-image: url(:/resource/Rectangle 34624646.png);"));
        verticalLayout_13 = new QVBoxLayout(widget_12);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        label_video_title = new QLabel(widget_12);
        label_video_title->setObjectName(QString::fromUtf8("label_video_title"));
        label_video_title->setFont(font);
        label_video_title->setStyleSheet(QString::fromUtf8("color: white\357\274\233"));

        verticalLayout_13->addWidget(label_video_title);

        video_list = new QListWidget(widget_12);
        video_list->setObjectName(QString::fromUtf8("video_list"));
        QFont font3;
        font3.setPointSize(1);
        video_list->setFont(font3);
        video_list->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border: 0px solid transparent;\n"
""));
        video_list->setAutoScrollMargin(150);
        video_list->setIconSize(QSize(480, 360));
        video_list->setBatchSize(10);

        verticalLayout_13->addWidget(video_list);


        horizontalLayout_5->addWidget(widget_12);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 2);

        verticalLayout_12->addWidget(widget_3);


        horizontalLayout_2->addWidget(widget);

        stackedWidget->addWidget(root_widget_3);

        verticalLayout->addWidget(stackedWidget);

        widget_6 = new QWidget(centralwidget);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        widget_6->setMaximumSize(QSize(16777215, 208));
        verticalLayout_10 = new QVBoxLayout(widget_6);
        verticalLayout_10->setSpacing(0);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        progressBar = new QSlider(widget_6);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-image: url(:/resource/Rectangle 6152.png);"));
        progressBar->setOrientation(Qt::Horizontal);

        verticalLayout_10->addWidget(progressBar);

        audio_control_container = new QWidget(widget_6);
        audio_control_container->setObjectName(QString::fromUtf8("audio_control_container"));
        audio_control_container->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-image: url(:/resource/Rectangle 34624644.png);"));
        horizontalLayout_4 = new QHBoxLayout(audio_control_container);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_music_cover = new QLabel(audio_control_container);
        label_music_cover->setObjectName(QString::fromUtf8("label_music_cover"));
        label_music_cover->setMaximumSize(QSize(120, 120));
        label_music_cover->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-image: url(:/resource/Group 1000005021.png);"));
        label_music_cover->setScaledContents(true);

        horizontalLayout_4->addWidget(label_music_cover);

        widget_10 = new QWidget(audio_control_container);
        widget_10->setObjectName(QString::fromUtf8("widget_10"));
        widget_10->setMaximumSize(QSize(300, 16777215));
        widget_10->setStyleSheet(QString::fromUtf8("background:transparent;"));
        verticalLayout_11 = new QVBoxLayout(widget_10);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        label_name = new QLabel(widget_10);
        label_name->setObjectName(QString::fromUtf8("label_name"));
        label_name->setFont(font);
        label_name->setStyleSheet(QString::fromUtf8("color: white;background:transparent;"));

        verticalLayout_11->addWidget(label_name);

        label_author = new QLabel(widget_10);
        label_author->setObjectName(QString::fromUtf8("label_author"));
        label_author->setStyleSheet(QString::fromUtf8("color: white;background:transparent;"));

        verticalLayout_11->addWidget(label_author);


        horizontalLayout_4->addWidget(widget_10);

        pushButton_previous = new QPushButton(audio_control_container);
        pushButton_previous->setObjectName(QString::fromUtf8("pushButton_previous"));
        pushButton_previous->setMaximumSize(QSize(86, 86));
        pushButton_previous->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-image: url(:/resource/previous.png);"));

        horizontalLayout_4->addWidget(pushButton_previous);

        pushButton_play = new QPushButton(audio_control_container);
        pushButton_play->setObjectName(QString::fromUtf8("pushButton_play"));
        pushButton_play->setMaximumSize(QSize(128, 128));
        pushButton_play->setStyleSheet(QString::fromUtf8("background:transparent;\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resource/Group 1000005035.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/resource/Subtract.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_play->setIcon(icon);
        pushButton_play->setIconSize(QSize(130, 130));
        pushButton_play->setCheckable(true);

        horizontalLayout_4->addWidget(pushButton_play);

        pushButton_next = new QPushButton(audio_control_container);
        pushButton_next->setObjectName(QString::fromUtf8("pushButton_next"));
        pushButton_next->setMaximumSize(QSize(86, 86));
        pushButton_next->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-image: url(:/resource/next.png);"));

        horizontalLayout_4->addWidget(pushButton_next);

        pushButton_volume = new QPushButton(audio_control_container);
        pushButton_volume->setObjectName(QString::fromUtf8("pushButton_volume"));
        pushButton_volume->setMaximumSize(QSize(75, 75));
        pushButton_volume->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-image: url(:/resource/volume.png);"));
        pushButton_volume->setIconSize(QSize(16, 16));

        horizontalLayout_4->addWidget(pushButton_volume);


        verticalLayout_10->addWidget(audio_control_container);

        volumeBar = new QSlider(widget_6);
        volumeBar->setObjectName(QString::fromUtf8("volumeBar"));
        volumeBar->setMaximumSize(QSize(16777215, 5));
        volumeBar->setMaximum(100);
        volumeBar->setSliderPosition(50);
        volumeBar->setOrientation(Qt::Vertical);

        verticalLayout_10->addWidget(volumeBar);


        verticalLayout->addWidget(widget_6);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        video_back->setText(QString());
        pushButton_back->setText(QString());
        label_title->setText(QApplication::translate("MainWindow", "\345\225\206\346\261\244\347\273\235\345\275\261 3D\346\211\213\345\212\277\345\212\237\350\203\275\344\275\223\351\252\214", nullptr));
        label_music_title->setText(QApplication::translate("MainWindow", "\345\215\225\346\233\262\345\210\227\350\241\250", nullptr));
        label_video_title->setText(QApplication::translate("MainWindow", "\345\225\206\346\261\244\347\273\235\345\275\261\345\212\237\350\203\275\350\247\206\351\242\221\345\210\227\350\241\250", nullptr));
        label_music_cover->setText(QString());
        label_name->setText(QApplication::translate("MainWindow", "Mia &Sebastian's Theme", nullptr));
        label_author->setText(QApplication::translate("MainWindow", "Justin Hurwitz", nullptr));
        pushButton_previous->setText(QString());
        pushButton_play->setText(QString());
        pushButton_next->setText(QString());
        pushButton_volume->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
