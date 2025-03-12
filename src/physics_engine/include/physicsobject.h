#define PHYSICSOBJECT_H

class physicsObject
{
public:

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
    bool fix = false;


    //creates a new instance of the structs
    Vector3D pos;
    Vector3D velo;
    Vector3D accel;
    Vector3D fore;

    // constructor for the class
    PhysicsObject();

    PhysicsObject(Vector3D position, Vector3D velocity, Vector3D acceleration, Vector3D force, double mass, double radius);

    PhysicsObject(Vector3D position, Vector3D velocity, Vector3D acceleration, Vector3D force, double mass, double dx, double dy, double dz); 


    int getPosX();
    int getPosY();
    int getPosZ();
    int getVeloX();
    int getVeloY();
    int getVeloZ();
    int getAccelX();
    int getAccelY();
    int getAccelZ();
    double getGravity();
    void updateObj(double time,double forcex[],double forcey[],double forcez[]);
    void updatePos(double time);
    void updateVelo(double time);
    void updateAccel(double time);
    void updateForce(double forcex[],double forcey[],double forcez[]);
    void detectCollisions();


};