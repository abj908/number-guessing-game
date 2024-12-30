#ifndef GUESSING_GAME_H
#define GUESSING_GAME_H

class GuessingGame {
public:
    // Constructor to initialize the game
    GuessingGame(int low = 1, int high = 100);
    
    // Function to guess the user's number
    int guess();

    // Function to give feedback based on user's answer
    void respond(char feedback);  // 'h' = too high, 'l' = too low, 'c' = correct

    // Function to reset the game
    void reset();

private:
    int low;
    int high;
    int current_guess;
};

#endif // GUESSING_GAME_H
