#include <iostream>

#include "lcd.h"

using namespace std;

void LCD::begin() {
    cout << "LCD begin!" << endl;
    this->text = "LCD init!";
}

void LCD::print(string s) {
    cout << "LCD print: " << s << endl;
}

string LCD::floatToString(float f) {
    return to_string(f);
}
