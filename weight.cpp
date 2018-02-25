/*
 *			weight.cpp - functions for dealing with structures containing stones,
 *			pounds, and ounces.
 */


#define _USE_MATH_DEFINES
#include <iostream>
#include "weight.h"
using namespace std;

void weightFunc() {

	// create and print first structure
	weight w3 = { 3, 5, 16 };
	print(w3);

	// create second structure, read in values, print it out
	weight w4;
	read(&w4);
	print(w4);

	// add and print added structure
	weight w5 = add(w3, w4);
	print(w5);

	// convert structure
	convert(w5);
	print(w5);

}