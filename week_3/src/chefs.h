#ifndef CHEFS_H_
#define CHEFS_H_


#include <iostream>

using namespace std;

class Chef {
    protected:
        string chefName;
    public:
        Chef(string chefName);
        ~Chef();
        string getName();
        int makeSalad(int amount);
        int makeSoup(int amount);
};

class ItalianChef: public Chef {
    private:
        string password = "pizza";
        int flour;
        int water;
        int makepizza(int flour, int water);
    public:
        ItalianChef(string italianChefName);
        ~ItalianChef();
        bool askSecret(string password, int flour, int water);
};

#endif