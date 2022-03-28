/*
Author: sangheum Park
Course: CSCI-13500
Instructor: Tong Yi
Assignment: bigger_num.cpp

*/
#include <iostream>

using namespace std;

int bigger_number(int a, int b);

int bigger_number(int a, int b){
  if(a>b) return a;
  else return b;
}

int main(){
  int x,y;
  cout<<"Enter integer x: "<<endl;
  cin >> x;
  cout<<"Enter integer y: "<<endl;
  cin >> y;

  cout << "Bigger number is: "<< bigger_number(x,y)<<endl;
  return 0;
}