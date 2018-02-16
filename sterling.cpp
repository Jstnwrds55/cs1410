/*
 *		sterling.cpp - holds functions for dealing with the conversion of pounds, shillings, and pence
 */

#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include "sterling.h"
using namespace std;

// create a sterling structure based on inputs
sterling make_sterling(int pounds, int shillings, int pence) {

    sterling sterl;
    sterl.pounds = pounds;
    sterl.shillings = shillings;
    sterl.pence = pence;
    return sterl;

}

// create a sterling structure based on only pence value
sterling make_sterling(int pence) {

    sterling sterl;
    sterl.pounds = pence / 240;
    pence %= 240;
    sterl.shillings = pence / 12;
    pence %= 12;
    sterl.pence = pence;
    return sterl;

}

// add together 2 sterling structures
sterling add(sterling sterl1, sterling sterl2) {

    sterling finalValue;
    finalValue.pence = sterl1.pence + sterl2.pence;
    finalValue.pounds = sterl1.pounds + sterl2.pounds;
    finalValue.shillings = sterl1.shillings + sterl2.shillings;

    // convert extra pence to shillings
    finalValue.shillings += finalValue.pence / 12;
    finalValue.pence %= 12;

    // convert extra shillings to pounds
    finalValue.pounds += finalValue.shillings / 20;
    finalValue.shillings %= 20;

    return finalValue;

}

// print out the sterling in the correct format
void print(sterling &sterl) {

    // use iomanipulators to format
    cout << '$' << sterl.pounds << "." << std::setw(2) << std::setfill('0')  << sterl.shillings << '.' << std::setw(2) << std::setfill('0') << sterl.pence << endl;

}

// read in input from the user and put it into the correct form
void read(sterling *sterl) {

    cout << "Enter the amount of pounds: ";
    cin >> sterl->pounds;
    cout << "Enter the amount of shillings: ";
    cin >> sterl->shillings;
    cout << "Enter the amount of pence ";
    cin >> sterl->pence;

}
