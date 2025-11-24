#ifndef WHEEL_H
#define WHEEL_H
#include <string>

class wheel{
private:
    int size;
    std::string type;

public:
    wheel();
    wheel(int size, std::string type);

    int getsize ()const;
    void setsize (int Wsize);

    std::string gettype() const;
    void settype(std::string Wtype);
};

#endif // WHEEL_H
