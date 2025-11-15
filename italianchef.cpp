#include "italianchef.h"
#include <iostream>

ItalianChef::ItalianChef(std::string iName)
    :Chef(iName){

    std::cout << "ItalianChef " << name << " konstruktori" << std::endl;
    }

ItalianChef::~ItalianChef(){
    std::cout << "ItalianChef " << name << " destruktori" << std::endl;
}

std::string ItalianChef::getName()const{
    return name;
}



void ItalianChef::makePasta()
{
    std::cout << "Italianchef " << name << "makepasta" << std::endl;
}


