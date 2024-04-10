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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "playerslider.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_6;
    QStackedWidget *stackedWidget;
    QWidget *home_page;
    QHBoxLayout *horizontalLayout_4;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_13;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_back;
    QLabel *label_title;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_6;
    QWidget *music_list_container;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_music_title;
    QListWidget *music_list;
    QHBoxLayout *horizontalLayout_5;
    QWidget *video_list_container;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_video_title;
    QListWidget *listWidget;
    QVBoxLayout *verticalLayout_12;
    QVBoxLayout *verticalLayout_11;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_7;
    QSlider *progressBar_2;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout;
    QLabel *label_music_cover_2;
    QWidget *widget_6;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_music_name_2;
    QLabel *label_music_author_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_previous_2;
    QPushButton *pushButton_play_2;
    QPushButton *pushButton_next_2;
    QPushButton *pushButton_volume_2;
    QSlider *volumeBar;
    QWidget *video_play_page;
    QVBoxLayout *verticalLayout_15;
    QWidget *video_container;
    QVBoxLayout *verticalLayout_16;
    QVBoxLayout *verticalLayout_14;
    QWidget *horizontalWidget_2;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *BtnPlay;
    QPushButton *BtnStop;
    QPushButton *BtnLoad;
    QLabel *minTime;
    PlayerSlider *slider;
    QLabel *maxTime;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1076, 600);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_6 = new QVBoxLayout(centralwidget);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        home_page = new QWidget();
        home_page->setObjectName(QString::fromUtf8("home_page"));
        home_page->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-image: url(:/resource/Group 1000005051.png);"));
        horizontalLayout_4 = new QHBoxLayout(home_page);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        widget_2 = new QWidget(home_page);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        verticalLayout_13 = new QVBoxLayout(widget_2);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        widget_7 = new QWidget(widget_2);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        widget_7->setMaximumSize(QSize(16777215, 96));
        horizontalLayout_2 = new QHBoxLayout(widget_7);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_back = new QPushButton(widget_7);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        pushButton_back->setMinimumSize(QSize(96, 96));
        pushButton_back->setMaximumSize(QSize(96, 96));
        pushButton_back->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-image: url(:/resource/Frame 41.png);"));

        horizontalLayout_2->addWidget(pushButton_back);

        label_title = new QLabel(widget_7);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        QFont font;
        font.setPointSize(24);
        label_title->setFont(font);
        label_title->setStyleSheet(QString::fromUtf8("color: white\357\274\233"));
        label_title->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_title);


        verticalLayout_13->addWidget(widget_7);

        widget_8 = new QWidget(widget_2);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        horizontalLayout_6 = new QHBoxLayout(widget_8);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        music_list_container = new QWidget(widget_8);
        music_list_container->setObjectName(QString::fromUtf8("music_list_container"));
        music_list_container->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-image: url(:/resource/Rectangle 34624647.png);"));
        verticalLayout_9 = new QVBoxLayout(music_list_container);
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_music_title = new QLabel(music_list_container);
        label_music_title->setObjectName(QString::fromUtf8("label_music_title"));
        QFont font1;
        font1.setPointSize(16);
        label_music_title->setFont(font1);
        label_music_title->setStyleSheet(QString::fromUtf8("color: white\357\274\233"));

        verticalLayout_9->addWidget(label_music_title);

        music_list = new QListWidget(music_list_container);
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

        verticalLayout_9->addWidget(music_list);


        horizontalLayout_6->addWidget(music_list_container);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(10);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));

        horizontalLayout_6->addLayout(horizontalLayout_5);

        video_list_container = new QWidget(widget_8);
        video_list_container->setObjectName(QString::fromUtf8("video_list_container"));
        video_list_container->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-image: url(:/resource/Rectangle 34624646.png);"));
        verticalLayout_10 = new QVBoxLayout(video_list_container);
        verticalLayout_10->setSpacing(0);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_video_title = new QLabel(video_list_container);
        label_video_title->setObjectName(QString::fromUtf8("label_video_title"));
        label_video_title->setFont(font1);
        label_video_title->setStyleSheet(QString::fromUtf8("color: white\357\274\233"));

        verticalLayout_10->addWidget(label_video_title);

        listWidget = new QListWidget(video_list_container);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout_10->addWidget(listWidget);


        horizontalLayout_6->addWidget(video_list_container);


        verticalLayout_13->addWidget(widget_8);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));

        verticalLayout_13->addLayout(verticalLayout_12);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));

        verticalLayout_13->addLayout(verticalLayout_11);

        widget_4 = new QWidget(widget_2);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setMinimumSize(QSize(0, 208));
        widget_4->setMaximumSize(QSize(16777215, 208));
        widget_4->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-image: url(:/resource/Rectangle 34624644.png);"));
        verticalLayout_7 = new QVBoxLayout(widget_4);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        progressBar_2 = new QSlider(widget_4);
        progressBar_2->setObjectName(QString::fromUtf8("progressBar_2"));
        progressBar_2->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-image: url(:/resource/Rectangle 6152.png);"));
        progressBar_2->setOrientation(Qt::Horizontal);

        verticalLayout_7->addWidget(progressBar_2);

        widget_5 = new QWidget(widget_4);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout = new QHBoxLayout(widget_5);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_music_cover_2 = new QLabel(widget_5);
        label_music_cover_2->setObjectName(QString::fromUtf8("label_music_cover_2"));
        label_music_cover_2->setMinimumSize(QSize(120, 120));
        label_music_cover_2->setMaximumSize(QSize(120, 120));
        label_music_cover_2->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-image: url(:/resource/Group 1000005021.png);"));
        label_music_cover_2->setScaledContents(true);

        horizontalLayout->addWidget(label_music_cover_2);

        widget_6 = new QWidget(widget_5);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        widget_6->setMinimumSize(QSize(0, 86));
        widget_6->setMaximumSize(QSize(200, 86));
        verticalLayout_8 = new QVBoxLayout(widget_6);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_music_name_2 = new QLabel(widget_6);
        label_music_name_2->setObjectName(QString::fromUtf8("label_music_name_2"));
        label_music_name_2->setMinimumSize(QSize(0, 0));
        label_music_name_2->setMaximumSize(QSize(16777215, 16777215));
        label_music_name_2->setFont(font1);
        label_music_name_2->setStyleSheet(QString::fromUtf8("color: white\357\274\233"));

        verticalLayout_8->addWidget(label_music_name_2);

        label_music_author_2 = new QLabel(widget_6);
        label_music_author_2->setObjectName(QString::fromUtf8("label_music_author_2"));
        label_music_author_2->setStyleSheet(QString::fromUtf8("color: white\357\274\233"));

        verticalLayout_8->addWidget(label_music_author_2);


        horizontalLayout->addWidget(widget_6);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_previous_2 = new QPushButton(widget_5);
        pushButton_previous_2->setObjectName(QString::fromUtf8("pushButton_previous_2"));
        pushButton_previous_2->setMaximumSize(QSize(85, 85));
        pushButton_previous_2->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-image: url(:/resource/previous.png);"));

        horizontalLayout->addWidget(pushButton_previous_2);

        pushButton_play_2 = new QPushButton(widget_5);
        pushButton_play_2->setObjectName(QString::fromUtf8("pushButton_play_2"));
        pushButton_play_2->setMinimumSize(QSize(128, 128));
        pushButton_play_2->setMaximumSize(QSize(128, 128));
        pushButton_play_2->setStyleSheet(QString::fromUtf8("background:transparent"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resource/Group 1000005035.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/resource/Subtract.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_play_2->setIcon(icon);
        pushButton_play_2->setIconSize(QSize(130, 130));
        pushButton_play_2->setCheckable(true);

        horizontalLayout->addWidget(pushButton_play_2);

        pushButton_next_2 = new QPushButton(widget_5);
        pushButton_next_2->setObjectName(QString::fromUtf8("pushButton_next_2"));
        pushButton_next_2->setMaximumSize(QSize(85, 85));
        pushButton_next_2->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-image: url(:/resource/next.png);"));

        horizontalLayout->addWidget(pushButton_next_2);

        pushButton_volume_2 = new QPushButton(widget_5);
        pushButton_volume_2->setObjectName(QString::fromUtf8("pushButton_volume_2"));
        pushButton_volume_2->setMaximumSize(QSize(75, 75));
        pushButton_volume_2->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-image: url(:/resource/volume.png);"));

        horizontalLayout->addWidget(pushButton_volume_2);

        volumeBar = new QSlider(widget_5);
        volumeBar->setObjectName(QString::fromUtf8("volumeBar"));
        volumeBar->setMaximum(100);
        volumeBar->setSliderPosition(50);
        volumeBar->setOrientation(Qt::Vertical);

        horizontalLayout->addWidget(volumeBar);


        verticalLayout_7->addWidget(widget_5);


        verticalLayout_13->addWidget(widget_4);


        horizontalLayout_4->addWidget(widget_2);

        stackedWidget->addWidget(home_page);
        video_play_page = new QWidget();
        video_play_page->setObjectName(QString::fromUtf8("video_play_page"));
        video_play_page->setEnabled(true);
        verticalLayout_15 = new QVBoxLayout(video_play_page);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        video_container = new QWidget(video_play_page);
        video_container->setObjectName(QString::fromUtf8("video_container"));
        verticalLayout_16 = new QVBoxLayout(video_container);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));

        verticalLayout_16->addLayout(verticalLayout_14);

        horizontalWidget_2 = new QWidget(video_container);
        horizontalWidget_2->setObjectName(QString::fromUtf8("horizontalWidget_2"));
        horizontalWidget_2->setMinimumSize(QSize(0, 208));
        horizontalWidget_2->setMaximumSize(QSize(16777215, 208));
        horizontalLayout_7 = new QHBoxLayout(horizontalWidget_2);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        BtnPlay = new QPushButton(horizontalWidget_2);
        BtnPlay->setObjectName(QString::fromUtf8("BtnPlay"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BtnPlay->sizePolicy().hasHeightForWidth());
        BtnPlay->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(BtnPlay);

        BtnStop = new QPushButton(horizontalWidget_2);
        BtnStop->setObjectName(QString::fromUtf8("BtnStop"));
        sizePolicy.setHeightForWidth(BtnStop->sizePolicy().hasHeightForWidth());
        BtnStop->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(BtnStop);

        BtnLoad = new QPushButton(horizontalWidget_2);
        BtnLoad->setObjectName(QString::fromUtf8("BtnLoad"));
        sizePolicy.setHeightForWidth(BtnLoad->sizePolicy().hasHeightForWidth());
        BtnLoad->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(BtnLoad);

        minTime = new QLabel(horizontalWidget_2);
        minTime->setObjectName(QString::fromUtf8("minTime"));

        horizontalLayout_7->addWidget(minTime);

        slider = new PlayerSlider(horizontalWidget_2);
        slider->setObjectName(QString::fromUtf8("slider"));
        slider->setOrientation(Qt::Horizontal);

        horizontalLayout_7->addWidget(slider);

        maxTime = new QLabel(horizontalWidget_2);
        maxTime->setObjectName(QString::fromUtf8("maxTime"));

        horizontalLayout_7->addWidget(maxTime);


        verticalLayout_16->addWidget(horizontalWidget_2);

        verticalLayout_16->setStretch(0, 1);

        verticalLayout_15->addWidget(video_container);

        stackedWidget->addWidget(video_play_page);

        verticalLayout_6->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_back->setText(QString());
        label_title->setText(QApplication::translate("MainWindow", "\345\225\206\346\261\244\347\273\235\345\275\261 3D\346\211\213\345\212\277\345\212\237\350\203\275\344\275\223\351\252\214", nullptr));
        label_music_title->setText(QApplication::translate("MainWindow", "\345\215\225\346\233\262\345\210\227\350\241\250", nullptr));
        label_video_title->setText(QApplication::translate("MainWindow", "\345\225\206\346\261\244\347\273\235\345\275\261\345\212\237\350\203\275\350\247\206\351\242\221\345\210\227\350\241\250", nullptr));
        label_music_cover_2->setText(QString());
        label_music_name_2->setText(QApplication::translate("MainWindow", "Mia &Sebastian's Theme", nullptr));
        label_music_author_2->setText(QApplication::translate("MainWindow", "Justin Hurwitz", nullptr));
        pushButton_previous_2->setText(QString());
        pushButton_play_2->setText(QString());
        pushButton_next_2->setText(QString());
        pushButton_volume_2->setText(QString());
        BtnPlay->setText(QApplication::translate("MainWindow", "\346\222\255 \346\224\276\n"
"Play", nullptr));
        BtnStop->setText(QApplication::translate("MainWindow", "\346\232\202 \345\201\234\n"
"Stop", nullptr));
        BtnLoad->setText(QApplication::translate("MainWindow", "\350\275\275 \345\205\245\n"
"Load", nullptr));
        minTime->setText(QApplication::translate("MainWindow", "-1/0", nullptr));
        maxTime->setText(QApplication::translate("MainWindow", "-1/0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
