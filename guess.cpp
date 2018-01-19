#define _USE_MATH_DEFINES
#include "main.h"
#include <iostream>
using namespace std;

void guess() {

    srand((unsigned)time(nullptr));             // seed the generator
    int number = rand() % 100;                   // numbers 0-99

    while (true) {

        cout << "Guess a number between 0 and 99 (0 and 99 included): ";
        int userGuess;
        cin >> userGuess;                       // get guess from the user and store it

        // if it's out of the range
        if (userGuess < 0 || userGuess > 99) {

            cout << "Sorry, that number is out of range!";
            exit(0);

        // if they get it right
        } else if (userGuess == number) {

            cout << "Congratulations! You guessed it!";
            exit(0);

        // if they're too low
        } else if (userGuess < number) {
            cout << "Too low. Guess again!\n";

        // if they're too high
        } else if (userGuess > number) {
            cout << "Too high, guess again!\n";
        }

    }

}

