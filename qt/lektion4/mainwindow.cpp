#include "mainwindow.h"
#include "ui_mainwindow.h"

// Konstruktor
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);

  // erstellen Hyperlink
  ui->link->setTextInteractionFlags(Qt::TextBrowserInteraction);
  ui->link->setOpenExternalLinks(true);
  ui->link->setText(strHyperlink);
}

// Destruktor
MainWindow::~MainWindow() { delete ui; }

// eigene Methode append
QString MainWindow::methodeAppend(QString myString1, QString myString2) {
  qDebug() << "methodeAppend";

  QString returnString = "";

  returnString = myString1.append(myString2);

  return returnString;
}

// eigene Methode at
QString MainWindow::methodeAt(QString myString1, QString myString2) {
  qDebug() << "methodeAt";

  QString returnString = "";

  returnString = methodeAt(myString1, myString2);

  return returnString;
}

// eigene Methode compare
QString MainWindow::methodeCompare(QString myString1, QString myString2) {
  qDebug() << "methodeCompare";

  int returnInt = -1;
  returnInt = myString1.compare(myString2, Qt::CaseInsensitive);

  QString returnString = "";
  returnString = QString::number(returnInt);

  return returnString;
}

// eigene Methode count
QString MainWindow::methodeCount(QString myString1, QString myString2) {
  qDebug() << "methodeCount";

  QString returnString = "";

  return returnString;
}

// eigene Methode endWith
QString MainWindow::methodeEndWith(QString myString1, QString myString2) {
  qDebug() << "methodeEndWith";

  QString returnString = "";

  return returnString;
}

// eigene Methode indexOf
QString MainWindow::methodeIndexOf(QString myString1, QString myString2) {
  qDebug() << "methodeIndexOf";

  QString returnString = "";

  return returnString;
}

// eigene Methode insert
QString MainWindow::methodeInsert(QString myString1, QString myString2) {
  qDebug() << "methodeInsert";

  QString returnString = "";

  return returnString;
}

// eigene Methode lastIndexOf
QString MainWindow::methodeLastIndexOf(QString myString1, QString myString2) {
  qDebug() << "methodeLastIndexOf";

  QString returnString = "";

  return returnString;
}

// eigene Methode length
QString MainWindow::methodeLength(QString myString1, QString myString2) {
  qDebug() << "methodeLength";

  QString returnString = "";

  return returnString;
}

// eigene Methode prepend
QString MainWindow::methodePrepend(QString myString1, QString myString2) {
  qDebug() << "methodePrepend";

  QString returnString = "";

  return returnString;
}

// eigene Methode remove
QString MainWindow::methodeRemove(QString myString1, QString myString2) {
  qDebug() << "methodeRemove";

  QString returnString = "";

  return returnString;
}

// eigene Methode replace
QString MainWindow::methodeReplace(QString myString1, QString myString2) {
  qDebug() << "methodeReplace";

  QString returnString = "";

  return returnString;
}

// eigene Methode resize
QString MainWindow::methodeResize(QString myString1, QString myString2) {
  qDebug() << "methodeResize";

  QString returnString = "";

  return returnString;
}

// eigene Methode leftRef
QString MainWindow::methodeLeftRef(QString myString1, QString myString2) {
  qDebug() << "methodeLeftRef";

  QString returnString = "";

  return returnString;
}

// eigene Methode rightRef
QString MainWindow::methodeRightRef(QString myString1, QString myString2) {
  qDebug() << "methodeRightRef";

  QString returnString = "";

  return returnString;
}

// eigene Methode split
QString MainWindow::methodeSplit(QString myString1, QString myString2) {
  qDebug() << "methodeSplit";

  QString returnString = "";

  return returnString;
}

// eigene Methode startWith
QString MainWindow::methodeStartWith(QString myString1, QString myString2) {
  qDebug() << "methodeStartWith";

  QString returnString = "";

  return returnString;
}

// eigene Methode truncate
QString MainWindow::methodeTruncate(QString myString1, QString myString2) {
  qDebug() << "methodeTruncate";

  QString returnString = "";

  return returnString;
}

// SLOT's zu SIGNAL von PushButtons
void MainWindow::on_appendPushButton_clicked() {
  qDebug() << "on_appendPushButton_clicked";
}

void MainWindow::on_atPushButton_clicked() {
  qDebug() << "on_atPushButton_clicked";
}

void MainWindow::on_comparePushButton_clicked() {
  qDebug() << "on_comparePushButton_clicked";
}

void MainWindow::on_countPushButton_clicked() {
  qDebug() << "on_countPushButton_clicked";
}

void MainWindow::on_endWithPushButton_clicked() {
  qDebug() << "on_endWithPushButton_clicked";
}

void MainWindow::on_indexOfPushButton_clicked() {
  qDebug() << "on_indexOfPushButton_clicked";
}

void MainWindow::on_insertPushButton_clicked() {
  qDebug() << "on_insertPushButton_clicked";
}

void MainWindow::on_lastIndexOfPushButton_clicked() {
  qDebug() << "on_lastIndexOfPushButton_clicked";
}

void MainWindow::on_length_clicked() { qDebug() << "on_length_clicked"; }

void MainWindow::on_prependPushButton_clicked() {
  qDebug() << "on_prependPushButton_clicked";
}

void MainWindow::on_removePushButton_clicked() {
  qDebug() << "on_removePushButton_clicked";
}

void MainWindow::on_replace_clicked() { qDebug() << "on_replace_clicked"; }

void MainWindow::on_resizePushButton_clicked() {
  qDebug() << "on_resizePushButton_clicked";
}

void MainWindow::on_leftRefPushButton_clicked() {
  qDebug() << "on_leftRefPushButton_clicked";
}

void MainWindow::on_rightRefPushButton_clicked() {
  qDebug() << "on_rightRefPushButton_clicked";
}

void MainWindow::on_splitPushButton_clicked() {
  qDebug() << "on_splitPushButton_clicked";
}

void MainWindow::on_startWithPushButton_clicked() {
  qDebug() << "on_startWithPushButton_clicked";
}

void MainWindow::on_truncatePushButton_clicked() {
  qDebug() << "on_truncatePushButton_clicked";
}
