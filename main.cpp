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

    serial.setPortName("ArduinoControl");
    serial.open(QIODevice::ReadWrite);
    serial.setBaudRate(QSerialPort::Baud19200);
    serial.setDataBits(QSerialPort::Data8);
    serial.setParity(QSerialPort::NoParity);
    serial.setStopBits(QSerialPort::OneStop);
    serial.setFlowControl(QSerialPort::NoFlowControl);

    return a.exec();
}

