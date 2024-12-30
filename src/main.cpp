#include <iostream>
#include "guessing_game.h"

int main() {
    GuessingGame game;
    char feedback;

    std::cout << "Think of a number between 1 and 100, and I will try to guess it!" << std::endl;

    do {
        int guess = game.guess();
        std::cout << "Is the number " << guess << "? (h/l/c): ";
        std::cin >> feedback;
        game.respond(feedback);
    } while (feedback != 'c');

    return 0;
}
