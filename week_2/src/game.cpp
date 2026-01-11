
#include "game.h"

Game::Game(int maxNumber): maxNumber(maxNumber) {

    this->numOfGuesses = 0;
    this->playerGuess = 0;
    this->randomNumber = 0;

    int random_seed = 0;

    time_t now;
    struct tm * date;

    time(&now);
    date = localtime(&now);

    random_seed = date->tm_sec;

    std::srand(random_seed);

    this->randomNumber = std::rand() % (this->maxNumber + 1); // 0-maxNumber

    // debug
    std::cout << "GAME CONSTRUCTOR: object initialized with " << this->maxNumber << " as a maximum value" << std::endl;

}

Game::~Game() {
    // debug
    std::cout << "GAME DESTRUCTOR: object cleared from stack memory" << std::endl;
}

void Game::play() {
    do {

        this->numOfGuesses++;

        std::cout << "Give your guess between 1-" << this->maxNumber << std::endl;
        std::cin >> this->playerGuess;

        if(this->playerGuess > this->randomNumber) {
            std::cout << "Your guess is too big" << std::endl;  
        } 
        else if(this->playerGuess < this->randomNumber) {
            std::cout << "Your guess is too small" << std::endl;
        } 
        else {
            std::cout << "Your guess is right = "<< this->playerGuess << std::endl;
            break;
        }

    } while (true);

    this->printGameResult();
}

void Game::printGameResult() {
    std::cout << "Your guessed the right answer = " << this->randomNumber << " with " << this->numOfGuesses << " guesses" << std::endl;
}