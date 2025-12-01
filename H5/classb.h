#ifndef CLASSB_H
#define CLASSB_H

#include <string>

class classb
{
private:
    std::string info;

public:
    classb();

    std::string getinfo();
    void setinfo(const std::string& value);
};

#endif // CLASSB_H
