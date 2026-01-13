#ifndef DHT_H
#define DHT_H

#include "random.h"

class DHT {
private:
    float temperature;
    Random gen;
public:
    void begin(void);
    float readTemperature(void);
};

#endif // DHT_H
