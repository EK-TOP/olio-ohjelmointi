#include <iostream>
#include "chef.h"
#include "italianchef.h"
using namespace std;

int main()
{
Chef kokki1 ("Gordon Ramsey");
ItalianChef Ikokki1 ("Anthony Bourdain");

    kokki1.makeSalad();
    kokki1.makeSoup();
    Ikokki1.makeSalad();
    Ikokki1.makePasta();
    Ikokki1.makeSoup();
    cout << "name of the italian chef is" << Ikokki1.getName() << endl;

return 0;
}
