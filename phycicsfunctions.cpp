/*The start of the phycics engine.
g++ phycicsfunctions.cpp -o test && ./test
*/
#include <ctgmath>
#include <iostream>
using namespace std;

// defines struct shells

struct Vector3D
{
  double x;
  double y;
  double z;
  double x0;
  double y0;
  double z0;
};

// let the variables begin
double mass = 0;


class PhysicsFunctions
{
public:

    //creates a new instance of the structs
    Vector3D pos;
    Vector3D velo;
    Vector3D accel;
    Vector3D fore;

    // constructor for the class
    PhysicsFunctions() {

        // assigns values on construction
        pos.x = 0;
        pos.y = 0;
        pos.z = 0;
        pos.x0 = 0;
        pos.y0 = 0;
        pos.z0 = 0;

        velo.x = 0;
        velo.y = 0;
        velo.z = 0;
        velo.x0 = 0;
        velo.y0 = 0;
        velo.z0 = 0;

        accel.x = 1;
        accel.y = 1;
        accel.z = 1;
        accel.x0 = 1;
        accel.y0 = 1;
        accel.z0 = 1;

        fore.x = 1;
        fore.y = 1;
        fore.z = 1;
        fore.x0 = 0;
        fore.y0 = 0;
        fore.z0 = 0;
        mass = 1;

    }

    void getpos(){
        cout << "(" << pos.x << ","<< pos.y << ","<< pos.z << "," << ")";
    }
    void getvelo(){
        cout << "(" << velo.x << ","<< velo.y << ","<< velo.z << "," << ")";
    }
    void getaccel(){
        cout << "(" << accel.x << ","<< accel.y << ","<< accel.z << "," << ")";
    }
    void updateobj(double time){
        updatevelo(time);
        updatepos(time);
        updateaccel(time);
    }
    void updatepos(double time){
        pos.x = pos.x0 + velo.x0*time + .5*accel.x*pow(time,2);
        pos.y = pos.y0 + velo.y0*time + .5*accel.x*pow(time,2);
        pos.z = pos.z0 + velo.z0*time + .5*accel.x*pow(time,2);
    }
    void updatevelo(double time){
        velo.x = velo.x0 + accel.x*time;
        velo.y = velo.y0 + accel.y*time;
        velo.z = velo.z0 + accel.z*time;
    }
    void updateaccel(double time){
        accel.x = fore.x/mass;
        accel.y = fore.y/mass;
        accel.z = fore.z/mass;
    }
};


// instantiates a new phyfunc class
PhysicsFunctions engine;

// main methed used for testing will be removed later
int main(){
    double time;
    int runs;
    cin >> runs;
    for (int i = 0; i < runs; i++)
    {
    time += .1;
    engine.updateobj(time);
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
