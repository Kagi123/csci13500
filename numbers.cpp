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
bool isPrime(int n){
  int divide_num=0;
  for(int i=1; i<n; i++){
    if(n%i == 0){
      divide_num += 1;
    }
  }
  if(divide_num == 1) return true;
  else return false;
}

int main(){
  int integer1,integer2;
  cout<<"Enter interger1: "<<endl;
  cin >> integer1;
  cout<< isPrime(integer1);
}