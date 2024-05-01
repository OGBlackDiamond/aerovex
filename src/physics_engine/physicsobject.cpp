/*The start of the phycics engine.
g++ phycicsfunctions.cpp -o test && ./test
*/
#include <ctgmath>
#include <iostream>
#include "include/physicsobject.h"
using namespace std;



    // constructor for the class
    Physicsobject::Physicsobject() {

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

    }
    Physicsobject::Physicsobject(double X,double Y,double Z, double X0, double Y0, double Z0,double VX,double VY,double VZ, double VX0, double VY0, double VZ0,double AX,double AY,double AZ, double AX0, double AY0, double AZ0,double FX,double FY,double FZ, double FX0, double FY0, double FZ0,double mas,double rad) {

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
        

    }
     Physicsobject::Physicsobject(double X,double Y,double Z, double X0, double Y0, double Z0,double VX,double VY,double VZ, double VX0, double VY0, double VZ0,double AX,double AY,double AZ, double AX0, double AY0, double AZ0,double FX,double FY,double FZ, double FX0, double FY0, double FZ0,double mas,double dx,double dy,double dz) {

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
        
        
    }

    int Physicsobject::getposx(){
        return pos.x;
    }
    int Physicsobject::getposy(){
        return pos.y;
    }
    int Physicsobject::getposz(){
        return pos.z;
    }
    int Physicsobject::getvelox(){
        return velo.x;
    }
    int Physicsobject::getveloy(){
        return velo.y;
    }
    int Physicsobject::getveloz(){
        return velo.z;
    }
    int Physicsobject::getaccelx(){
        return accel.x;
    }
    int Physicsobject::getaccely(){
        return accel.y;
    }
    int Physicsobject::getaccelz(){
        return accel.z;
    }
    double Physicsobject::getgravity(){
        return mass*9.8;
    }
    void Physicsobject::updateobj(double time){
        updateaccel(time);
        
        updatevelo(time);
        
        updatepos(time);
        
    }
    void Physicsobject::updatepos(double time){
       
        pos.x = pos.x0 + velo.x0*time + .5*accel.x*pow(time,2);
        pos.y = pos.y0 + velo.y0*time + .5*accel.y*pow(time,2);
        pos.z = pos.z0 + velo.z0*time + .5*accel.z*pow(time,2);
        
    }
    void Physicsobject::updatevelo(double time){
        velo.x = velo.x0 + accel.x*time;
        velo.y = velo.y0 + accel.y*time;
        velo.z = velo.z0 + accel.z*time;
    }
    void Physicsobject::updateaccel(double time){
        accel.x = fore.x/mass;
        accel.y = fore.y/mass;
        accel.z = fore.z/mass;
    }
    void Physicsobject::updateforce(double forcex[],double forcey[],double forcez[]){
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
    void Physicsobject::detectcollisions(){
if (true){

}
    };




