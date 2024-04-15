/********************************************************************************
** Form generated from reading UI file 'videoform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEOFORM_H
#define UI_VIDEOFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_videoForm
{
public:
    QPushButton *pushButton;
    QLabel *label_video_title;
    QLabel *label_video_cover;

    void setupUi(QWidget *videoForm)
    {
        if (videoForm->objectName().isEmpty())
            videoForm->setObjectName(QString::fromUtf8("videoForm"));
        videoForm->resize(480, 360);
        pushButton = new QPushButton(videoForm);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(180, 120, 96, 96));
        pushButton->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-image: url(:/resource/video_play.png)"));
        label_video_title = new QLabel(videoForm);
        label_video_title->setObjectName(QString::fromUtf8("label_video_title"));
        label_video_title->setGeometry(QRect(40, 300, 400, 30));
        QFont font;
        font.setPointSize(12);
        label_video_title->setFont(font);
        label_video_title->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:rgb(255, 255, 255);"));
        label_video_title->setAlignment(Qt::AlignCenter);
        label_video_cover = new QLabel(videoForm);
        label_video_cover->setObjectName(QString::fromUtf8("label_video_cover"));
        label_video_cover->setGeometry(QRect(0, 0, 480, 360));
        label_video_cover->setScaledContents(true);
        label_video_cover->raise();
        pushButton->raise();
        label_video_title->raise();

        retranslateUi(videoForm);

        QMetaObject::connectSlotsByName(videoForm);
    } // setupUi

    void retranslateUi(QWidget *videoForm)
    {
        videoForm->setWindowTitle(QApplication::translate("videoForm", "Form", nullptr));
        pushButton->setText(QString());
        label_video_title->setText(QString());
        label_video_cover->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class videoForm: public Ui_videoForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEOFORM_H
