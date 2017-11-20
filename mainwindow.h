#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
//#include "tabledata.h"
#include <QString>
#include <bddata.h>
#include <QStandardItem>
#include <QStandardItemModel>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    Ui::MainWindow *ui;
int napr=0;
bool set_label=0;
//TableData table1;
QString file_name_load;
QString file_name_out;
BDData table;
QStandardItemModel *model;
QStandardItem *item;
QString table_name_from;

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
int get_napr();
//QString get_file_name();
void load_to_view();

private slots:
  //  void slot_sh();
void choose_napr1(bool checked);
void choose_napr2(bool);
void choose_file_click();
void go_click();
void path_click();
void download_click();
//void sel_label(); //??? need?
};

#endif // MAINWINDOW_H
