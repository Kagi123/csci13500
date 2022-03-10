/*
Author: sangheum Park
Course: CSCI-13500
Instructor: Tong Yi
Assignment: equals.cpp

checks whether two arrays 
have the same elements 
in the same order.
*/
#include<iostream>

using namespace std;

bool equals(int a[],int a_size, int b[],int b_size){
  if(a_size == b_size){
    int j=0;
    for(int i=0; i<a_size; i++){
      if(a[i] == b[i]) j++;
    }
    if(j == a_size) return true;
    else return false;
  } else return false;
}



int main(){
  int a[] = {1,2,3,4};
  int b[] = {1,2,3};
  cout<<equals(a,4,b,3);
  
}