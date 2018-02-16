/*
*		sterlyboi.cpp - test/driver file for the functions in sterling.cpp
*/

#define _USE_MATH_DEFINES
#include <iostream>
#include "sterling.h"
using namespace std;

void sterlyboi() {

    // print sterling
    cout << "Sterling: ";
    sterling sterl = { 5, 15, 9 };
    print(sterl);

    // make sterling from values
    cout << "Sterling from values: ";
    sterling sterl1 = make_sterling(1, 10, 6);
    print(sterl1);

    // make sterling from pence
    cout << "Sterling from 365 pence: ";
    sterling sterl2 = make_sterling(366);
    print(sterl2);

    // add sterling
    cout << "Sterlings added: ";
    sterling sterl3 = add(sterl1, sterl2);
    print(sterl3);

    // read in sterling and print it
    sterling sterl4;
    read(&sterl4);
    cout << "Sterling from those values: ";
    print(sterl);

    // test adding one more time
    cout << "Sterlings added again: ";
    sterling sterl5 = add(sterl, sterl4);
    print(sterl5);
    cout << endl;

}