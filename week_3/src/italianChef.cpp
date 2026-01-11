
#include "chefs.h"

ItalianChef::ItalianChef(string italianChefName): Chef(italianChefName) {
    // debug
    cout << "ItalianChef " << this->chefName << " konstructor" << endl;
}

ItalianChef::~ItalianChef() {
    // debug
    cout << "ItalianChef " << this->chefName << " destructor" << endl;
}

bool ItalianChef::askSecret(string password, int flour, int water) {
    if(password.compare(this->password) == 0) {
        cout << "Password ok!" << endl;
        cout << "ItalianChef " << this->chefName << " with " << flour << " flour and " << water << " water can make " << this->makepizza(flour, water) << " pizzas" << endl;
        return true;
    }
    return false;
}

int ItalianChef::makepizza(int flour, int water) {
    return min((flour / 5), (water / 5));
}