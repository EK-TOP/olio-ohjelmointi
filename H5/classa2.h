#ifndef CLASSA2_H
#define CLASSA2_H

#include "classb.h"
#include <string>

class ClassA2
{
private:
    classb &refB;   // viittaus olemassa olevaan classb-olioon

public:
    ClassA2(classb &value);                  // konstruktorin julistus
    std::string getBinfo();                  // palauttaa refB:n info-kentän
    void setBinfo(const std::string &value); // asettaa refB:n info-kentän
};

#endif // CLASSA2_H
