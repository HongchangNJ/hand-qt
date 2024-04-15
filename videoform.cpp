#include "videoform.h"
#include "ui_videoform.h"

videoForm::videoForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::videoForm)
{
    ui->setupUi(this);
}

videoForm::~videoForm()
{
    delete ui;
}

void videoForm::mousePressEvent(QMouseEvent *e)
{
  if(e->button() == Qt::LeftButton)
  {
    qDebug()<<"clicked";
    emit clicked();
  }
}
