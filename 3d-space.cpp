/*
Author: sangheum Park
Course: CSCI-13500
Instructor: Tong Yi
Assignment: 3d-space.cpp
add functions that create, 
delete, and coordinate 
objects dynamically:
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

Coord3D* createCoord3D(double x, double y, double z){
        Coord3D *myCoord = new Coord3D;
        Coord3D coord = {x, y, z};
        *myCoord = coord;
    return myCoord;
}

void deleteCoord3D(Coord3D *p){
    delete p;
}

int main() {
    double x, y, z;
    cout << "Enter position: ";
    cin >> x >> y >> z;
    Coord3D *ppos = createCoord3D(x,y,z);
    
    cout << "Enter velocity: ";
    cin >> x >> y >> z;
    Coord3D *pvel = createCoord3D(x,y,z);

    move(ppos, pvel, 10.0);

    cout << "Coordinates after 10 seconds: " 
         << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << endl;

    deleteCoord3D(ppos); // release memory
    deleteCoord3D(pvel);
}


