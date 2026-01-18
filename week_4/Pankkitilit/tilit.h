#ifndef TILIT_H
#define TILIT_H

#include <string>

using namespace std;

class Pankkitili {
protected:
    string omistaja;
    double saldo = 0;
public:
    Pankkitili(string omistaja);
    double getBalance(void);
    virtual bool deposit(double);
    virtual bool withdraw(double);
};

class Luottotili : public Pankkitili {
protected:
    double luottoRaja = 0;
public:
    Luottotili(string omistaja, double luottoraja);
    bool deposit(double deposit) override;
    bool withdraw(double withdraw) override;
};

#endif // TILIT_H
