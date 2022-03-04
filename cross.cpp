/*
Author: sangheum Park
Course: CSCI-13500
Instructor: Tong Yi
Assignment: cross.cpp

asks the user to input
 the shape size,
and prints a 
diagonal cross 
of that dimension.
*/

#include <string>
#include <iostream>
using namespace std;

int main(){
  int size;
  cout<<"Input size: "<< endl;
  cin >> size;
  if(size%2 == 0){
     for(int i=0; i<size/2; i++){
    for(int j=0; j<i; j++){
      cout<<" ";
    }
    cout<<"*";
    for(int j=0; j<size-2*(i+1); j++){
      cout<<" ";
    }
    cout<<"*"<<endl;
  }
  for(int i=0; i<size/2; i++){
    for(int j=0; j<(size-2*(i+1))/2; j++){
      cout<<" ";
    }
    cout<<"*";
    for(int j=0; j<i; j++){
      cout<<"  ";
    }
    cout<<"*"<<endl;
  }
  } else {
    for(int i=0; i<size/2; i++){
      for(int j=0; j<i; j++){
        cout<<" ";
      }
      cout<<"*";
      for(int j=0; j<size-2*(i+1);j++){
        cout<<" ";
      }
      cout<<"*"<<endl;
    }
    for(int i=0; i<(size+1)/2; i++){
      for(int j=0; j<size/2-i; j++){
      cout<<" ";
    } 
    cout<<"*";
    for(int j=0; j<2*i-1; j++){
        cout<<" ";
      }
    if(i!=0){
      cout<<"*"<<endl;
    } else cout<<""<<endl;
    }
  } 
}
