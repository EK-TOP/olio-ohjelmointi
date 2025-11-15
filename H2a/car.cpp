#include "car.h"
#include <iostream>
using namespace std;

Car::Car() {}

Car::Car(string brand, string model, int yearModel) {
    this->brand = brand;
    this->model = model;
    this->yearModel = yearModel;
}

void Car::setBrand(string b) { brand = b; }
void Car::setModel(string m) { model = m; }
void Car::setYearModel(int y) { yearModel = y; }

string Car::getBrand() const { return brand; }
string Car::getModel() const { return model; }
int Car::getYearModel() const { return yearModel; }

void Car::printData() const {
    cout << brand << " / " << model << " / " << yearModel << endl;
    cout << "-----------------------------------------------" << endl;
}
