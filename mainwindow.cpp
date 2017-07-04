#include "mainwindow.h"
#include <QApplication>
#include <QtCore/QCoreApplication>
#include <QtCore/QDebug>

#include <iostream>
#include <QSerialPort>
#include <QtSerialPort/QSerialPort>

QSerialPort serial;

int Serial()
{
serial.setPortName("ArduinoControl");
serial.open(QIODevice::ReadWrite);
serial.setBaudRate(QSerialPort::Baud19200);
serial.setDataBits(QSerialPort::Data8);
serial.setParity(QSerialPort::NoParity);
serial.setStopBits(QSerialPort::OneStop);
serial.setFlowControl(QSerialPort::NoFlowControl);
}

mainwindow::MainWindow(QWidget *parent):QMainWindow(parent)

{
    ui.setupUi(this);

}


void mainwindow::on_btn_fwd_clicked()
{
    if (serial.isOpen() && serial.isWritable())
    {
        QByteArray ba("f");
        serial.write(ba);
        serial.flush();
        serial.close();

    }
}

void mainwindow::on_btn_bck_clicked()
{
    if (serial.isOpen() && serial.isWritable())
    {
        QByteArray ba("r");
        serial.write(ba);
        serial.flush();
        serial.close();

    }
}

void mainwindow::on_btn_spd_2_clicked()
{
    if (serial.isOpen() && serial.isWritable())
    {
        QByteArray ba("2");
        serial.write(ba);
        serial.flush();
        serial.close();

    }
}

void mainwindow::on_btn_spd_3_clicked()
{
    if (serial.isOpen() && serial.isWritable())
    {
        QByteArray ba("3");
        serial.write(ba);
        serial.flush();
        serial.close();

    }
}

void mainwindow::on_btn_spd_4_clicked()
{
    if (serial.isOpen() && serial.isWritable())
    {
        QByteArray ba("4");
        serial.write(ba);
        serial.flush();
        serial.close();

    }
}

void mainwindow::on_btn_pause_clicked()
{
    if (serial.isOpen() && serial.isWritable())
    {
        QByteArray ba("R");
        serial.write(ba);
        serial.flush();
        serial.close();

    }
}

void mainwindow::on_btn_strt_clicked()
{
    if (serial.isOpen() && serial.isWritable())
    {
        QByteArray ba("R");
        serial.write(ba);
        serial.flush();
        serial.close();

    }
}
