#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include <QMouseEvent>

namespace Ui {
class musicForm;
}

class musicForm : public QWidget
{
    Q_OBJECT

public:
    explicit musicForm(QWidget *parent = nullptr);
    ~musicForm();

    void mousePressEvent(QMouseEvent *e);

public:
    Ui::musicForm *ui;

signals:
    void clicked();
};

#endif // FORM_H
