#include "classA2.h"
#include "classb.h"

ClassA2::ClassA2(classb &value)
    : refB(value)    // viittaus on pakko alustaa listassa
{
}

std::string ClassA2::getBinfo()
{
    return refB.getinfo();  // classb::getinfo()
}

void ClassA2::setBinfo(const std::string &value)
{
    refB.setinfo(value);    // classb::setinfo()
}
