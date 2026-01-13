#include "random.h"

Random::Random() {
    this->a = 1664525;
    this->c = 1013904223;
    this->Xn = 0; // Seed
    this->mod = 4294967296;
};

void Random::setSeed(long long s) {
    this->Xn = s;
};

long long Random::getSeed(void) {
    return this->Xn;
};

long long Random::rand(long long max) {
    long long tulos = (this->a * this->Xn + this->c) % this->mod;
    this->Xn = tulos;
    return (tulos % max) + 1;
};

