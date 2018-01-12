/*
 * main - main file that links to all of the other cpp files I make throughout the course
 */

#define _USE_MATH_DEFINES
#include <iostream>
#include "main.h"
#include <iomanip>
using namespace std;

int main() {

    while (true) {

        string choice;
        cout << setw(15) << left << "temp" << "temperature program\n";
        cout << setw(15) << left << "timestable" << "times table program\n";
        cout << setw(15) << left << "pyramid" << "pyramid program\n";
        cout << "Enter the program you would like to run or press e to quit: ";
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
