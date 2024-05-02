#include <iostream>
#include "include/cadenstestworld.h"
using namespace std;


Test test(1, 2);

struct {
    int x = 1;
    int y = 1;
} deez;

int main(){
    test.setCoords(deez)
    cout << test.getCoords() << "\n";
    cout << test.gety() << "\n";
    cout << test.add() << "\n";
    return 0;
}