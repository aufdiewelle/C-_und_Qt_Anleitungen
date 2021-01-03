/*********************************************************************
 * serial2net AnyWhere
 *
 * This file is part of the  the Software "AnyWhere"
 *
 * For the full copyright and license information, please view the
 * LICENSE file that was distributed with this source code.
 *
 * File name:   mainwindow.h
 * Created at:  18.11.2017
 *********************************************************************/
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDebug>
#include <QMainWindow>
#include <QString>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();

 private slots:
  void on_centerPushButton_clicked();

 private:
  Ui::MainWindow *ui;
};

#endif  // MAINWINDOW_H
