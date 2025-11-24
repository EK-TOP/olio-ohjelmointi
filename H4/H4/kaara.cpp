#include "kaara.h"
#include <string>
#include <iostream>

kaara ::kaara()
    :brand(""),model(""){}

void kaara::setengine(){
    moottori.setHorsepower(150);
    moottori.setDisplacement(2.0);
}

void kaara::setwheel(){
    objWheel1.setsize(17);
    objWheel1.settype("kesarengas");
    objWheel2.setsize(17);
    objWheel2.settype("kesarengas");
    objWheel3.setsize(17);
    objWheel3.settype("kesarengas");
    objWheel4.setsize(17);
    objWheel4.settype("kesarengas");
}

std::string kaara::getmodel() const{
    return model;
}

void kaara::setmodel(std::string malli){
    model = malli;
}

std::string kaara::getbrand() const{
    return brand;
}


void kaara::setbrand(std::string merkki){
    brand = merkki;
}

void kaara::printdetails(){
    std::cout << "Auto: "<< model<<"  "
              << brand <<std::endl;

    std::cout << "Moottori: " << moottori.getHorsepower() << " hp "
              << moottori.getDisplacement() << " L " << std::endl;

    //tämä oli kokeilu jonka toteutin AI:n avustuksella, alkuperäinen teokseni oli kamalan pitkä.
    wheel wheels[] = {objWheel1, objWheel2, objWheel3, objWheel4};
    std::cout << "Renkaat:" << std::endl;

    for (int i = 0; i < 4; i++) {
        std::cout << "  Rengas " << (i + 1) << ": "
                  << wheels[i].getsize() << " tuumaa, "
                  << wheels[i].gettype()
                  << std::endl;
      }
}
