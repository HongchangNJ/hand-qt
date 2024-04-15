/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
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
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_back;
    QLabel *label_title;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_5;
    QWidget *widget_11;
    QGridLayout *gridLayout;
    QListWidget *music_list;
    QSpacerItem *verticalSpacer;
    QLabel *label_music_title;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QWidget *widget_12;
    QGridLayout *gridLayout_2;
    QLabel *label_video_title;
    QSpacerItem *verticalSpacer_2;
    QListWidget *video_list;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_4;
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
    QSlider *volumeBar;
    QPushButton *pushButton_volume;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1920, 743);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow::titleBar { background-color: red; }"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setMinimumSize(QSize(0, 600));
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
        root_widget_3->setMinimumSize(QSize(0, 0));
        verticalLayout_2 = new QVBoxLayout(root_widget_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget = new QWidget(root_widget_3);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMaximumSize(QSize(1792, 40));
        label->setStyleSheet(QString::fromUtf8(""));
        label->setPixmap(QPixmap(QString::fromUtf8(":/resource/status_bar.png")));
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label);


        verticalLayout_2->addWidget(widget);

        widget_2 = new QWidget(root_widget_3);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        widget_2->setMinimumSize(QSize(0, 60));
        widget_2->setMaximumSize(QSize(16777215, 96));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, 0);
        pushButton_back = new QPushButton(widget_2);
        pushButton_back->setObjectName(QString::fromUtf8("pushButton_back"));
        pushButton_back->setEnabled(false);
        pushButton_back->setMinimumSize(QSize(96, 96));
        pushButton_back->setMaximumSize(QSize(96, 96));
        pushButton_back->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-image: url(:/resource/Frame 41.png);"));
        pushButton_back->setIconSize(QSize(96, 96));

        horizontalLayout->addWidget(pushButton_back);

        label_title = new QLabel(widget_2);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        label_title->setEnabled(true);
        sizePolicy.setHeightForWidth(label_title->sizePolicy().hasHeightForWidth());
        label_title->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(24);
        label_title->setFont(font1);
        label_title->setStyleSheet(QString::fromUtf8("color:white"));
        label_title->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_title);

        horizontalLayout->setStretch(1, 1);

        verticalLayout_2->addWidget(widget_2);

        widget_3 = new QWidget(root_widget_3);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setMinimumSize(QSize(0, 200));
        widget_3->setMaximumSize(QSize(16777215, 700));
        horizontalLayout_5 = new QHBoxLayout(widget_3);
        horizontalLayout_5->setSpacing(20);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(20, 20, 20, 20);
        widget_11 = new QWidget(widget_3);
        widget_11->setObjectName(QString::fromUtf8("widget_11"));
        widget_11->setMinimumSize(QSize(800, 200));
        widget_11->setMaximumSize(QSize(16777215, 700));
        widget_11->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-image: url(:/resource/Rectangle 34624647.png);\n"
"border-radius: 10px;\n"
"background-position:center"));
        gridLayout = new QGridLayout(widget_11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        music_list = new QListWidget(widget_11);
        music_list->setObjectName(QString::fromUtf8("music_list"));
        music_list->setMinimumSize(QSize(600, 0));
        QFont font2;
        font2.setPointSize(1);
        music_list->setFont(font2);
        music_list->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-radius: 50px;\n"
"\n"
""));
        music_list->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        music_list->setAutoScrollMargin(150);
        music_list->setProperty("showDropIndicator", QVariant(true));
        music_list->setDragEnabled(false);
        music_list->setIconSize(QSize(0, 0));
        music_list->setBatchSize(10);

        gridLayout->addWidget(music_list, 3, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        label_music_title = new QLabel(widget_11);
        label_music_title->setObjectName(QString::fromUtf8("label_music_title"));
        label_music_title->setMinimumSize(QSize(400, 0));
        QFont font3;
        font3.setPointSize(20);
        label_music_title->setFont(font3);
        label_music_title->setStyleSheet(QString::fromUtf8("color: white;\n"
"background:transparent;\n"
""));

        gridLayout->addWidget(label_music_title, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 3, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 2, 1, 1, 1);


        horizontalLayout_5->addWidget(widget_11);

        widget_12 = new QWidget(widget_3);
        widget_12->setObjectName(QString::fromUtf8("widget_12"));
        widget_12->setMinimumSize(QSize(0, 200));
        widget_12->setMaximumSize(QSize(16777215, 700));
        widget_12->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-image: url(:/resource/Rectangle 34624646.png);\n"
"border-radius: 10px;\n"
"background-position:center"));
        gridLayout_2 = new QGridLayout(widget_12);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_video_title = new QLabel(widget_12);
        label_video_title->setObjectName(QString::fromUtf8("label_video_title"));
        label_video_title->setFont(font3);
        label_video_title->setStyleSheet(QString::fromUtf8("color: white;\n"
"background:transparent;"));

        gridLayout_2->addWidget(label_video_title, 1, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_2, 0, 1, 1, 1);

        video_list = new QListWidget(widget_12);
        video_list->setObjectName(QString::fromUtf8("video_list"));
        video_list->setFont(font2);
        video_list->setStyleSheet(QString::fromUtf8(""));
        video_list->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        video_list->setAutoScrollMargin(150);
        video_list->setIconSize(QSize(480, 360));
        video_list->setBatchSize(10);

        gridLayout_2->addWidget(video_list, 3, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 3, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 3, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_4, 2, 1, 1, 1);


        horizontalLayout_5->addWidget(widget_12);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 5);

        verticalLayout_2->addWidget(widget_3);

        stackedWidget->addWidget(root_widget_3);

        verticalLayout->addWidget(stackedWidget);

        widget_6 = new QWidget(centralwidget);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        widget_6->setMaximumSize(QSize(16777215, 208));
        widget_6->setStyleSheet(QString::fromUtf8("background-image: url(:/resource/Rectangle 34624644.png);"));
        verticalLayout_10 = new QVBoxLayout(widget_6);
        verticalLayout_10->setSpacing(0);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        progressBar = new QSlider(widget_6);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setMaximumSize(QSize(16777215, 90));
        progressBar->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-image: url(:/resource/Rectangle 6152.png);"));
        progressBar->setPageStep(1);
        progressBar->setOrientation(Qt::Horizontal);

        verticalLayout_10->addWidget(progressBar);

        audio_control_container = new QWidget(widget_6);
        audio_control_container->setObjectName(QString::fromUtf8("audio_control_container"));
        audio_control_container->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_4 = new QHBoxLayout(audio_control_container);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_music_cover = new QLabel(audio_control_container);
        label_music_cover->setObjectName(QString::fromUtf8("label_music_cover"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_music_cover->sizePolicy().hasHeightForWidth());
        label_music_cover->setSizePolicy(sizePolicy1);
        label_music_cover->setMaximumSize(QSize(120, 120));
        label_music_cover->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-image: url(:/resource/Group 1000005021.png);"));
        label_music_cover->setScaledContents(true);

        horizontalLayout_4->addWidget(label_music_cover);

        widget_10 = new QWidget(audio_control_container);
        widget_10->setObjectName(QString::fromUtf8("widget_10"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget_10->sizePolicy().hasHeightForWidth());
        widget_10->setSizePolicy(sizePolicy2);
        widget_10->setMinimumSize(QSize(400, 0));
        widget_10->setMaximumSize(QSize(400, 16777215));
        widget_10->setStyleSheet(QString::fromUtf8("background:transparent;"));
        verticalLayout_11 = new QVBoxLayout(widget_10);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        label_name = new QLabel(widget_10);
        label_name->setObjectName(QString::fromUtf8("label_name"));
        sizePolicy2.setHeightForWidth(label_name->sizePolicy().hasHeightForWidth());
        label_name->setSizePolicy(sizePolicy2);
        label_name->setMinimumSize(QSize(400, 0));
        label_name->setMaximumSize(QSize(400, 16777215));
        label_name->setFont(font);
        label_name->setStyleSheet(QString::fromUtf8("color: white;background:transparent;"));

        verticalLayout_11->addWidget(label_name);

        label_author = new QLabel(widget_10);
        label_author->setObjectName(QString::fromUtf8("label_author"));
        sizePolicy2.setHeightForWidth(label_author->sizePolicy().hasHeightForWidth());
        label_author->setSizePolicy(sizePolicy2);
        label_author->setMinimumSize(QSize(400, 0));
        label_author->setMaximumSize(QSize(400, 16777215));
        label_author->setStyleSheet(QString::fromUtf8("color: white;background:transparent;"));

        verticalLayout_11->addWidget(label_author);


        horizontalLayout_4->addWidget(widget_10);

        pushButton_previous = new QPushButton(audio_control_container);
        pushButton_previous->setObjectName(QString::fromUtf8("pushButton_previous"));
        sizePolicy1.setHeightForWidth(pushButton_previous->sizePolicy().hasHeightForWidth());
        pushButton_previous->setSizePolicy(sizePolicy1);
        pushButton_previous->setMaximumSize(QSize(86, 86));
        pushButton_previous->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-image: url(:/resource/previous.png);"));

        horizontalLayout_4->addWidget(pushButton_previous);

        pushButton_play = new QPushButton(audio_control_container);
        pushButton_play->setObjectName(QString::fromUtf8("pushButton_play"));
        sizePolicy1.setHeightForWidth(pushButton_play->sizePolicy().hasHeightForWidth());
        pushButton_play->setSizePolicy(sizePolicy1);
        pushButton_play->setMaximumSize(QSize(128, 128));
        pushButton_play->setAutoFillBackground(false);
        pushButton_play->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resource/icon_play.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/resource/icon_pause.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_play->setIcon(icon);
        pushButton_play->setIconSize(QSize(128, 128));
        pushButton_play->setCheckable(true);
        pushButton_play->setFlat(true);

        horizontalLayout_4->addWidget(pushButton_play);

        pushButton_next = new QPushButton(audio_control_container);
        pushButton_next->setObjectName(QString::fromUtf8("pushButton_next"));
        sizePolicy1.setHeightForWidth(pushButton_next->sizePolicy().hasHeightForWidth());
        pushButton_next->setSizePolicy(sizePolicy1);
        pushButton_next->setMaximumSize(QSize(86, 86));
        pushButton_next->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-image: url(:/resource/next.png);"));

        horizontalLayout_4->addWidget(pushButton_next);

        volumeBar = new QSlider(audio_control_container);
        volumeBar->setObjectName(QString::fromUtf8("volumeBar"));
        volumeBar->setOrientation(Qt::Vertical);

        horizontalLayout_4->addWidget(volumeBar);

        pushButton_volume = new QPushButton(audio_control_container);
        pushButton_volume->setObjectName(QString::fromUtf8("pushButton_volume"));
        sizePolicy1.setHeightForWidth(pushButton_volume->sizePolicy().hasHeightForWidth());
        pushButton_volume->setSizePolicy(sizePolicy1);
        pushButton_volume->setMaximumSize(QSize(75, 75));
        pushButton_volume->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-image: url(:/resource/volume.png);"));
        pushButton_volume->setIconSize(QSize(16, 16));

        horizontalLayout_4->addWidget(pushButton_volume);


        verticalLayout_10->addWidget(audio_control_container);


        verticalLayout->addWidget(widget_6);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        video_back->setText(QString());
        label->setText(QString());
        pushButton_back->setText(QString());
        label_title->setText(QCoreApplication::translate("MainWindow", "\345\225\206\346\261\244\347\273\235\345\275\261 3D\346\211\213\345\212\277\345\212\237\350\203\275\344\275\223\351\252\214", nullptr));
        label_music_title->setText(QCoreApplication::translate("MainWindow", "\345\215\225\346\233\262\345\210\227\350\241\250", nullptr));
        label_video_title->setText(QCoreApplication::translate("MainWindow", "\345\225\206\346\261\244\347\273\235\345\275\261\345\212\237\350\203\275\350\247\206\351\242\221\345\210\227\350\241\250", nullptr));
        label_music_cover->setText(QString());
        label_name->setText(QCoreApplication::translate("MainWindow", "Mia &Sebastian's Theme", nullptr));
        label_author->setText(QCoreApplication::translate("MainWindow", "Justin Hurwitz", nullptr));
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
