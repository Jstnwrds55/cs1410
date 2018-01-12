/*
 * pyramid - create a pyramid using x's that is scalable to user input
 */

#include "main.h"
#include <iostream>
using namespace std;

void pyramid() {

    int height;
    cout << "Enter how high you want the pyramid to be: ";
    cin >> height;

    for (int level = 0; level < height; level++) {
        for (int spaces = 1; spaces <= height - level - 1 / 2; spaces++) {
            cout << " ";
        }
        for (int xes = 0; xes < 2 * level + 1; xes++) {
            cout << "X";
        }
        cout << "\n";
    }
}
