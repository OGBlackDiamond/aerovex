/*The start of the phycics engine.
g++ phycicsfunctions.cpp -o test && ./test
*/
#include <ctgmath>
#include <iostream>
using namespace std;

// defines struct shells

struct Position
{
  double x;
  double y;
  double z;
};
struct velocity
{
  double x;
  double y;
  double z;
};
struct acceleration
{
  double x;
  double y;
  double z;
};


// let the variables begin
class phycicsfunctions
{
public:

  //creates a new instance of the structs
  Position pos;
  velocity velo;
  acceleration accel;

  // constructor for the class
  phycicsfunctions() {

    // assigns values on construction
    pos.x = 0;
    pos.y = 0;
    pos.z = 0;

    velo.x = 1;
    velo.y = 1;
    velo.z = 1;

    accel.x = 2;
    accel.y = 2;
    accel.z = 2;
  }

};


// instantiates a new phyfunc class
phycicsfunctions engine;

// main methed used for testing will be removed later
int main(){
cout << "this is the position" << "\n";
cout << engine.pos.x << "," << engine.pos.y << "," << engine.pos.z << "\n";
cout << "this is the velocity" << "\n";
cout << engine.velo.x << "," << engine.velo.y << "," << engine.velo.z<< "\n";
cout << "this is the acceleration" << "\n";
cout << engine.accel.x << "," << engine.accel.y << "," << engine.accel.z<< "\n";
return 0;

}
