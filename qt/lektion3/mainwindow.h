/*********************************************************************
 * serial2net AnyWhere
 *
 * This file is part of the  the Software "AnyWhere"
 *
 * For the full copyright and license information, please view the
 * LICENSE file that was distributed with this source code.
 *
 * File name:   mainwindow.h
 * Created at:  12.11.2017
 *********************************************************************/
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDebug>
#include <QDir>
#include <QFile>
#include <QFileDialog>
#include <QMainWindow>
#include <QMessageBox>
#include <QString>
#include <QTextStream>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow {
  Q_OBJECT

  /*****************************************************************************
   * Auf "public" elemente kann von anderen Objekten zugegriffen werden
   ****************************************************************************/
 public:
  // Konstruktor
  explicit MainWindow(QWidget *parent = 0);

  // Destruktor
  ~MainWindow();

  /*****************************************************************************
   * Auf "private" elemente kann von anderen Objekten NICHT zugegriffen werden
   ****************************************************************************/
 private:
  // Objekt UI (User Interface) erstellen
  Ui::MainWindow *ui;

  // Variabel um Dateipfad während der Lebenszeit vom Programm zu speichern als
  // Text
  QString strPfadUndDateinamen;

  // Variabel um Dateipfad während der Lebenszeit vom Programm zu speichern als
  // QDir
  QDir meinHomePfad;

  // Variabel um zu speichern ob Dateipfad gültig ist
  bool pruefenPfadDatei;

  // Varaibel um Text aus der Datei im Textedit anzuzeigen
  QString meinTextAusDatei;

  // Varaibel um Text aus der TextEdit in Datei zu schreiben
  QString meinTextFuerDatei;

  /*****************************************************************************
   * Slots sind Programme die ausgeführt werden wenn ein Signal wie zum Beispiel
   * "click" eins Widget generiert wird
   ****************************************************************************/
 private slots:
  // Programm zu PushButton "Durchsuchen"
  void on_durchsuchenPushButton_clicked();

  // Programm zu PushButton "Lesen"
  void on_lesenPushButton_clicked();

  // Leeren Textedit
  void on_leerenPushButton_clicked();

  // Programm zu PushButton "Speichern"
  void on_speichernPushButton_clicked();
};

#endif  // MAINWINDOW_H
