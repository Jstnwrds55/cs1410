#ifndef CS1410TEST_WEIGHT_H
#define CS1410TEST_WEIGHT_H

#endif //CS1410TEST_WEIGHT_H

struct weight {

    int stone;
    int pound;
    int ounce;

};

weight add(weight w1, weight w2);
void print(weight &w);
void read(weight *w);
void convert(weight &w);
