#include "main.h"
#include <iostream>
using namespace std;

void forloops() {

    for (int x = 0; x < 5; x++) {
        cout << "*****" << endl;
    }

    for (int x = 1; x < 8; x ++) {
        for (int y = 0; y < x; y++) {
            cout << x;
        }
        cout << endl;
    }

    for (int x = 1; x < 8; x ++) {
        for (int y = 7; y > x; y--) {
            cout << " ";
        }
        for (int z = 1; z <= x; z++) {
            cout << x;
        }
        cout << endl;
    }

    char choice;
    cout << "Would you like to make some stairs? (y / n): ";
    cin >> choice;

    if (choice == 'y' || choice == 'Y') {

        int stairAmt;
        cout << "How many stairs would you like it to have? [1-7] ";
        cin >> stairAmt;
        if (stairAmt < 1 || stairAmt > 7) {
            cout << "The chosen number is out of bounds";
            exit(1);
        }

        for (int currentStair = stairAmt - 1; currentStair >= 0; currentStair --) {

            // head
            for (int spaces = currentStair; spaces > 0; spaces --) {
                cout << "     ";

            }
            cout << " o  ******";
            for (int spaces = 0; spaces < stairAmt - currentStair - 1; spaces ++) {
                cout << "     ";
            }
            cout << "*" << endl;

            // body
            for (int spaces = currentStair; spaces > 0; spaces --) {
                cout << "     ";
            }
            cout << "/|\\ *";
            for (int spaces = 0; spaces < stairAmt - currentStair; spaces ++) {
                cout << "     ";
            }
            cout << "*" << endl;

            //legs
            for (int spaces = currentStair; spaces > 0; spaces --) {
                cout << "     ";

            }
            cout << "/ \\ *";
            for (int spaces = 0; spaces < stairAmt - currentStair; spaces ++) {
                cout << "     ";
            }
            cout << "*" << endl;

        }
        for (int x = 0; x < stairAmt + 1; x ++) {
            cout << "*****";
        }
        cout << "*" << endl;


    } else {
        cout << "Fine!" << endl;
    }

}

