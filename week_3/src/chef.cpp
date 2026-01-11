
#include "chefs.h"

Chef::Chef(string chefName): chefName(chefName) {
    // debug
    cout << "Chef " << this->chefName << " konstructor" << endl;
}

Chef::~Chef() {
    // debug
    cout << "Chef " << this->chefName << " destructor" << endl;
}

string Chef::getName() {
    return this->chefName;
}

int Chef::makeSalad(int amount) {
    return amount / 5;
}

int Chef::makeSoup(int amount) {
    return amount / 3;
}