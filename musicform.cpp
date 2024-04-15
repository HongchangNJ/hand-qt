#include "musicform.h"
#include "ui_musicform.h"
#include <QDebug>


musicForm::musicForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::musicForm)
{
    ui->setupUi(this);
}

musicForm::~musicForm()
{
    delete ui;
}


void musicForm::mousePressEvent(QMouseEvent *e)
{
  if(e->button() == Qt::LeftButton)
  {
    qDebug()<<"clicked";
    emit clicked();
  }
}

