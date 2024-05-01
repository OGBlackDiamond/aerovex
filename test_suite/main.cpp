#include <iostream>
#include "include/cadenstestworld.h"
using namespace std;


Test test(1, 2);

struct coord{
    int x;
    int y;
};


int main(){
    test.setCoords(10, 20);
    cout << test.getCoords().x << "\n";
    cout << test.gety() << "\n";
    cout << test.add() << "\n";
    return 0;
}