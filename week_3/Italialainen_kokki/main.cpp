
// Olio-ohjelmointi – Viikkotehtävä 3

#include "chefs.h"

int main(void) {

    Chef chef("Gordon");

    int chef_amountOfSaladItems = 11;
    cout << "Chef " << chef.getName() << " with " << chef_amountOfSaladItems << " items can make salad " << chef.makeSalad(chef_amountOfSaladItems) << " portions" << endl;

    int chef_amountOfSoupItems = 14;
    cout << "Chef " << chef.getName() << " with " << chef_amountOfSoupItems << " items can make soup " << chef.makeSoup(chef_amountOfSoupItems) << " portions" << endl;

    cout << endl;

    ItalianChef italianChef("Mario");

    int italianChef_amountOfSaladItems = 9;
    cout << "Chef " << italianChef.getName() << " with " << italianChef_amountOfSaladItems << " items can make salad " << italianChef.makeSalad(italianChef_amountOfSaladItems) << " portions" << endl;

    italianChef.askSecret("pizza", 12, 12);

    return 0;
}
