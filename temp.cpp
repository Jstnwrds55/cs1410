#include "main.h"
#include <iostream>
using namespace std;

void temp() {
        while (true) {

            cin.clear();
            cout << "F\tfor Fahrenheit to Celsius\n";
            cout << "C\tfor Celsius to Fahrenheit\n";
            cout << "E\tto Exit\n";

            cout << "Select: ";
            char choice;
            cin >> choice;

            if (choice == 'F' || choice == 'f') {

                double temp;
                cout << "Enter the temperature in Fahrenheit: ";
                cin >> temp;
                cout << "The temperature in Celsius is " << 5.0 / 9 * (temp - 32) << "\n" << endl;

            } else if (choice == 'C' || choice == 'f') {

                double temp;
                cout << "Enter the temperature in Celsius: ";
                cin >> temp;
                cout << "The temperature in Fehrenheit is: " << 9.0 / 5 * temp + 32 << "\n" << endl;

            }  else if (choice == 'E' || choice == 'e') {

                break;

            } else {

                cout << "Unrecognized choice: \"" << choice << "\"\n";
                continue;

            }

        }
};

