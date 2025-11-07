#ifndef CAR_H
#define CAR_H
#include <string>

class Car {
private:
    std::string brand;
    std::string model;
    int yearModel;

public:
    Car();
    Car(std::string brand, std::string model, int yearModel);


    void printData() const;


    void setBrand(std::string b);
    void setModel(std::string m);
    void setYearModel(int y);


    std::string getBrand() const;
    std::string getModel() const;
    int getYearModel() const;
};

#endif
