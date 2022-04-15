/*
Author: sangheum Park
Course: CSCI-13500
Instructor: Tong Yi
Assignment: hw7.16

*/


#include <iostream>
#include <math.h>

using namespace std;

struct Point
{
  double x;
  double y;
};


double distance(Point a, Point b)
{
  double result = sqrt(pow(a.x-b.x,2) + pow(a.y-b.y,2));
  return result;
}

int main(){
  Point A;
  Point B;

  cout << "Enter point a: "<<endl;
  cin >> A.x >> A.y;
  cout << "Enter point b: "<< endl;
  cin >> B.x >> B.y;

  cout << distance(A,B)<<endl;
 
  return 0;
}


