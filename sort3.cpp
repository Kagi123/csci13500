/*
Author: sangheum Park
Course: CSCI-13500
Instructor: Tong Yi
Assignment: sort3.cpp

*/
#include <iostream>

using namespace std;

void sort3(int& a, int& b, int& c){
  int temp1 = a;
  int temp2 = b;
  int temp3 = c;
  if(b<a){
    a = temp2;
    b = temp1;
  }
  if(c<b){
    if(a>c){
      c = b;
      b = a;
      a = temp3;
    } else {
      c =b;
      b = temp3;
    }
  }
  
}

int main(){
  int v=4;
  int w =2;
  int x = 3;
  sort3(v,w,x);
  cout<<v<<w<<x;
}