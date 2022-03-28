/*
Author: sangheum Park
Course: CSCI-13500
Instructor: Tong Yi
Assignment: sort2_pointer.cpp

*/
#include <iostream>

using namespace std;

void sort2(double *p, double *q){
if (*p > *q){
  double temp;
  temp = *p;
  *p = *q;
  *q = temp;
}
}

int main(){
  
  return 0; 
}