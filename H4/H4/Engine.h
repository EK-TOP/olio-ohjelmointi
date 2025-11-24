#ifndef ENGINE_H
#define ENGINE_H

class engine {
private:
    int horsepower;
    double displacement;

public:
    engine();
    engine(int horsepower, double displacement);

    int getHorsepower() const;
    void setHorsepower(int hp);

    double getDisplacement() const;
    void setDisplacement(double disp);
};

#endif // ENGINE_H
