/*
 *  stairs - program to print out the user input amount of stairs with stick figures
 *  standing on them.
 */

#include <iostream>
using namespace std;

void stairs() {

    int stairs;
    cout << "How many stairs would you like there to be? ";
    cin >> stairs;

    // loop for each step
    for (int steps = 0; steps < stairs; steps++) {

        // first line
        for (int beforeSpaces = 5 * (stairs - steps - 1); beforeSpaces > 0; beforeSpaces--) {
            cout << " ";
        }
        cout << "  o  ******";
        for (int afterSpaces = steps * 5; afterSpaces > 0; afterSpaces--) {
            cout << " ";
        }
        cout << "*" << endl;

        // second line
        for (int beforeSpaces = 5 * (stairs - steps - 1); beforeSpaces > 0; beforeSpaces--) {
            cout << " ";
        }
        cout << " /|\\ *";
        for (int afterSpaces = (steps + 1) * 5; afterSpaces > 0; afterSpaces--) {
            cout << " ";
        }
        cout << "*" << endl;

        // third line
        for (int beforeSpaces = 5 * (stairs - steps - 1); beforeSpaces > 0; beforeSpaces--) {
            cout << " ";
        }
        cout << " / \\ *";
        for (int afterSpaces = (steps + 1) * 5; afterSpaces > 0; afterSpaces--) {
            cout << " ";
        }
        cout << "*" << endl;

    }

    // floor layer
    for (int width = 5 * (stairs + 1) + 2; width > 0; width--) {
        cout << "*";
    }

}

