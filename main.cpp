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
        cout << endl;
        cout << setw(15) << left << "temp" << "temperature program\n";
        cout << setw(15) << left << "timestable" << "times table program\n";
        cout << setw(15) << left << "pyramid" << "pyramid program\n";
        cout << setw(15) << left << "scores" << "highest scores program\n";
        cout << setw(15) << left << "forloops" << "for loop practice\n";
        cout << setw(15) << left << "roots2" << "roots 2 program\n";
        cout << setw(15) << left << "guess" << "guessing game program\n";
        cout << setw(15) << left << "stairs" << "stair maker program\n";
        cout << "\nEnter the program you would like to run or press e to quit: ";
        cin >> choice;

        if (choice == "E" || choice == "e") {
            break;
        } else if (choice == "timestable") {
            timestable();
        } else if (choice == "pyramid") {
            pyramid();
        } else if (choice == "temp") {
            temp();
        } else if (choice == "scores") {
            highestScore();
        } else if (choice == "forloops") {
            forloops();
        } else if (choice == "roots2") {
            roots2();
        } else if (choice == "guess") {
            guess();
        } else if (choice == "tree") {
            tree();
        } else if (choice == "stairs") {
            stairs();
        }
    }

}
