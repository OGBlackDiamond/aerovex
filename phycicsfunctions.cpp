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

    velo.x = 0;
    velo.y = 0;
    velo.z = 0;

    accel.x = 1;
    accel.y = 1;
    accel.z = 1;
  }
void getpos(){
  cout << "(" << pos.x << ","<< pos.y << ","<< pos.z << ",";
}
void updateobj(double time){
updatevelo(time);
updatepos(time);
}
void updatepos(double time){
pos.x = pos.x + velo.x*time;
pos.y = pos.y + velo.y*time;
pos.z = pos.z + velo.z*time;
}
void updatevelo(double time){
velo.x = velo.x + accel.x*time;
velo.y = velo.y + accel.y*time;
velo.z = velo.z + accel.z*time;
}
};


// instantiates a new phyfunc class
phycicsfunctions engine;

// main methed used for testing will be removed later
int main(){
  double time;
  int runs;
  cin >> runs;
  for (int i = 0; i < runs; i++)
  {
    time += .1;
   engine.updateobj(.1);
  }
  engine.getpos();
  
/*cout << "this is the position" << "\n";
cout << engine.pos.x << "," << engine.pos.y << "," << engine.pos.z << "\n";
cout << "this is the velocity" << "\n";
cout << engine.velo.x << "," << engine.velo.y << "," << engine.velo.z<< "\n";
cout << "this is the acceleration" << "\n";
cout << engine.accel.x << "," << engine.accel.y << "," << engine.accel.z<< "\n";
*/
return 0;

}
