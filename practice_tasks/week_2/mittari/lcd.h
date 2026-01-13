#ifndef LCD_H
#define LCD_H

#include <string>
using namespace std;

class LCD {
private:
    string text;
public:
    void begin(void);
    void print(string);
    string floatToString(float);
};

#endif // LCD_H
