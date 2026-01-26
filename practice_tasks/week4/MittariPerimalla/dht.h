#ifndef DHT_H
#define DHT_H
#include "random.h"

class DHT : public Random
{
public:
    void begin();
    float readTemperature();


private:
    float temperature;
    //Random gen;
};

#endif // DHT_H
