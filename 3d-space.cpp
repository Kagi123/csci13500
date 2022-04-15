/*
Author: sangheum Park
Course: CSCI-13500
Instructor: Tong Yi
Assignment: 3d-space.cpp
receives the coordinates of two points 
(passed as pointers), and returns 
the pointer of the point that 
is farther away from the origin.

*/

#include <iostream>
#include <math.h>

using namespace std;

class Coord3D {
public:
    double x;
    double y;
    double z;
};

double length(Coord3D *p){
  return sqrt(pow(p->x,2)+ pow(p->y, 2) + pow(p->z, 2));
}

Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2){
  if(length(p1) > length(p2)) return p1;
  else return p2;
}

void move(Coord3D *ppos, Coord3D *pvel, double dt){
  ppos->x = ppos->x + pvel->x * dt;
  ppos->y = ppos->y + pvel->y * dt;
  ppos->z = ppos->z + pvel->z * dt;
}

int main() {
    Coord3D pos = {0, 0, 100.0};
    Coord3D vel = {1, -5, 0.2};

    move(&pos, &vel, 2.0); // object pos gets changed
    cout << pos.x << " " << pos.y << " " << pos.z << endl;
    // prints: 2 -10 100.4
}



