/*
 * tree - let the user input how tall they want the tree to be then generate the text to display it
 */

#define _USE_MATH_DEFINE
#include <iostream>
#include "main.h"
using namespace std;

void tree() {

    cout << "Enter how tall you'd like the cone of the tree to be (3-15): ";
    int height;
    cin >> height;

    if (height < 3 || height > 15) {
        cout << "That height is out of the accepted range";
        // quit(0);
    }

    // row by row
    for (int row = 1; row <= height; row++) {

        // spaces before the left side of the tree
        for (int spaces = height - row; spaces > 0; spaces--) {
            cout << " ";
        }

        cout << '/';            // left side of the tree

        // spaces between the sides of the tree
        for (int spaceBetween = 2; spaceBetween < row * 2; spaceBetween++) {
            cout << " ";
        }

        cout << '\\' << endl;           // right side of the tree and new line;

    }

    // bottom of the cone
    for (int width = 0; width < height * 2; width++) {
        cout << "-";
    }

    cout << endl;

    // tree trunk rows
    for (int trunkRow = 0; trunkRow < height/2; trunkRow++) {

        // spaces before tree trunk
        for (int spaces = 0; spaces < height - 1; spaces++) {
            cout << " " ;
        }

        cout << "||" << endl;           // tree trunk

    }

}
