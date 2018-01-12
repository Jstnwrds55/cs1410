#include "main.h"
#include <iostream>
#include <iomanip>
using namespace std;

void timestable() {
    for (int i = 1; i < 13; i++) {

        for (int x = 1; x < 13; x++) {
            cout << setw(5) << i * x;
        }
        cout << endl;

    }
}