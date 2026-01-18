#ifndef ASIAKAS_H
#define ASIAKAS_H

#include "tilit.h"

class Asiakas {
private:
    string nimi;
    Pankkitili kayttotili;
    Luottotili luottotili;
public:
    Asiakas(string, double);
    string getNimi(void);
    void showSaldo(void);
    bool talletus(double);
    bool nosto(double);
    bool luotonMaksu(double);
    bool luotonNosto(double);
    bool tiliSiirto(double, Asiakas&);
};

#endif // ASIAKAS_H
