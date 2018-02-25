#include <iostream>
#include "weight.h"
using namespace std;

// add together 2 weight structures
weight add(weight w1, weight w2) {

    weight w3;
    w3.stone = w1.stone + w2.stone;
    w3.pound = w1.pound + w2.pound;
    w3.ounce = w1.ounce + w2.ounce;
    return w3;

}

// print out each value in structure
void print(weight &w) {;

    cout << "Stones: " << w.stone << endl;
    cout << "Pounds: " << w.pound << endl;
    cout << "Ounces: " << w.ounce << '\n' << endl;

}

// read in values from the user and put them into a structure
void read(weight *w) {

    cout << "Enter the amount of Stones: ";
    cin >> w->stone;
    cout << "Enter the amount of Pounds: ";
    cin >> w->pound;
    cout << "Enter the amount of Ounces: ";
    cin >> w->ounce;
    cout << endl;
}

// convert the structure to fit proper formatting
void convert(weight & w) {

    w.pound += w.ounce / 16;		// add ounces that can be converted to pounds
    w.ounce %= 16;					// set ounce to the remainder that can't be converted to pounds
    w.stone += w.pound / 14;		// add pounds that can be converted to pounds
    w.pound %= 14;					// set pound to the remainder that can't be converted to stone
}

