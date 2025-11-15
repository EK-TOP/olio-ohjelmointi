#include "rectangle.h"
#include "student.h"
#include "car.h"
#include <memory>
#include <iostream>
using namespace std;

int main()
{


    unique_ptr<Student> opiskelija1 = make_unique<Student>("Mikko mallikas", 10, 2.5);
    opiskelija1->printStudent();

    unique_ptr<Student> opiskelija2 = make_unique<Student>("Riki Sorsa", 9, 3.1);
    opiskelija2->printStudent();

    unique_ptr<Student> opiskelija3 = make_unique<Student>("Rikisorsan Veli", 8, 4.9);
    opiskelija3->printStudent();


    Rectangle *objectRectangle1=new Rectangle(10,15);
    objectRectangle1->printTangle();
    delete objectRectangle1;
    objectRectangle1=nullptr;


    Rectangle *objectRectangle2=new Rectangle(12,18);
    objectRectangle2->printTangle();
    delete objectRectangle2;
    objectRectangle2=nullptr;


    Rectangle *objectRectangle3=new Rectangle(42,79);
    objectRectangle3->printTangle();
    delete objectRectangle3;
    objectRectangle3=nullptr;


    unique_ptr<Car> ajoneuvo1 = make_unique<Car>("Nissan", "Micra", 1980);
    ajoneuvo1->printData();

    unique_ptr<Car> ajoneuvo2 = make_unique<Car>("Nissan", "Juke", 2013);
    ajoneuvo2->printData();

    unique_ptr<Car> ajoneuvo3 = make_unique<Car>("Toyota", "Avensis", 1980);
    ajoneuvo3->printData();

    unique_ptr<Car> ajoneuvo4 = make_unique<Car>("Toyota", "Corolla", 1996);
    ajoneuvo4->printData();

    unique_ptr<Car> ajoneuvo5 = make_unique<Car>("Seat", "Arona", 2024);
    ajoneuvo5->printData();

    return 0;
}
