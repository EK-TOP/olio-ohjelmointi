#include <iostream>
#include "Engine.h"
#include "kaara.h"
#include "wheel.h"


using namespace std;

int main()
{
    kaara auto1;
    auto1.setbrand("Toyota");
    auto1.setmodel("Corolla");
    auto1.setengine();
    auto1.setwheel();
    auto1.printdetails();

    return 0;
}
