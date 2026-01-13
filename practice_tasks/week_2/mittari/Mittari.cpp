#include <iostream>
#include "mittari.h"

using namespace std;

void Mittari::setup(void) {
    cout << "Mittari setup!" << endl;
    this->dhtOlio.begin();
    this->lcdOlio.begin();
    this->varoitusvalo = 0;
}

void Mittari::mittaus(void) {
    float lampotila = this->dhtOlio.readTemperature();
    this->lcdOlio.print(this->lcdOlio.floatToString(lampotila));
    if(20 < lampotila) {
        this->varoitusvalo = 1;
        cout << "varoitusvalo!" << endl;
    } else {
        this->varoitusvalo = 0;
    }
}
