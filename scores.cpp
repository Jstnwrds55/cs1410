#include "main.h"
#include <iostream>
using namespace std;

int highestScore() {

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
}

