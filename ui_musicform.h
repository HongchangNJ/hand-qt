/********************************************************************************
** Form generated from reading UI file 'musicform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUSICFORM_H
#define UI_MUSICFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_musicForm
{
public:
    QLabel *label_music_author;
    QPushButton *pushButton;
    QLabel *label_icon;
    QLabel *label_music_title;

    void setupUi(QWidget *musicForm)
    {
        if (musicForm->objectName().isEmpty())
            musicForm->setObjectName(QString::fromUtf8("musicForm"));
        musicForm->resize(600, 140);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(musicForm->sizePolicy().hasHeightForWidth());
        musicForm->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(10);
        musicForm->setFont(font);
        label_music_author = new QLabel(musicForm);
        label_music_author->setObjectName(QString::fromUtf8("label_music_author"));
        label_music_author->setGeometry(QRect(200, 80, 150, 20));
        label_music_author->setFont(font);
        label_music_author->setStyleSheet(QString::fromUtf8("Color:White;\n"
"background:transparent;"));
        label_music_author->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        pushButton = new QPushButton(musicForm);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(59, 53, 44, 44));
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"background-image: url(:/resource/play.png);\n"
""));
        label_icon = new QLabel(musicForm);
        label_icon->setObjectName(QString::fromUtf8("label_icon"));
        label_icon->setGeometry(QRect(20, 14, 112, 112));
        label_icon->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-radius: 5px;"));
        label_music_title = new QLabel(musicForm);
        label_music_title->setObjectName(QString::fromUtf8("label_music_title"));
        label_music_title->setGeometry(QRect(200, 20, 400, 40));
        QFont font1;
        font1.setPointSize(14);
        label_music_title->setFont(font1);
        label_music_title->setStyleSheet(QString::fromUtf8("Color:White;\n"
"background:transparent;"));
        label_music_title->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_music_author->raise();
        label_icon->raise();
        label_music_title->raise();
        pushButton->raise();

        retranslateUi(musicForm);

        QMetaObject::connectSlotsByName(musicForm);
    } // setupUi

    void retranslateUi(QWidget *musicForm)
    {
        musicForm->setWindowTitle(QCoreApplication::translate("musicForm", "Form", nullptr));
        label_music_author->setText(QCoreApplication::translate("musicForm", "author", nullptr));
        pushButton->setText(QString());
        label_icon->setText(QString());
        label_music_title->setText(QCoreApplication::translate("musicForm", "title", nullptr));
    } // retranslateUi

};

namespace Ui {
    class musicForm: public Ui_musicForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSICFORM_H
