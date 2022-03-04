/*
Author: sangheum Park
Course: CSCI-13500
Instructor: Tong Yi
Assignment: lower.cpp
prints the 
bottom-left 
half of a square, 
given the side length.
*/

#include <string>
#include <iostream>
using namespace std;

int main(){
  int length;
  cout<<"Input side length: "<< endl;
  cin >> length;
  for(int i=1; i<length+1; i++){
    for(int j=0; j<i; j++){
      cout<<"*";
    }
    cout<<""<<endl;
  }
}

