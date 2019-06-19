#include "mainwindow.h"
#include <QApplication>
#include <QMainWindow>
#include <QApplication>
#include <QGridLayout>
#include <QSlider>
#include <QLabel>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
