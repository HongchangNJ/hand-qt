#ifndef VIDEOFORM_H
#define VIDEOFORM_H

#include <QWidget>
#include <QMouseEvent>
#include <QDebug>

namespace Ui {
class videoForm;
}

class videoForm : public QWidget
{
    Q_OBJECT

public:
    explicit videoForm(QWidget *parent = nullptr);
    ~videoForm();
    void mousePressEvent(QMouseEvent *e);

public:
    Ui::videoForm *ui;

signals:
    void clicked();
};

#endif // VIDEOFORM_H
