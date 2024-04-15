#include "mainwindow.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

//    QPixmap pixmap("./resource/20240406202834.png");
//    pixmap = pixmap.scaled(w.size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);

//    QPalette palette;
//    palette.setBrush(QPalette::Window, pixmap);

//    w.setPalette(palette);

    w.show();
    return a.exec();
}
