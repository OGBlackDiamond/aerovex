#include <iostream>
#include "include/cadenstestworld.h"
using namespace std;


Test test(1, 2);


int main(){
    cout << test.getx() << "\n";
    cout << test.gety() << "\n";
    cout << test.add() << "\n";
    return 0;
}