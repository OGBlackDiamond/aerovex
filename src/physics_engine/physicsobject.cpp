/*The start of the phycics engine.
g++ phycicsfunctions.cpp -o test && ./test
*/
#include <ctgmath>
#include <iostream>
#include "include/physicsObject.h"
using namespace std;

    // constructor for the class
    PhysicsObject::PhysicsObject() {

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
    PhysicsObject::PhysicsObject(Vector3D position, Vector3D velocity, Vector3D acceleration, Vector3D force, double mass, double radius) {

        // assigns values on construction
        pos = position;

        velo = velocity;

        accel = acceleration;

        fore = force;

        this->mass = mass;
        this->radius = radius;
    }

     PhysicsObject::PhysicsObject(Vector3D position, Vector3D velocity, Vector3D acceleration, Vector3D force, double mass, double dx, double dy, double dz) {

        // assigns values on construction
        pos = position;

        velo = velocity;

        accel = acceleration;

        fore = force;

        this->mass = mass;

        dX = dx;
        dY = dy;
        dZ = dz;
    }

    int PhysicsObject::getPosX(){
        return pos.x;
    }
    int PhysicsObject::getPosY(){
        return pos.y;
    }
    int PhysicsObject::getPosZ(){
        return pos.z;
    }
    int PhysicsObject::getVeloX(){
        return velo.x;
    }
    int PhysicsObject::getVeloY(){
        return velo.y;
    }
    int PhysicsObject::getVeloZ(){
        return velo.z;
    }
    int PhysicsObject::getAccelX(){
        return accel.x;
    }
    int PhysicsObject::getAccelY(){
        return accel.y;
    }
    int PhysicsObject::getAccelZ(){
        return accel.z;
    }
    double PhysicsObject::getGravity(){
        return mass*9.8;
    }
    void PhysicsObject::updateObj(double time,double forcex[],double forcey[],double forcez[]){
        updateForce(forcex,forcey,forcez);

        updateAccel(time);

        updateVelo(time);

        updatePos(time);
    }
    void PhysicsObject::updatePos(double time){
       
        pos.x = pos.x0 + velo.x0*time + .5*accel.x*pow(time,2);
        pos.y = pos.y0 + velo.y0*time + .5*accel.y*pow(time,2);
        pos.z = pos.z0 + velo.z0*time + .5*accel.z*pow(time,2);
        
    }
    void PhysicsObject::updateVelo(double time){
        velo.x = velo.x0 + accel.x*time;
        velo.y = velo.y0 + accel.y*time;
        velo.z = velo.z0 + accel.z*time;
    }
    void PhysicsObject::updateAccel(double time){
        accel.x = fore.x/mass;
        accel.y = fore.y/mass;
        accel.z = fore.z/mass;
    }
    void PhysicsObject::updateForce(double forcex[],double forcey[],double forcez[]){
        for (int i = 0; i < sizeof(forcex); i++)
        {
        fore.x += forcex[i];
        }
        fore.y -= mass*9.8;
        for (int i = 0; i < sizeof(forcey); i++)
        {
        
        fore.y += forcey[i];
        }
        for (int i = 0; i < sizeof(forcez); i++)
        {
        fore.z += forcez[i];
        }

    }
    void PhysicsObject::detectCollisions(){
        if (true){

        }
    };




