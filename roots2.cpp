/*
* roots2 -- calculates the roots of a quadratic equation, ax^2 + bx + c = 0, given the
* values of a, b, and c and prints them out. Also handles imaginary roots.
*/

#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include "main.h"
using namespace std;

int roots2() {

    double a;				// value of a in equation
    double b;				// value of b in equation
    double c;				// value of c in equation
    double x1;				// value of root x1
    double x2;				// value of root x2

    cin >> a;

    if (a == 0) {
        cout << "The value for 'a' cannot be zero";
        exit(0);
    }

    cin >> b;

    cin >> c;

    double discrim = b * b - 4 * a * c;

    if (discrim >= 0) {

        x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);                // calculate first root
        x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);                // calculate second root

        cout << x1 << endl;
        cout << x2 << endl;

    }
    else {

        double real = -2 / (b * a);							// calculate real part of roots
        double imag = sqrt(-discrim) / (2 * a);				// calculate imaginary part of roots

        cout << real << '+' << imag << 'i' << endl;
        cout << real << '-' << imag << 'i' << endl;

    }

}

