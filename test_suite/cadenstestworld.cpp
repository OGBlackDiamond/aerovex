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

Test::coord Test::getCoords() {

    return (coords);
}

void Test::setCoords(int x, int y) {
    coords.x = x;
    coords.y = y;
}