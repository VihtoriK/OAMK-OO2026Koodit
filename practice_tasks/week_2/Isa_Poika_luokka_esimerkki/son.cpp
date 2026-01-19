#include "son.h"
#include <iostream>

Son::Son(string isa, string poika) : Father(isa), SonName(poika) {
    cout << "Son = " << this->SonName << " created" << endl;
    this->FatherNickName = "Isukki";
}

Son::~Son() {
    cout << "Son = " << this->SonName << " deleted" << endl;
}

void Son::printEducation(void) {
    cout << "Son education = koodari " << endl;
}
