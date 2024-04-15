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
