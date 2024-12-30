#include "guessing_game.h"
#include <iostream>

GuessingGame::GuessingGame(int low, int high) : low(low), high(high), current_guess((low + high) / 2) {}

int GuessingGame::guess() {
    return current_guess;
}

void GuessingGame::respond(char feedback) {
    if (feedback == 'h') {
        high = current_guess - 1;
    } else if (feedback == 'l') {
        low = current_guess + 1;
    } else if (feedback == 'c') {
        std::cout << "I guessed your number! It's " << current_guess << "!" << std::endl;
        reset();
        return;
    }
    current_guess = (low + high) / 2;
}

void GuessingGame::reset() {
    low = 1;
    high = 100;
    current_guess = (low + high) / 2;
}
