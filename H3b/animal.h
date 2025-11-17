#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>

class Animal{
private:
    std::string name;

public:
    Animal();
   virtual ~Animal();
   virtual void callOut();
};

#endif // ANIMAL_H
