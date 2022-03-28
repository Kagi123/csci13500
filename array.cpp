/*
Author: sangheum Park
Course: CSCI-13500
Instructor: Tong Yi
Assignment: array.cpp

*/
#include <iostream>

using namespace std;

int main(){
  int arr[10];
  for(int i=1; i<11; i++){
    arr[i-1] = i;
    cout<<arr[i-1]<<endl;
  }
  return 0;
}