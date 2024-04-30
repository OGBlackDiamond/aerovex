/*The start of the phycics engine.
g++ phycicsfunctions.cpp -o test && ./test
*/
#include <ctgmath>
#include <iostream>
using namespace std;
//asfsdfsd
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
double radius;
double dX;
double dY;
double dZ;
bool firsttime;

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
        pos.x0 = 1;
        pos.y0 = 1;
        pos.z0 = 1;

        velo.x = 0;
        velo.y = 0;
        velo.z = 0;
        velo.x0 = 0;
        velo.y0 = 0;
        velo.z0 = 0;

        accel.x = 0;
        accel.y = 0;
        accel.z = 0;
        accel.x0 = 0;
        accel.y0 = 0;
        accel.z0 = 0;

        fore.x = 1;
        fore.y = 1;
        fore.z = 1;
        fore.x0 = 0;
        fore.y0 = 0;
        fore.z0 = 0;
        mass = 1;
        firsttime = true;

    }
    PhysicsFunctions(double X,double Y,double Z, double X0, double Y0, double Z0,double VX,double VY,double VZ, double VX0, double VY0, double VZ0,double AX,double AY,double AZ, double AX0, double AY0, double AZ0,double FX,double FY,double FZ, double FX0, double FY0, double FZ0,double mas,double rad) {

        // assigns values on construction
        pos.x = X;
        pos.y = Y;
        pos.z = Z;
        pos.x0 = X0;
        pos.y0 = Y0;
        pos.z0 = Z0;

        velo.x = VX;
        velo.y = VY;
        velo.z = VZ;
        velo.x0 = VX0;
        velo.y0 = VY0;
        velo.z0 = VZ0;

        accel.x = AX;
        accel.y = AY;
        accel.z = AZ;
        accel.x = AX0;
        accel.y = AY0;
        accel.z = AZ0;

        fore.x = FX;
        fore.y = FY;
        fore.z = FZ;
        fore.x = FX0;
        fore.y = FY0;
        fore.z = FZ0;
        mass = mas;
        radius = rad;
        firsttime = true;

    }
     PhysicsFunctions(double X,double Y,double Z, double X0, double Y0, double Z0,double VX,double VY,double VZ, double VX0, double VY0, double VZ0,double AX,double AY,double AZ, double AX0, double AY0, double AZ0,double FX,double FY,double FZ, double FX0, double FY0, double FZ0,double mas,double dx,double dy,double dz) {

        // assigns values on construction
        pos.x = X;
        pos.y = Y;
        pos.z = Z;
        pos.x0 = X0;
        pos.y0 = Y0;
        pos.z0 = Z0;

        velo.x = VX;
        velo.y = VY;
        velo.z = VZ;
        velo.x0 = VX0;
        velo.y0 = VY0;
        velo.z0 = VZ0;

        accel.x = AX;
        accel.y = AY;
        accel.z = AZ;
        accel.x = AX0;
        accel.y = AY0;
        accel.z = AZ0;

        fore.x = FX;
        fore.y = FY;
        fore.z = FZ;
        fore.x = FX0;
        fore.y = FY0;
        fore.z = FZ0;
        mass = mas;
        dX = dx;
        dY = dy;
        dZ = dz;
        firsttime = true;
    }

    void getpos(){
        cout << "pos" << "(" << pos.x << ","<< pos.y << ","<< pos.z << "," << ")"<< "\n";
    }
    void getvelo(){
        cout << "velo"<< "(" << velo.x << ","<< velo.y << ","<< velo.z << "," << ")"<< "\n";
    }
    void getaccel(){
        cout << "accel" <<"(" << accel.x << ","<< accel.y << ","<< accel.z << "," << ")"<< "\n";
    }
    double getgravity(){
        return mass*9.8;
    }
    void updateobj(double time){
        updateaccel(time);
        //getaccel();
        updatevelo(time);
        getvelo();
        updatepos(time);
        getpos();
    }
    void updatepos(double time){
       
        pos.x = pos.x0 + velo.x0*time + .5*accel.x*pow(time,2);
        pos.y = pos.y0 + velo.y0*time + .5*accel.y*pow(time,2);
        pos.z = pos.z0 + velo.z0*time + .5*accel.z*pow(time,2);
        
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
    void updateforce(double forcex[],double forcey[],double forcez[]){
        for (int i = 0; i < sizeof(forcex); i++)
        {
        fore.x += forcex[i];
        }
        for (int i = 0; i < sizeof(forcey); i++)
        {
        fore.y += forcey[i];
        }
        for (int i = 0; i < sizeof(forcez); i++)
        {
        fore.z += forcez[i];
        }

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
    cout << "time = " << time<< "\n";
    engine.updateobj(time);
    }
    //engine.updateobj(time);
    //engine.getpos();
  
    /*cout << "this is the position" << "\n";
    cout << engine.pos.x << "," << engine.pos.y << "," << engine.pos.z << "\n";
    cout << "this is the velocity" << "\n";
    cout << engine.velo.x << "," << engine.velo.y << "," << engine.velo.z<< "\n";
    cout << "this is the acceleration" << "\n";
    cout << engine.accel.x << "," << engine.accel.y << "," << engine.accel.z<< "\n";
    */
    return 0;

}
