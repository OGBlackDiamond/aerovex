/*The start of the phycics engine.
g++ phycicsfunctions.cpp -o test && ./test
*/
#include <ctgmath>
#include <iostream>
using namespace std;
// let the variables begin
class phycicsfunctions
{
public:
struct 
{
  double x = 0;
  double y = 0;
  double z = 0;
} Position;
struct 
{
  double x = 1;
  double y = 1;
  double z = 1;
} velocity;
struct 
{
  double x = 2;
  double y = 2;
  double z = 2;
} acceleration;

};


// main methed used for testing will be removed later
int main(){
cout << "this is the position" << "\n";
cout << Position.x << "," << Position.y << "," << Position.z << "\n";
cout << "this is the velocity" << "\n";
cout << velocity.x << "," << velocity.y << "," << velocity.z<< "\n";
cout << "this is the acceleration" << "\n";
cout << acceleration.x << "," << acceleration.y << "," << acceleration.z<< "\n";
return 0;

}
