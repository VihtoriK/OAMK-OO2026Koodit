#include <iostream>
#include "asiakas.h"

#include <cmath>

using namespace std;

Asiakas::Asiakas(string nimi, double luottoraja) : kayttotili(nimi), luottotili(nimi, luottoraja) {
    this->nimi = nimi;
    cout << "Asiakkuus luotu " << this->nimi << endl;
}

string Asiakas::getNimi(void) {
    return this->nimi;
}

void Asiakas::showSaldo(void) {
    cout << "Kayttotilin saldo " << this->kayttotili.getBalance() << endl;
    cout << "Luottotilin saldo " << this->luottotili.getBalance() << endl;
}

bool Asiakas::talletus(double summa) {
    if(this->kayttotili.deposit(summa)) {
        return true;
    }
    return false;
}

bool Asiakas::nosto(double summa) {
    if(this->kayttotili.withdraw(summa)) {
        return true;
    }
    return false;
}

bool Asiakas::luotonMaksu(double summa) {
    if(this->luottotili.deposit(summa)) {
        return true;
    }
    return false;
}

bool Asiakas::luotonNosto(double summa) {
    if(this->luottotili.withdraw(summa)) {
        return true;
    }
    return false;
}

bool Asiakas::tiliSiirto(double summa, Asiakas& saaja) {
    if(summa >= 0 && this->kayttotili.getBalance() < summa) {
        return false;
    }

    cout << "Pankkitili: " << this->nimi << " siirtaa " << summa << " " << saaja.nimi << ":lle" << endl;
    cout << this->nimi << " ";
    if(!this->nosto(summa)) {
        return false;
    }

    cout << saaja.nimi << " ";
    if(!saaja.talletus(summa)) {
        // jos saajan talletus epäonnistuu palautetaan summa asiakkaan tilille!
        if(!this->talletus(summa)) {
            // ja jos tämä epäonnistuu ... oli asiakkaalla huono päivä!
            return false;
        }
        return false;

    }
    return true;
}
