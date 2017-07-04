#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class mainwindow : public QMainWindow
{
    Q_OBJECT

    public:
    explicit mainwindow(QWidget *parent = 0);
    ~mainwindow();

private slots:
    void on_btn_fwd_clicked();

    void on_btn_bck_clicked();

    void on_btn_spd_2_clicked();

    void on_btn_spd_3_clicked();

    void on_btn_spd_4_clicked();

    void on_btn_pause_clicked();

    void on_btn_strt_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
