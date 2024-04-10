/********************************************************************************
** Form generated from reading UI file 'volume.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VOLUME_H
#define UI_VOLUME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Volume
{
public:

    void setupUi(QWidget *Volume)
    {
        if (Volume->objectName().isEmpty())
            Volume->setObjectName(QString::fromUtf8("Volume"));
        Volume->resize(152, 455);
        Volume->setStyleSheet(QString::fromUtf8(""));

        retranslateUi(Volume);

        QMetaObject::connectSlotsByName(Volume);
    } // setupUi

    void retranslateUi(QWidget *Volume)
    {
        Volume->setWindowTitle(QCoreApplication::translate("Volume", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Volume: public Ui_Volume {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VOLUME_H
