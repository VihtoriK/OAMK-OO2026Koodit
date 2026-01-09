
// Olio-ohjelmointi – Viikkotehtävä 1

#include <iostream>
#include <cstdlib>
#include <ctime>

int game(int maxnum) {

    int random_seed = 0;
    int random_num = 0;

    int guessed_num = 0;

    int round_count = 0;

    time_t now;
    struct tm * date;

    time(&now);
    date = localtime(&now);

    random_seed = date->tm_sec;

    std::srand(random_seed);

    random_num = std::rand() % (maxnum + 1); // 0-20

    do {

        round_count++;

        std::cout << "Anna arvauksesi (0-19 valilta): ";
        std::cin >> guessed_num;

        if(guessed_num > random_num) {
            std::cout << "liian suuri" << std::endl;  
        } 
        else if(guessed_num < random_num) {
            std::cout << "liian pieni" << std::endl;
        } 
        else {
            std::cout << "oikein" << std::endl;
            break;
        }

    } while (true);

    return round_count;
}

int main(void) {

    int round_count = 0;

    round_count = game(20);
    
    std::cout << round_count << std::endl;

    return 0;
}
