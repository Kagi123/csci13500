/*
Author: sangheum Park
Course: CSCI-13500
Instructor: Tong Yi
Assignment: upper.cpp
prints the 
top-right 
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
  for(int i=0; i<length; i++){
    for(int a=0; a<i; a++){
      cout<<" ";
    }
    for(int j=length; j>i; j--){
      cout<<"*";
    }
    cout<<""<<endl;
  }
}

