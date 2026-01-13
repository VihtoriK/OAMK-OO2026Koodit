#ifndef MITTARI_H
#define MITTARI_H

#include "lcd.h"
#include "dht.h"

class Mittari {
private:
    int varoitusvalo;
    LCD lcdOlio;
    DHT dhtOlio;
public:
    void setup(void);
    void mittaus(void);
};

#endif // MITTARI_H
