/*********************************************************************
 * serial2net AnyWhere
 *
 * This file is part of the  the Software "AnyWhere"
 *
 * For the full copyright and license information, please view the
 * LICENSE file that was distributed with this source code.
 *
 * File name:   mainwindow.cpp
 * Created at:  12.11.2017
 *********************************************************************/
#include "mainwindow.h"
#include "ui_mainwindow.h"

// Konstruktor
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  //* Debug *********************************************************
  qDebug() << "Konstruktor";
  // Debug ***********************************************************/

  // folgender Code wird nur einmal ausgeführt wenn Programm gestartet wird
  ui->setupUi(this);

  // Home speichern (egal welches Betriebssystem)
  meinHomePfad = QDir().home();

  // Erstellen Ordner "Textdateien"
  meinHomePfad.mkpath("Textdateien");

  // öffnen Ordner "Textdateien"
  meinHomePfad.cd("Textdateien");

  // Pfad vom Ordner "Textdateien" als absoluter Pfad und als Text speichern
  strPfadUndDateinamen = meinHomePfad.absolutePath();
}

// Destruktor
MainWindow::~MainWindow() {
  //* Debug *********************************************************
  qDebug() << "Destruktor";
  // Debug ***********************************************************/

  // folgender Code  wird nur einmal ausgeführt wenn Programm beendet wird
  delete ui;
}

// Programm zu PushButton "Durchsuchen"
void MainWindow::on_durchsuchenPushButton_clicked() {
  //* Debug *********************************************************
  qDebug() << "PushButton 'Durchsuchen' gedrückt!";
  // Debug ***********************************************************/

  // Dialog "Datei öffnen" ausführen und den Pfad und Namen der ausgewählten
  // Datei als Text speichern
  strPfadUndDateinamen = QFileDialog::getOpenFileName(
      this, tr("Öffnen"), strPfadUndDateinamen, tr("Datei öffnen(*.txt)"));

  // Prüfen ob im Text vom Pfad ein '.txt' enthalten ist, wenn ja ist Pfad
  // gültig
  if (strPfadUndDateinamen.contains(".txt", Qt::CaseInsensitive)) {
    //* Debug *********************************************************
    qDebug() << "Dateipfad ist gültig es wurde eine txt Datei ausgewählt!";
    // Debug ***********************************************************/

    // Variabel ist gueltig deshalb 'true' setzen
    pruefenPfadDatei = true;

    // Pfad in UI LineEdit schreiben
    ui->browseLineEdit->setText(strPfadUndDateinamen);

  } else {
    //* Debug *********************************************************
    qDebug() << "Dateipfad ist ungültig, es wurde keine Datei ausgewählt!";
    // Debug ***********************************************************/

    // Variabel ist ungueltig deshalb 'false' setzen
    pruefenPfadDatei = false;

    // Pfad in UI LineEdit leeren
    ui->browseLineEdit->setText("");
  }

  //* Debug *********************************************************
  qDebug() << strPfadUndDateinamen;
  // Debug ***********************************************************/
}

// Programm zu PushButton "Lesen"
void MainWindow::on_lesenPushButton_clicked() {
  //* Debug *********************************************************
  qDebug() << "PushButton 'Lesen' gedrückt!";
  // Debug ***********************************************************/

  // löschen Inhalt der Text Variabel
  meinTextAusDatei = "";

  // prüfen ob der Dateipfad gültig ist
  if (pruefenPfadDatei) {
    //* Debug *********************************************************
    qDebug() << "Dateipfad ist gültig es wurde eine txt Datei ausgewählt!";
    // Debug ***********************************************************/

    // Datei Objekt entsprechend Pfad erstellen
    QFile meineTxtDatei(strPfadUndDateinamen);

    // zur Sicherheit Datei schliessen
    meineTxtDatei.close();

    // prüfen ob Datei wirklich geschlossen ist
    if (!meineTxtDatei.open(QIODevice::ReadOnly | QIODevice::Text)) {
      //* Debug *********************************************************
      qDebug() << "Datei ist bereits geöffnet und schreibgeschutzt!";
      // Debug ***********************************************************/

      // Meldungsfenster erstellen
      QMessageBox::information(0, tr("Fehler lesen"),
                               meineTxtDatei.errorString());

    } else {
      //* Debug *********************************************************
      qDebug() << "Datei kann geöffnet werden";
      // Debug ***********************************************************/

      // erstellen Objekt Typ "Textfluss" um Text zwischenzuspeichern mit
      // Referenze auf die Textdatei
      QTextStream stream(&meineTxtDatei);

      // speichern Dateiinhalt codiert "Latin" (Latin == mit ü, ä, ö, usw...)
      stream.setCodec("Latin");

      // Text aus Zwischenspeicher in Text speichern
      while (!stream.atEnd()) {
        meinTextAusDatei.append(stream.readLine());
        meinTextAusDatei = meinTextAusDatei + "\r";
      }

      // schliessen Datei
      meineTxtDatei.close();

      // Text in den Textedit auf dem UI schreiben
      ui->anzeigenTextEdit->setText(meinTextAusDatei);
    }
  }
}

// Programm zu PushButton "Leeren"
void MainWindow::on_leerenPushButton_clicked() {
  //* Debug *********************************************************
  qDebug() << "PushButton 'Leeren' gedrückt!";
  // Debug ***********************************************************/

  // Text in den Textedit auf dem UI löschen
  ui->anzeigenTextEdit->setText("");
}

// Programm zu PushButton "Speichern"
void MainWindow::on_speichernPushButton_clicked() {
  //* Debug *********************************************************
  qDebug() << "PushButton 'Speichern' gedrückt!";
  // Debug ***********************************************************/

  // löschen Inhalt der Text Variabel
  meinTextFuerDatei = "";

  // prüfen ob der Dateipfad gültig ist
  if (pruefenPfadDatei) {
    //* Debug *********************************************************
    qDebug() << "Dateipfad ist gültig es wurde eine txt Datei ausgewählt!";
    // Debug ***********************************************************/

    // Datei Objekt entsprechend Pfad erstellen
    QFile meineTxtDatei(strPfadUndDateinamen);

    // zur Sicherheit Datei schliessen
    meineTxtDatei.close();

    // prüfen ob Datei wirklich geschlossen ist
    if (!meineTxtDatei.open(QIODevice::WriteOnly | QIODevice::Text)) {
      //* Debug *********************************************************
      qDebug() << "Datei ist bereits geöffnet und schreibgeschutzt!";
      // Debug ***********************************************************/

      // Meldungsfenster erstellen
      QMessageBox::information(0, tr("Fehler speichern"),
                               meineTxtDatei.errorString());

    } else {
      //* Debug *********************************************************
      qDebug() << "Datei kann geöffnet werden";
      // Debug ***********************************************************/

      // erstellen Objekt Typ "Textfluss" um Text zwischenzuspeichern mit
      // Referenze auf die Textdatei
      QTextStream stream(&meineTxtDatei);

      // speichern Dateiinhalt codiert "Latin" (Latin == mit ü, ä, ö, usw...)
      stream.setCodec("Latin");

      // leeren "Textfluss"
      stream.flush();

      // Inhalt TextEdit in Variabel speichern
      meinTextFuerDatei = ui->anzeigenTextEdit->toPlainText();

      // schreiben Text über Textfluss in die Datei
      stream << meinTextFuerDatei;

      // schliessen Datei
      meineTxtDatei.close();

      // Text in den Textedit auf dem UI schreiben
      ui->anzeigenTextEdit->setText(meinTextFuerDatei);
    }
  }
}
