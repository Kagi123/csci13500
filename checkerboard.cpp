/*
Author: sangheum Park
Course: CSCI-13500
Instructor: Tong Yi
Assignment: checkerboard.cpp
asks the user to input width and height 
and prints a rectangular checkerboard of the requested size using asterisks and spaces 

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
      if(a%2 == 0){
        if(b%2 == 0){
       cout<<"*"; 
      } else cout <<" ";
      } else {
        if(b%2 == 0){
       cout<<" "; 
      } else cout <<"*";
      }
    }
    cout<<""<<endl;
  }
  
}