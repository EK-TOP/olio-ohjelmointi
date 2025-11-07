#include "car.h"
#include <vector>
#include <iostream>
using namespace std;

int main()
{

    vector <Car> carList;
    carList.emplace_back("Toyota", "Avensis", 1996);
    carList.emplace_back("Toyota", "Corolla", 2004);
    carList.emplace_back("Honda", "Civic", 2006);
    carList.emplace_back("Toyota", "Prius", 1982);
    carList.emplace_back("Honda", "Monkey", 2024);

    cout << "Toisen auton tiedot:" << endl;
    carList[1].printData();

    for (const auto& car : carList) {
        car.printData();
    }

    return 0;
}
