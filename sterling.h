//
// Created by Justin on 2/16/18.
//

#ifndef CS1410TEST_STERLING_H
#define CS1410TEST_STERLING_H

#endif //CS1410TEST_STERLING_H

#pragma once

// define sterling structure
struct sterling {

    int pounds;
    int shillings;
    int pence;

};

// create function prototypes
sterling make_sterling(int pounds, int shillings, int pence);
sterling make_sterling(int pence);
sterling add(sterling sterl1, sterling sterl2);
void print(sterling &sterl);
void read(sterling *sterl);
