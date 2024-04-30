#include "include/cadenstestworld.h"

Test::Test() {}

Test::Test(int x, int y) {
    this->x = x;
    this->y = y;
}

int Test::getx() {
    return x;
}

int Test::gety() {
    return y;
}

int Test::add() {
    return y + x;
}