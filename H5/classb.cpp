#include "classb.h"

classb::classb()
{
    // halutessasi esim:
    // info = "";
}

std::string classb::getinfo()
{
    return info;
}

void classb::setinfo(const std::string& value)
{
    info = value;
}
