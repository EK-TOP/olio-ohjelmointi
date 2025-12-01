#include <iostream>
#include "classa1.h"
#include "classb.h"
#include "classa2.h"
using namespace std;

int main()
{
    int b =6;
    int a = 5;
    int &ref = a;
    cout << "tulostetaan a arvo = " << a << endl;
    cout << "tulostetaan a osoite = " << &ref << endl;

    int *pointerA = &a;
    cout<< "pointerA osoite  = " << pointerA << endl;
    cout<< "pointerA arvo  = " << *pointerA<< endl;

    int& refA = a;
    cout << "refA osoite = " << &refA<< endl;
    cout << "refA arvo = " << refA << endl;

    //refA määrittäminen uudelleen, kun se on jo määritelty kertaalleen koodissa aikaisemmin ei ole mahdollista.
    //int &refA = b;
    pointerA = &b; //pointerin osoitteen voi vaihtaa muuttamalla pointerin määritystä. Vaikka pointeri olisi määritetty aikaisemmin.

    /*
    classb objB;
    objB.setinfo("Olion B asettama info");

    ClassA1 objA1(objB);
    objA1.setBinfo("Olion objA1 asettama info");

    cout << "objB:  " << objB.getinfo() << endl;
    cout << "objA1: " << objA1.getBinfo() << endl;
    */


    classb objB;
    objB.setinfo("Olion B asettama info");

    classb &refB = objB;          // viittaus objB:hen
    ClassA2 objA2(refB);          // ClassA2 saa viittauksen classb-olioon

    objA2.setBinfo("Olion A2 asettama info");

    cout << "objB:  " << objB.getinfo()   << endl;
    cout << "objA2: " << objA2.getBinfo() << endl;
    cout << endl;


    return 0;
}
