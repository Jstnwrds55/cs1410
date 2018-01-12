/*
 * main - main file that links to all of the other cpp files I make throughout the course
 */

#define _USE_MATH_DEFINES
#include <iostream>
#include "main.h"
using namespace std;

int main() {

    while (true) {
        cout << "Which program would you like to run?\n";

        string choice;
        cout << "temp\t temperature program\n";
        cout << "timestable\t times table program\n";
        cin >> choice;

        if (choice == "temp") {
            temp();
        } else if (choice == "timestable") {
            timestable();
        } else if (choice == "pyramid") {
            pyramid();
        } else if (choice == "E" || choice == "e") {
            break;
        }
    }

}
