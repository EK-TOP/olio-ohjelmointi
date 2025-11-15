#include "student.h"
#include <iostream>
using namespace std;

Student::Student() {}

Student::Student(string name, int studentNumber, double average) {
    this->name = name;
    this->studentNumber = studentNumber;
    this->average = average;
}

void Student::setName(string name) { this->name = name; }
void Student::setStudentNumber(int number) { this->studentNumber = number; }
void Student::setAverage(double avg) { this->average = avg; }

string Student::getName() const { return name; }
int Student::getStudentNumber() const { return studentNumber; }
double Student::getAverage() const { return average; }

void Student::printStudent() const {
    cout << "Name: " << name
         << " / Student Number: " << studentNumber
         << " / Average: " << average << endl;
    cout << "-----------------------------------------------" << endl;
}
