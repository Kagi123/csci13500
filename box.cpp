/*
Author: sangheum Park
Course: CSCI-13500
Instructor: Tong Yi
Assignment: lab4a.cpp
asks the user to input width and height 
and prints a solid rectangular box of the requested size using asterisks.
*/

#include <string>
#include <iostream>
using namespace std;

int main(){
  int i,j;
  cout<<"Input width: "<< endl;
  cin >> i;
  cout<<"Input height: "<< endl;
  cin >> j;
  for (int a = 0; a<j; a++){
    for (int b = 0; b<i; b++){
      cout<<"*";
    }
    cout<<""<<endl;
  }
  
}