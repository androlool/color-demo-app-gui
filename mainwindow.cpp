#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QtWidgets>
#include <string>
#include <QFileDialog>
#include <QProcess>
#include <QDebug>
#include <QMessageBox>
#include <QLabel>
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <QObject>
#include <cmath>


using namespace std;
//Colour Matrix Variables:
double f1 = 100,f5 = 100, f9 = 100;
double  f2 = 0, f3 = 0, f4 = 0, f6 = 0, f7 = 0, f8 = 0 ;
// Gamma
double rega1 = 100, rega2 = 100, rega3 = 100;
// Hue
double hueangle = 0;
double lr = 0.213;
double lg = 0.715;
double lb = 0.072;
double a = 0.143;
double b = 0.140;
double c = -0.283;
// Saturation
double slr = 0.3086;
double slg = 0.6094;
double slb = 0.0820;



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::on_pushButton_clicked()
{
//    QString fileName = QFileDialog::getOpenFileName(this,
//    tr("Open Script"), "/", tr("Script Files (*.sh)"));
//     QString fileName = "/home/balu/maked/test.sh";
//    if (!QProcess::startDetached("/bin/sh", QStringList{fileName}))
//        qDebug() << "Failed to run";
//  popen("/home/balu/maked/color-demo-app/cmdemo -o HDMI-A-1 -c id" , "r");
//    QMessageBox msgBox;
//    QString s = QString::number(waswas);
//    msgBox.setText(s);
//    msgBox.exec();
//    QProcess pcb;
//    pcb.start("bash");
//    pcb.waitForFinished();
//pcb.start("/home/balu/maked/color-demo-app/cmdemo -o HDMI-A-1 -c 0:1:0:0:1:0:0:0:1");
//QProcess::startDetached("/home/balu/maked/color-demo-app/cmdemo -o HDMI-A-1 -c 0:1:0:0:1:0:0:0:1");


}




void MainWindow::on_default_ctm_clicked()
{
    //Restore default Colour Matrix

    ui->ctm_s_1->setValue(100);
    ui->ctm_s_2->setValue(000);
    ui->ctm_s_3->setValue(000);
    ui->ctm_s_4->setValue(000);
    ui->ctm_s_5->setValue(100);
    ui->ctm_s_6->setValue(000);
    ui->ctm_s_7->setValue(000);
    ui->ctm_s_8->setValue(000);
    ui->ctm_s_9->setValue(100);
    ui->sat_s->setValue(100);


    popen("/home/balu/maked/color-demo-app/cmdemo -o HDMI-A-1 -c id" , "r");
}

void MainWindow::on_default_dega_clicked()
{
    popen("/home/balu/maked/color-demo-app/cmdemo -o HDMI-A-1 -d srgb" , "r");
}

void MainWindow::on_default_rega_clicked()
{
    //Restore default Gamma
    ui->rega_s_1->setValue(100);
    ui->rega_s_2->setValue(100);
    ui->rega_s_3->setValue(100);
    popen("/home/balu/maked/color-demo-app/cmdemo -o HDMI-A-1 -r srgb" , "r");

}


// Colour Transformation Matrix Slider
void MainWindow::on_ctm_s_1_valueChanged(int value)
{

    f1 = value;
    ui->label_ctm_s_1->setText(QString::number(f1 / 100,'f', 2));
    QString qstr = "/home/balu/maked/color-demo-app/cmdemo -o HDMI-A-1 -c " + QString::number(f1 / 100,'f', 2) + ":" + QString::number(f2/ 100,'f', 2) + ":"+ QString::number(f3/ 100,'f', 2) + ":"+ QString::number(f4/ 100,'f', 2) + ":"+ QString::number(f5/ 100,'f', 2) + ":"+ QString::number(f6/ 100,'f', 2) + ":"+ QString::number(f7/ 100,'f', 2) + ":"+ QString::number(f8/ 100,'f', 2) + ":"+ QString::number(f9/ 100,'f', 2);
    QProcess::startDetached(qstr);
}
void MainWindow::on_ctm_s_2_valueChanged(int value)
{

    f2 = value;
    ui->label_ctm_s_2->setText(QString::number(f2 / 100,'f', 2));
    QString qstr = "/home/balu/maked/color-demo-app/cmdemo -o HDMI-A-1 -c " + QString::number(f1 / 100,'f', 2) + ":" + QString::number(f2/ 100,'f', 2) + ":"+ QString::number(f3/ 100,'f', 2) + ":"+ QString::number(f4/ 100,'f', 2) + ":"+ QString::number(f5/ 100,'f', 2) + ":"+ QString::number(f6/ 100,'f', 2) + ":"+ QString::number(f7/ 100,'f', 2) + ":"+ QString::number(f8/ 100,'f', 2) + ":"+ QString::number(f9/ 100,'f', 2);
    QProcess::startDetached(qstr);

}
void MainWindow::on_ctm_s_3_valueChanged(int value)
{

    f3 = value;
    ui->label_ctm_s_3->setText(QString::number(f3 / 100,'f', 2));
    QString qstr = "/home/balu/maked/color-demo-app/cmdemo -o HDMI-A-1 -c " + QString::number(f1 / 100,'f', 2) + ":" + QString::number(f2/ 100,'f', 2) + ":"+ QString::number(f3/ 100,'f', 2) + ":"+ QString::number(f4/ 100,'f', 2) + ":"+ QString::number(f5/ 100,'f', 2) + ":"+ QString::number(f6/ 100,'f', 2) + ":"+ QString::number(f7/ 100,'f', 2) + ":"+ QString::number(f8/ 100,'f', 2) + ":"+ QString::number(f9/ 100,'f', 2);
    QProcess::startDetached(qstr);

}
void MainWindow::on_ctm_s_4_valueChanged(int value)
{

    f4 = value;
    ui->label_ctm_s_4->setText(QString::number(f4 / 100,'f', 2));
    QString qstr = "/home/balu/maked/color-demo-app/cmdemo -o HDMI-A-1 -c " + QString::number(f1 / 100,'f', 2) + ":" + QString::number(f2/ 100,'f', 2) + ":"+ QString::number(f3/ 100,'f', 2) + ":"+ QString::number(f4/ 100,'f', 2) + ":"+ QString::number(f5/ 100,'f', 2) + ":"+ QString::number(f6/ 100,'f', 2) + ":"+ QString::number(f7/ 100,'f', 2) + ":"+ QString::number(f8/ 100,'f', 2) + ":"+ QString::number(f9/ 100,'f', 2);
    QProcess::startDetached(qstr);

}
void MainWindow::on_ctm_s_5_valueChanged(int value)
{

    f5 = value;
    ui->label_ctm_s_5->setText(QString::number(f5 / 100,'f', 2));
    QString qstr = "/home/balu/maked/color-demo-app/cmdemo -o HDMI-A-1 -c " + QString::number(f1 / 100,'f', 2) + ":" + QString::number(f2/ 100,'f', 2) + ":"+ QString::number(f3/ 100,'f', 2) + ":"+ QString::number(f4/ 100,'f', 2) + ":"+ QString::number(f5/ 100,'f', 2) + ":"+ QString::number(f6/ 100,'f', 2) + ":"+ QString::number(f7/ 100,'f', 2) + ":"+ QString::number(f8/ 100,'f', 2) + ":"+ QString::number(f9/ 100,'f', 2);
    QProcess::startDetached(qstr);

}
void MainWindow::on_ctm_s_6_valueChanged(int value)
{

    f6 = value;
    ui->label_ctm_s_6->setText(QString::number(f6 / 100,'f', 2));
    QString qstr = "/home/balu/maked/color-demo-app/cmdemo -o HDMI-A-1 -c " + QString::number(f1 / 100,'f', 2) + ":" + QString::number(f2/ 100,'f', 2) + ":"+ QString::number(f3/ 100,'f', 2) + ":"+ QString::number(f4/ 100,'f', 2) + ":"+ QString::number(f5/ 100,'f', 2) + ":"+ QString::number(f6/ 100,'f', 2) + ":"+ QString::number(f7/ 100,'f', 2) + ":"+ QString::number(f8/ 100,'f', 2) + ":"+ QString::number(f9/ 100,'f', 2);
    QProcess::startDetached(qstr);

}
void MainWindow::on_ctm_s_7_valueChanged(int value)
{

    f7 = value;
    ui->label_ctm_s_7->setText(QString::number(f7 / 100,'f', 2));
    QString qstr = "/home/balu/maked/color-demo-app/cmdemo -o HDMI-A-1 -c " + QString::number(f1 / 100,'f', 2) + ":" + QString::number(f2/ 100,'f', 2) + ":"+ QString::number(f3/ 100,'f', 2) + ":"+ QString::number(f4/ 100,'f', 2) + ":"+ QString::number(f5/ 100,'f', 2) + ":"+ QString::number(f6/ 100,'f', 2) + ":"+ QString::number(f7/ 100,'f', 2) + ":"+ QString::number(f8/ 100,'f', 2) + ":"+ QString::number(f9/ 100,'f', 2);
    QProcess::startDetached(qstr);

}
void MainWindow::on_ctm_s_8_valueChanged(int value)
{

    f8 = value;
    ui->label_ctm_s_8->setText(QString::number(f8 / 100,'f', 2));
    QString qstr = "/home/balu/maked/color-demo-app/cmdemo -o HDMI-A-1 -c " + QString::number(f1 / 100,'f', 2) + ":" + QString::number(f2/ 100,'f', 2) + ":"+ QString::number(f3/ 100,'f', 2) + ":"+ QString::number(f4/ 100,'f', 2) + ":"+ QString::number(f5/ 100,'f', 2) + ":"+ QString::number(f6/ 100,'f', 2) + ":"+ QString::number(f7/ 100,'f', 2) + ":"+ QString::number(f8/ 100,'f', 2) + ":"+ QString::number(f9/ 100,'f', 2);
    QProcess::startDetached(qstr);

}
void MainWindow::on_ctm_s_9_valueChanged(int value)
{

    f9 = value;
    ui->label_ctm_s_9->setText(QString::number(f9 / 100,'f', 2));
    QString qstr = "/home/balu/maked/color-demo-app/cmdemo -o HDMI-A-1 -c " + QString::number(f1 / 100,'f', 2) + ":" + QString::number(f2/ 100,'f', 2) + ":"+ QString::number(f3/ 100,'f', 2) + ":"+ QString::number(f4/ 100,'f', 2) + ":"+ QString::number(f5/ 100,'f', 2) + ":"+ QString::number(f6/ 100,'f', 2) + ":"+ QString::number(f7/ 100,'f', 2) + ":"+ QString::number(f8/ 100,'f', 2) + ":"+ QString::number(f9/ 100,'f', 2);
    QProcess::startDetached(qstr);

}

// Gamma Slider
void MainWindow::on_rega_s_1_valueChanged(int value)
{
    rega1 = value;
    ui->label_rega_s_1->setText(QString::number(rega1 / 100,'f', 2));
    QString qstr = "/home/balu/maked/color-demo-app/cmdemo -o HDMI-A-1 -r " + QString::number(rega1 / 100,'f', 2) + ":" + QString::number(rega2 / 100,'f', 2) + ":"+ QString::number(rega3 / 100,'f', 2);
    QProcess::startDetached(qstr);

}
void MainWindow::on_rega_s_2_valueChanged(int value)
{
    rega2 = value;
    ui->label_rega_s_2->setText(QString::number(rega2 / 100,'f', 2));
    QString qstr = "/home/balu/maked/color-demo-app/cmdemo -o HDMI-A-1 -r " + QString::number(rega1 / 100,'f', 2) + ":" + QString::number(rega2 / 100,'f', 2) + ":"+ QString::number(rega3 / 100,'f', 2);
    QProcess::startDetached(qstr);

}
void MainWindow::on_rega_s_3_valueChanged(int value)
{
    rega3 = value;
    ui->label_rega_s_3->setText(QString::number(rega3 / 100,'f', 2));
    QString qstr = "/home/balu/maked/color-demo-app/cmdemo -o HDMI-A-1 -r " + QString::number(rega1 / 100,'f', 2) + ":" + QString::number(rega2 / 100,'f', 2) + ":"+ QString::number(rega3 / 100,'f', 2);
    QProcess::startDetached(qstr);

}
//Gamma Radio
void MainWindow::on_degam_r_1_toggled(bool checked)
{
        QString qstr = "/home/balu/maked/color-demo-app/cmdemo -o HDMI-A-1 -d srgb";
        QProcess::startDetached(qstr);

}
void MainWindow::on_degam_r_2_toggled(bool checked)
{
       QString qstr = "/home/balu/maked/color-demo-app/cmdemo -o HDMI-A-1 -d linear";
       QProcess::startDetached(qstr);

}

//Hue Slider
void MainWindow::on_hue_s_valueChanged(int value)
{
    double v1,v2,v3;
    hueangle = value;
    double cosi =cos(hueangle);
    double sini =sin(hueangle);
    v1 = lr+cosi*(1-lr)+sini*(-lr),lg+cosi*(-lg) +sini*(-lg),lb+cos(-lb) +sini*(1-lb);
    v2 = lr+cosi*(-lr)+ sini*(a),lg+cosi*(1-lg)+sini*(b),lb+cos(-lb) +sini*(c);
    v3 = lr+cosi*(-lr)+ sini*(-(1-lr)),lg+cosi*(-lg) +sini*(lg) ,lb+cos(1-lb)+sini*(lb);
    ui->label_v_1->setText(QString::number(v1,'f',4));
    ui->label_v_2->setText(QString::number(v2,'f', 4));
    ui->label_v_3->setText(QString::number(v3,'f',4));
    QString qstr = "/home/balu/maked/color-demo-app/cmdemo -o HDMI-A-1 -c " + QString::number(v1,'f',4)+ ":0:0:0:" + QString::number(v2,'f',4) +":0:0:0:" +QString::number(v3,'f',4);
    QProcess::startDetached(qstr);

}

//Saturation Slider
void MainWindow::on_sat_s_valueChanged(int value)
{
    double v1,v2,v3,v4,v5,v6,v7,v8,v9;
    int i1,i2,i3,i4,i5,i6,i7,i8,i9;
    double x;
    x = value;
    x = (x/100);
    v1 = slr*(1-x)+x;
    v2 = slg*(1-x);
    v3 = slb*(1-x);
    v4 = slr*(1-x);
    v5 = slg*(1-x)+x;
    v6 = slb*(1-x);
    v7 = slr*(1-x);
    v8 = slg*(1-x);
    v9 = slb*(1-x)+x;
    ui->label_sat->setText(QString::number(value)+ "%");
    ui->label_sv_1->setText(QString::number(x,'f',4));
    ui->label_sv_2->setText(QString::number(value,'f', 4));
    ui->label_sv_3->setText(QString::number(v3,'f',4));
    QString qstr = "/home/balu/maked/color-demo-app/cmdemo -o HDMI-A-1 -c " + QString::number(v1,'f',4)+ ":" + QString::number(v2,'f',4)+ ":" + QString::number(v3,'f',4)+ ":" + QString::number(v4,'f',4)+ ":" + QString::number(v5,'f',4)+ ":" + QString::number(v6,'f',4)+ ":" + QString::number(v7,'f',4)+ ":" + QString::number(v8,'f',4)+ ":" + QString::number(v9,'f',4);
    QProcess::startDetached(qstr);
    v1 = v1 * 100;
    v2 = v2 * 100;
    v3 = v3 * 100;
    v4 = v4 * 100;
    v5 = v5 * 100;
    v6 = v6 * 100;
    v7 = v7 * 100;
    v8 = v8 * 100;
    v9 = v9 * 100;
    i1 = (int) v1;
    i2 = (int) v2;
    i3 = (int) v3;
    i4 = (int) v4;
    i5 = (int) v5;
    i6 = (int) v6;
    i7 = (int) v7;
    i8 = (int) v8;
    i9 = (int) v9;
    ui->ctm_s_1->setValue(i1);
    ui->ctm_s_2->setValue(i2);
    ui->ctm_s_3->setValue(i3);
    ui->ctm_s_4->setValue(i4);
    ui->ctm_s_5->setValue(i5);
    ui->ctm_s_6->setValue(i6);
    ui->ctm_s_7->setValue(i7);
    ui->ctm_s_8->setValue(i8);
    ui->ctm_s_9->setValue(i9);



}

