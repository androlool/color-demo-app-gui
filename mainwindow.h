#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_default_dega_clicked();

    void on_default_rega_clicked();

    void on_ctm_s_1_valueChanged(int value);

    void on_ctm_s_2_valueChanged(int value);

    void on_ctm_s_3_valueChanged(int value);

    void on_ctm_s_4_valueChanged(int value);

    void on_ctm_s_5_valueChanged(int value);

    void on_ctm_s_6_valueChanged(int value);

    void on_ctm_s_7_valueChanged(int value);

    void on_ctm_s_8_valueChanged(int value);

    void on_ctm_s_9_valueChanged(int value);

    void on_default_ctm_clicked();

    void on_rega_s_1_valueChanged(int value);

    void on_rega_s_2_valueChanged(int value);

    void on_rega_s_3_valueChanged(int value);

    void on_degam_r_1_toggled(bool checked);

    void on_degam_r_2_toggled(bool checked);

    void on_sat_s_valueChanged(int value);

    void on_hue_s_valueChanged(int value);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
