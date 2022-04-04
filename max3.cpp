/*
Author: sangheum Park
Course: CSCI-13500
Instructor: Tong Yi
Assignment: max3.cpp

it will print max integer

*/

#include <iostream>

using namespace std;

int max3(int a, int b, int c);

int max3(int a, int b, int c){
  int max = a;
  if(max<b) max = b;
  if (max <c) max = c;
  return max;
}


int main(){
  cout<<max3(2,4,1)<<endl;
}


