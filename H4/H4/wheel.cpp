#include "wheel.h"


wheel::wheel()
    :size(0), type("")
{}

wheel::wheel(int size, std::string type)
    :size(size),type(type){}


int wheel::getsize() const{
    return size;
}

void wheel::setsize(int Wsize){
    size = Wsize;
}

std::string wheel::gettype() const{
    return type;
}

void wheel::settype(std::string Wtype){
    type = Wtype;
}
