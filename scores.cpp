#include "main.h"
#include <iostream>
using namespace std;

void highestScore() {

    cout << "Do you want to find the highest value (h) or average (a)? ";
    char choice;
    cin >> choice;

    if (choice == 'h' || choice == 'H') {

        int highestNumber = 0;
        int currentNumber;

        cout << "Enter a a score (-1 to end): ";
        cin >> currentNumber;

        while (currentNumber != -1) {

            if (currentNumber > highestNumber) {
                highestNumber = currentNumber;
            }

            cout << "Enter a score (-1 to end): ";
            cin >> currentNumber;

        }

        cout << "The highest score is " << highestNumber << "." << endl;

    } else if (choice == 'a' || choice == 'A') {

        int average = 0;
        int currentNumber;
        int count = 0;

        cout << "Enter a score (-1 to end): ";
        cin >> currentNumber;

        while (currentNumber != -1) {

            average += currentNumber;
            count ++;

            cout << "Enter a score (-1 to end): ";
            cin >> currentNumber;

        }

        average /= count;
        cout << "The average of those scores is " << average << ".";
    }

}

