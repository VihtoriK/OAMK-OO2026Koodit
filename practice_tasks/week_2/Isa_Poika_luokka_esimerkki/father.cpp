#include "father.h"
#include <iostream>

Father::Father(string s) {
    this->FatherName = s;
    cout << "Father = " << this->FatherName << " created" << endl;
}

Father::~Father() {
    cout << "Father = " << this->FatherName << " deleted" << endl;
}

void Father::printFatherName(void) {
    cout << "Father name = " << this->FatherName << endl;
    cout << "Father nickname = " << this->FatherNickName << endl;
}

void Father::printEducation(void) {
    cout << "Father education = puuseppa " << endl;
}
