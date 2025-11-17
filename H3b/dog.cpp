#include "dog.h"
#include <iostream>

Dog::Dog() {
    std::cout<<"dog luodaan"<<std::endl;
}

Dog::~Dog(){
    std::cout<<"dog tuhotaan"<<std::endl;
}


void Dog::callOut(){
    std::cout << "Koira haukkuu." << std::endl;
}
