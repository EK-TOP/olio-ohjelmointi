#include "car.h"
#include <iostream>
using namespace std;

Car::Car() : brand(""), model(""), yearModel(0) {}

Car::Car(string brand, string model, int yearModel) {
    this->brand = brand;
    this->model = model;
    this->yearModel = yearModel;
}

void Car::printData() const {



    cout << "Brand: " << brand
         << ", Model: " << model
         << ", Year: " << yearModel<< endl;
    cout << "--------------------------"<< endl;

}
