#ifndef GAME_H_
#define GAME_H_

#include <iostream>
#include <cstdlib>
#include <ctime>

class Game {

    private:
    int maxNumber;
    int playerGuess;
    int randomNumber;
    int numOfGuesses;
    void printGameResult();

    public:
        Game(int);
        ~Game();
        void play();
};

#endif