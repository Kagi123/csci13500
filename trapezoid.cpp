/*
Author: sangheum Park
Course: CSCI-13500
Instructor: Tong Yi
Assignment: trapezoid.cpp
prints an upside-down trapezoid of given width and height.

However, if the input height is 
impossibly large for the given width, 
then the program should report, Impossible shape!
*/

#include <string>
#include <iostream>
using namespace std;

int main(){
  int width, height;
  cout<<"Input width: "<< endl;
  cin >> width;
  cout<<"Input height: "<<endl;
  bool program = true;
  cin >> height;
  if(width%2==0 && height*2 >width) program = false;
  if(width%2!=0 && height*2 >width+1) program = false;
  
  if(program == false){
    cout<<"Impossible shape!";
  } 
  while(program){
    for(int i=0; i<height; i++){
    for(int j=0; j<i; j++){
      cout<<" ";
    }
    for(int j=0; j<width-2*i; j++){
      cout<<"*";
    }
    for(int j=0; j<i; j++){
      cout<<" ";
    }
    cout<<""<<endl;
    
  }
    program = false;
  }
  
}

