#ifndef VOLUME_H
#define VOLUME_H

#include <QWidget>
#include <QPainter>

namespace Ui {
class Volume;
}

class Volume : public QWidget
{
    Q_OBJECT

public:
    explicit Volume(QWidget *parent = nullptr);
    ~Volume();

    void paintEvent(QPaintEvent *);

private:
    Ui::Volume *ui;
};

#endif // VOLUME_H
