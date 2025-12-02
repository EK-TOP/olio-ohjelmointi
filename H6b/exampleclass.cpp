#include "exampleclass.h"
#include <QDebug>
#include <QTimer>


ExampleClass::ExampleClass(QObject *parent) : QObject(parent){
qDebug()<<"Start";

connect (this,&ExampleClass::readyToSay,
        this,&ExampleClass::sayHelloSlot);

qDebug()<<"End";
qDebug("hellurei");

//testailua QT maincpp:ssä oli ohjeita
//QTimer::singleShot(2000, this, &ExampleClass::readyToSay);
}

void ExampleClass::startToWait()
{
    QThread::msleep(100);
    emit readyToSay();
}

void ExampleClass::sayHelloSlot()
{
    qDebug()<<"Terve";
}
