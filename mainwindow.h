#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "voyageur.h"
#include"stat.h"

#include <QMainWindow>
#include<QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pb_ajouter_3_clicked();

    void on_pb_supprimer_2_clicked();

    void on_pb_modifier_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::MainWindow *ui;
    Voyageur V;
    Voyageur *VO;

};
#endif // MAINWINDOW_H