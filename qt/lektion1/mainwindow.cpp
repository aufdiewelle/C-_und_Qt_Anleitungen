/*********************************************************************
 * serial2net AnyWhere
 *
 * This file is part of the  the Software "AnyWhere"
 *
 * For the full copyright and license information, please view the
 * LICENSE file that was distributed with this source code.
 *
 * File name:   mainwindow.cpp
 * Created at:  15.10.2017
 *********************************************************************/
#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>
#include <QString>

// KONSTRUKTOR
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);

  //* Debug *********************************************************
  qDebug() << "Konstruktor";
  // Debug ***********************************************************/

  // Startwert in LineEditZahl1 schreiben
  ui->lineEditZahl1->setText(strZahl1);

  // Startwert in LineEditZahl2 schreiben
  ui->lineEditZahl2->setText(strZahl2);

  // Startwert in LineEditResultat schreiben
  ui->lineEditResultat->setText(strResultat);
}

// DESTRUKTOR
MainWindow::~MainWindow() {
  //* Debug *********************************************************
  qDebug() << "Destruktor";
  // Debug ***********************************************************/

  delete ui;
}

// SLOT PUSHBUTTON START
void MainWindow::on_pushButtonStart_clicked() {
  //* Debug *********************************************************
  qDebug() << "Start gedrückt";
  // Debug ***********************************************************/

  // Text aus lineEditZahl1 zu zahl konvertieren
  strZahl1 = ui->lineEditZahl1->text();
  zahl1 = strZahl1.toDouble();

  // Text aus lineEditZahl2 zu zahl konvertieren
  strZahl2 = ui->lineEditZahl2->text();
  zahl2 = strZahl2.toDouble();

  // eingestellter Operator auslesen
  strOperator = ui->comboBoxOperator->currentText();

  if (strOperator == "+") {
    // berechnen
    resultat = zahl1 + zahl2;

    //* Debug *********************************************************
    qDebug() << "Addition:" << resultat << " = " << zahl1 << " + " << zahl2;
    // Debug ***********************************************************/

    // resultat als String speichern
    strResultat = QString::number(resultat);

    // resultat in lineEditResultat schreiben
    ui->lineEditResultat->setText(strResultat);
  }

  if (strOperator == "-") {
    // berechnen
    resultat = zahl1 - zahl2;

    //* Debug *********************************************************
    qDebug() << "Subtraktion:" << resultat << " = " << zahl1 << " - " << zahl2;
    // Debug ***********************************************************/

    // resultat als String speichern
    strResultat = QString::number(resultat);

    // resultat in lineEditResultat schreiben
    ui->lineEditResultat->setText(strResultat);
  }

  if (strOperator == "*") {
    // berechnen
    resultat = zahl1 * zahl2;

    //* Debug *********************************************************
    qDebug() << "Multiplikation:" << resultat << " = " << zahl1 << " * "
             << zahl2;
    // Debug ***********************************************************/

    // resultat als String speichern
    strResultat = QString::number(resultat);

    // resultat in lineEditResultat schreiben
    ui->lineEditResultat->setText(strResultat);
  }

  if (strOperator == "/") {
    // berechnen
    resultat = zahl1 / zahl2;

    //* Debug *********************************************************
    qDebug() << "Division:" << resultat << " = " << zahl1 << " / " << zahl2;
    // Debug ***********************************************************/

    // resultat als String speichern
    strResultat = QString::number(resultat);

    // resultat in lineEditResultat schreiben
    ui->lineEditResultat->setText(strResultat);
  }
}

// SLOT PUSHBUTTON RESET
void MainWindow::on_pushButtonReset_clicked() {
  //* Debug *********************************************************
  qDebug() << "Reset gedrückt";
  // Debug ***********************************************************/

  ui->lineEditZahl1->setText("");
  ui->lineEditZahl2->setText("");
  ui->lineEditResultat->setText("");
}
