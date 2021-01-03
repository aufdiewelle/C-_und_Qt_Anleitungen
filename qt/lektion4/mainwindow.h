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
  // Konstruktor
  explicit MainWindow(QWidget *parent = 0);
  // Destruktor
  ~MainWindow();

 private slots:
  void on_appendPushButton_clicked();

  void on_atPushButton_clicked();

  void on_comparePushButton_clicked();

  void on_countPushButton_clicked();

  void on_endWithPushButton_clicked();

  void on_indexOfPushButton_clicked();

  void on_insertPushButton_clicked();

  void on_lastIndexOfPushButton_clicked();

  void on_length_clicked();

  void on_prependPushButton_clicked();

  void on_removePushButton_clicked();

  void on_replace_clicked();

  void on_resizePushButton_clicked();

  void on_leftRefPushButton_clicked();

  void on_rightRefPushButton_clicked();

  void on_splitPushButton_clicked();

  void on_startWithPushButton_clicked();

  void on_truncatePushButton_clicked();

 private:
  // Objekt UserInterface
  Ui::MainWindow *ui;

  // QString als HTML Link formatiert linke Seite der Link, rechts wie er
  // angezeigt wird
  QString strHyperlink =
      "<a "
      "href=\"http://doc.qt.io/qt-5/qstring.html\">doc.qt.io/qt-5/"
      "qstring.html</a>";

  // eigene Methode append
  QString methodeAppend(QString myString1, QString myString2);
  // eigene Methode at
  QString methodeAt(QString myString1, QString myString2);
  // eigene Methode compare
  QString methodeCompare(QString myString1, QString myString2);
  // eigene Methode count
  QString methodeCount(QString myString1, QString myString2);
  // eigene Methode endWith
  QString methodeEndWith(QString myString1, QString myString2);
  // eigene Methode indexOf
  QString methodeIndexOf(QString myString1, QString myString2);
  // eigene Methode insert
  QString methodeInsert(QString myString1, QString myString2);
  // eigene Methode lastIndexOf
  QString methodeLastIndexOf(QString myString1, QString myString2);
  // eigene Methode length
  QString methodeLength(QString myString1, QString myString2);
  // eigene Methode prepend
  QString methodePrepend(QString myString1, QString myString2);
  // eigene Methode remove
  QString methodeRemove(QString myString1, QString myString2);
  // eigene Methode replace
  QString methodeReplace(QString myString1, QString myString2);
  // eigene Methode resize
  QString methodeResize(QString myString1, QString myString2);
  // eigene Methode leftRef
  QString methodeLeftRef(QString myString1, QString myString2);
  // eigene Methode rightRef
  QString methodeRightRef(QString myString1, QString myString2);
  // eigene Methode split
  QString methodeSplit(QString myString1, QString myString2);
  // eigene Methode startWith
  QString methodeStartWith(QString myString1, QString myString2);
  // eigene Methode truncate
  QString methodeTruncate(QString myString1, QString myString2);
};

#endif  // MAINWINDOW_H
