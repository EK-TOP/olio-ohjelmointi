#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
private:
    std::string name;
    int studentNumber;
    double average;

public:
    Student();
    Student(std::string name, int studentNumber, double average);

    void setName(std::string name);
    void setStudentNumber(int number);
    void setAverage(double avg);

    std::string getName() const;
    int getStudentNumber() const;
    double getAverage() const;

    void printStudent() const;
};

#endif
