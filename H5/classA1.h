#ifndef CLASSA1_H
#define CLASSA1_H

#include "classb.h"
#include <string>

class ClassA1
{
private:
    classb objectB;

public:
    ClassA1(classb value);

    std::string getBinfo();                 // HUOM: getBinfo
    void setBinfo(const std::string& value);
};

#endif // CLASSA1_H
