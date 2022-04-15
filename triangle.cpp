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

struct Triangle{
  Point A;
  Point B;
  Point C;
};


double distance(Point a, Point b)
{
  double result = sqrt(pow(a.x-b.x,2) + pow(a.y-b.y,2));
  return result;
}

double perimeter(Triangle triangle){
  double result;
  result = distance(triangle.A, triangle.B) + distance(triangle.A, triangle.C) + distance(triangle.B, triangle.C);
  return result;
}

int main(){
  Point A;
  Point B;
  Point C;
  Triangle triangle;
  cout << "Enter point a: "<<endl;
  cin >> A.x >> A.y;
  cout << "Enter point b: "<< endl;
  cin >> B.x >> B.y;
  cout << "Enter point c: "<< endl;
  cin >> C.x >> C.y;
  triangle.A = A;
  triangle.B = B;
  triangle.C = C;
  
  cout << perimeter(triangle)<<endl;
 
  return 0;
}


