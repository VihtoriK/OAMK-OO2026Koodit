#ifndef RANDOM_H
#define RANDOM_H

class Random {
private:
    long long a;
    long long c;
    long long Xn;
    long long mod;
public:
    Random();
    void setSeed(long long seed);
    long long getSeed(void);
    long long rand(long long max);
};

#endif // RANDOM_H
