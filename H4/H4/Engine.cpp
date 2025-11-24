#include "engine.h"

engine::engine()
    : horsepower(0), displacement(0.0)
{
}

engine::engine(int horsepower, double displacement)
    : horsepower(horsepower), displacement(displacement){}

int engine::getHorsepower() const {
    return horsepower;
}

void engine::setHorsepower(int hp) {
    horsepower = hp;
}

double engine::getDisplacement() const {
    return displacement;
}

void engine::setDisplacement(double disp) {
    displacement = disp;
}
