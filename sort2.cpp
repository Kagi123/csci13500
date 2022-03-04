/*
Author: sangheum Park
Course: CSCI-13500
Instructor: Tong Yi
Assignment: sort2.cpp

*/
#include <iostream>

using namespace std;

void sort2(int& a, int& b){
  if(a>b){
    int temp=a;
    a=b;
    b=temp;
  };
}

int main(){
  int a =3;
  int b =2;
  sort2(a,b);
}

