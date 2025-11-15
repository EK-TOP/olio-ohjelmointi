#include <string>
#ifndef CHEF_H
#define CHEF_H

class Chef{
protected:
    std::string name;

public:
     Chef(std::string);
    ~Chef();
    void makeSalad();
    void makeSoup();

};
#endif // CHEF_H
