#ifndef SON_H
#define SON_H

#include <string>

using namespace std;

#include "father.h"

class Son : public Father {
private:
    string SonName;
public:
    Son(string isa, string poika);
    ~Son();
    void printEducation(void) override;
};

#endif // SON_H
