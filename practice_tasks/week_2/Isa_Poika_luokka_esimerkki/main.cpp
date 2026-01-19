//#include <iostream>

#include "son.h"

using namespace std;

int main()
{
    Son poika("Pekka", "Junnu");
    poika.printEducation();
    poika.printFatherName();
    poika.Father::printEducation();
    return 0;
}
