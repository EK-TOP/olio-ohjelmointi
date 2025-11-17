#include "animal.h"
#include <iostream>

Animal::Animal(){
    std::cout<<"animal luodaan"<<std::endl;
}


Animal::~Animal(){
    std::cout<<"animal tuhotaan"<<std::endl;
    }



void Animal::callOut(){
    std::cout << "Elain aantelee" << std::endl;
}
