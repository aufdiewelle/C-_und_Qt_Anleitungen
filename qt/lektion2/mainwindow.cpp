/*********************************************************************
 * serial2net AnyWhere
 *
 * This file is part of the  the Software "AnyWhere"
 *
 * For the full copyright and license information, please view the
 * LICENSE file that was distributed with this source code.
 *
 * File name:   mainwindow.cpp
 * Created at:  18.11.2017
 *********************************************************************/
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::on_centerPushButton_clicked() {
  // erstellen variabel und ohne text initialisieren
  QString textSpeicherPlatz = "";

  // ausgeben text auf der console
  qDebug() << textSpeicherPlatz;

  // text aus dem LineEdit oben lesen und in der Variabel speichern
  textSpeicherPlatz = ui->topLineEdit->text();

  // ausgeben text auf der console
  qDebug() << textSpeicherPlatz;

  // text in das untere LineEdit schreiben
  ui->bottomLineEdit->setText(textSpeicherPlatz);
}
