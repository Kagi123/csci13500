/*
Author: sangheum Park
Course: CSCI-13500
Instructor: Tong Yi
Assignment: numbers.cpp
If n is divisible by d, 
the function should 
return true, 
otherwise return false.

*/
#include<iostream>

using namespace std;

bool isDivisibleBy(int n, int d){
  if(d!=0){
  if(n%d == 0 ) return true;
  else return false;
  } else return false;
  
}

int main(){
  int integer1,integer2;
  cout<<"Enter interger1: "<<endl;
  cin >> integer1;
  cout<<"Enter integer2: "<<endl;
  cin >> integer2;

  if(isDivisibleBy(integer1,integer2) == true)
    cout<<"Yes"<<endl;
    else cout << "No"<<endl;
}