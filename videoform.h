#ifndef VIDEOFORM_H
#define VIDEOFORM_H

#include <QWidget>

namespace Ui {
class videoForm;
}

class videoForm : public QWidget
{
    Q_OBJECT

public:
    explicit videoForm(QWidget *parent = nullptr);
    ~videoForm();

public:
    Ui::videoForm *ui;
};

#endif // VIDEOFORM_H
