#include "volume.h"
#include "ui_volume.h"

Volume::Volume(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Volume)
{
    ui->setupUi(this);

    this->setWindowFlag(Qt::FramelessWindowHint); //无边框
    this->setWindowFlag(Qt::WindowStaysOnTopHint);
    this->setStyleSheet("QWidget#widget{border-radius:30px;}");
    setAttribute(Qt::WA_QuitOnClose, false); //子窗口随父窗口关闭
    setAttribute(Qt::WA_TranslucentBackground);
}

Volume::~Volume()
{
    delete ui;
}


void Volume::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPixmap pixmap("./resource/Rectangle 34624663.png");
    painter.drawPixmap(this->rect(),pixmap);
}
