#include <iostream>
#include "tilit.h"
#include <cmath>

using namespace std;

Pankkitili::Pankkitili(string omistaja) {
    this->omistaja = omistaja;
    cout << "Pankkitili luotu " << this->omistaja << ":lle" << endl;
}

double Pankkitili::getBalance(void) {
    return this->saldo;
}

bool Pankkitili::deposit(double summa) {
    if(summa >= 0) {
        this->saldo += summa;
    } else {
        cout << "Pankkitili: talletus " << summa << " epaonnistui" << endl;
        return false;
    }
    cout << "Pankkitili: talletus " << summa << " tehty" << endl;
    return true;
}

bool Pankkitili::withdraw(double summa) {
    if(summa >= 0 && (this->saldo - summa) >= 0) {
        this->saldo -= summa;
    } else {
        cout << "Pankkitili: nosto " << summa << " epaonnistui" << endl;
        return false;
    }
    cout << "Pankkitili: nosto " << summa << " tehty" << endl;
    return true;
}


Luottotili::Luottotili(string omistaja, double luottoraja) : Pankkitili(omistaja) {
    this->luottoRaja = luottoraja;
    this->saldo = luottoraja;
    cout << "Luottotili luotu " << this->omistaja << ":lle, luottoraja " << this->luottoRaja << endl;
}

bool Luottotili::deposit(double summa) {
    if(summa >= 0 && 0 >= (this->saldo + summa)) {
        this->saldo += summa;
    } else {
        cout << "Luottotili: lyhennys " << summa << " epaonnistui, luottoa jaljella " << this->getBalance() << endl;
        return false;
    }
    cout << "Luottotili: lyhennys " << summa << " tehty, luottoa jaljella " << this->getBalance() << endl;
    return true;
}

bool Luottotili::withdraw(double summa) {
    if(summa >= 0 && (this->saldo - summa) >= (0 - this->luottoRaja)) {
        this->saldo -= summa;
    } else {
        cout << "Luottotili: nosto " << summa << " epaonnistui, luottoa jaljella " << this->getBalance() << endl;
        return false;
    }
    cout << "Luottotili: nosto " << summa << " tehty, luottoa jaljella " << this->getBalance() << endl;
    return true;
}
