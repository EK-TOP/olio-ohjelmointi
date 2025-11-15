#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include <string>
#include "chef.h"

class ItalianChef : public Chef
{
public:
    ItalianChef(std::string iName);
    ~ItalianChef();
    std::string getName() const;
    void makePasta();
};

#endif // ITALIANCHEF_H
