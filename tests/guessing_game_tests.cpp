#include "guessing_game.h"
#include <gtest/gtest.h>

TEST(GuessingGameTests, InitialGuess) {
    GuessingGame game;
    EXPECT_EQ(game.guess(), 50);  // The initial guess should be 50
}

TEST(GuessingGameTests, RespondToLowGuess) {
    GuessingGame game;
    game.respond('l');  // Feedback is too low
    EXPECT_EQ(game.guess(), 75);  // The next guess should be 75
}

TEST(GuessingGameTests, RespondToHighGuess) {
    GuessingGame game;
    game.respond('h');  // Feedback is too high
    EXPECT_EQ(game.guess(), 25);  // The next guess should be 25
}

TEST(GuessingGameTests, GuessCorrectly) {
    GuessingGame game;
    game.respond('h');
    game.respond('l');
    game.respond('c');  // Correct guess
    EXPECT_EQ(game.guess(), 50);  // After reset, the guess should be 50 again
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
