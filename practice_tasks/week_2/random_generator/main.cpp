#include <iostream>
#include "random.h"
#include <ctime>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    Random rand;
    rand.setSeed(time(0));
    for(int i = 0; 10 > i; i++) {
        cout << "random num " << i << ": " << rand.rand(20) << endl;
    }
    return 0;
}
