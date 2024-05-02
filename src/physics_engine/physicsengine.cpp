#include <ctgmath>
#include <iostream>
#include "include/PhysicsObject.h"
using namespace std;
// instantiates a new phyfunc class
// g++ phycicsengine.cpp -o test && ./test

PhysicsObject engine;

// main methed used for testing will be removed later
int main(){
    double time;
    int runs;
    cin >> runs;
    for (int i = 0; i < runs; i++){
    time += 0.1;
    cout << "time = " << time<< "\n";
    engine.updateobj(time);
    }
    //engine.updateobj(time);
    //engine.getPos();
  
    /*cout << "this is the position" << "\n";
    cout << engine.pos.x << "," << engine.pos.y << "," << engine.pos.z << "\n";
    cout << "this is the velocity" << "\n";
    cout << engine.velo.x << "," << engine.velo.y << "," << engine.velo.z<< "\n";
    cout << "this is the acceleration" << "\n";
    cout << engine.accel.x << "," << engine.accel.y << "," << engine.accel.z<< "\n";
    */
    return 0;

}