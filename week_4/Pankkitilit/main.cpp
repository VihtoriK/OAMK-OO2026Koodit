#include <iostream>
#include "asiakas.h"

using namespace std;

int main()
{
    Asiakas asiakas_1("Aapeli", 1000);
    asiakas_1.showSaldo();
    cout << endl;
    asiakas_1.talletus(250);
    asiakas_1.luotonNosto(150);
    asiakas_1.showSaldo();
    cout << endl;

    Asiakas asiakas_2("Bertta", 1000);
    asiakas_2.showSaldo();
    cout << endl;

    cout << "Aapeli" << endl;
    asiakas_1.showSaldo();
    asiakas_1.tiliSiirto(50, asiakas_2);
    cout << "Bertta" << endl;
    asiakas_2.showSaldo();

    cout << "Aapeli" << endl;
    asiakas_1.showSaldo();


    return 0;
}
