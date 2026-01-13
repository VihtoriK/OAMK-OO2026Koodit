#include <iostream>
#include <ctime>

#include "dht.h"

using namespace std;

void DHT::begin(void) {
    cout << "DHT begin!" << endl;
    this->gen.setSeed(time(0));
}

float DHT::readTemperature(void) {
    long long temp = this->gen.rand(30);
    this->temperature = temp;
    return (float)temp;
}
