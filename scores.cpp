#include "main.h"
#include <iostream>
using namespace std;

int highestScore() {

    cout << "Do you want to find the highest value (h) or average (a)? ";
    char choice;
    cin >> choice;

    if (choice == 'h' || choice == 'H') {

        int highestNumber = 0;
        int currentNumber = 0;

        while (currentNumber != -1) {

            cout << "Enter a score (-1 to end): ";
            cin >> currentNumber;

            if (currentNumber > highestNumber) {
                highestNumber = currentNumber;
            }

        }

        cout << "The highest score is " << highestNumber << "." << endl;

    } else if (choice == 'a' || choice == 'A') {

        int average = 0;
        int currentNumber = 0;
        int numbers = 0;

        while (currentNumber != -1) {

            cout << "Enter a score (-1 to end): ";
            cin >> currentNumber;
            if (currentNumber == -1) {
                break;
            }
            average += currentNumber;
            numbers ++;

        }

        average /= numbers;
        cout << "The average of those scores is " << average << ".";
    }

}

