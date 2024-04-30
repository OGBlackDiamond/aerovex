
#define phyobj_H
class Physicsobject
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


    //creates a new instance of the structs
    Vector3D pos;
    Vector3D velo;
    Vector3D accel;
    Vector3D fore;

    // constructor for the class
    Physicsobject();

       

    
    Physicsobject(double ,double ,double , double , double , double ,double ,double ,double , double , double , double ,double ,double ,double , double , double , double ,double ,double ,double , double , double , double ,double ,double );

      

    
     Physicsobject(double ,double ,double , double , double , double ,double ,double ,double , double , double , double ,double ,double ,double , double , double , double ,double ,double ,double , double , double , double ,double ,double ,double,double ); 

        

    void getpos();
    void getvelo();
    void getaccel();
    double getgravity();
    void updateobj(double time);
    void updatepos(double time);
    void updatevelo(double time);
    void updateaccel(double time);
    void updateforce(double forcex[],double forcey[],double forcez[]);
    void detectcollisions();

    
};