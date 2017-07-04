#include "mainwindow.h"
#include <QApplication>
#include <QCoreApplication>
#include <iostream>
#include <QSerialPort>

#include <QtSerialPort/QSerialPort>
#include <QtCore/QCoreApplication>
#include <QtCore/QDebug>
using namespace std;
QSerialPort serial;


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mainwindow w;
    w.show();

    return a.exec();
}

