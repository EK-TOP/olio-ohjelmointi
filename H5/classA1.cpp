#include "classA1.h"

ClassA1::ClassA1(classb value)
    : objectB(value)
{
}

std::string ClassA1::getBinfo()        // HUOM: getBinfo, EI getinfo
{
    return objectB.getinfo();          // kutsuu classb::getinfo()
}

void ClassA1::setBinfo(const std::string& value)
{
    objectB.setinfo(value);
}
