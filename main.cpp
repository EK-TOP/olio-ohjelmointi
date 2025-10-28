#include <iostream>
#include <stdexcept>
using namespace std;


void calcSum(int a, int b);
void calcDiv(int a, int b);
int retSum(int a, int b);
float retDiv(int a, int b);

int main()
{
    int a, b;
    cout << "Anna ensimmainen numero: ";
    cin >> a;
    cout << "Anna toinen numero: ";
    cin >> b;


    calcSum(a, b);
    calcDiv(a, b);


    int palauttava = retSum(a, b);
    cout << "retSum palautti: " << palauttava << endl;

    try {
        float retPalautus = retDiv(a, b);
        cout << "retDiv palautti: " << retPalautus << endl;
    } catch (runtime_error &e) {
        cout << "Virhe: " << e.what() << endl;
    }

    return 0;
}



void calcSum(int a, int b) {
    cout << "Summa: " << (a + b) << endl;
}

//AI on auttanut tässä sosiossa "static_cast<float>" on myös jotain mitä en olisi itse keksinyt.
void calcDiv(int a, int b) {
    if (b == 0) {
        cout << "Nollalla ei voi jakaa!" << endl;
        return;
    }
    cout << "Osamaara: " << static_cast<float>(a) / b << endl;
}

int retSum(int a, int b) {
    return a + b;
}

float retDiv(int a, int b) {
    if (b == 0) throw runtime_error("Jakaja ei saa olla nolla.");
    return static_cast<float>(a) / b;
}
