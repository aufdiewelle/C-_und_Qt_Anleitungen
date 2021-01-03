/*********************************************************************
 * serial2net AnyWhere
 *
 * This file is part of the  the Software "AnyWhere"
 *
 * For the full copyright and license information, please view the
 * LICENSE file that was distributed with this source code.
 *
 * File name:   mainwindow.h
 * Created at:  15.10.2017
 *********************************************************************/
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();

 private slots:
  void on_pushButtonStart_clicked();
  void on_pushButtonReset_clicked();

 private:
  Ui::MainWindow *ui;
  double zahl1 = 0.0;
  double zahl2 = 0.0;
  double resultat = 0.0;

  QString strZahl1 = "";
  QString strZahl2 = "";
  QString strOperator = "";
  QString strResultat = "";
};

#endif  // MAINWINDOW_H
