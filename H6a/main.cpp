#include <iostream>
#include "myclass.h"


using namespace std;

int main()
{
    MyClass luokka1;
    luokka1.raiseMySignal();
    luokka1.mySlot();
    return 0;
}
