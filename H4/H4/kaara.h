#ifndef KAARA_H
#define KAARA_H
#include "Engine.h"
#include "wheel.h"
#include <string>

class kaara{
private:
    std::string model,brand;
    engine moottori;
    wheel objWheel1;
    wheel objWheel2;
    wheel objWheel3;
    wheel objWheel4;


public:
    kaara();
    kaara(std::string brand, std::string model);

   void setengine();
   void setwheel();

   std::string getmodel()const;
   void setmodel(std::string malli);

   std::string getbrand()const;
   void setbrand(std::string merkki);

   void printdetails();
};

#endif // KAARA_H
