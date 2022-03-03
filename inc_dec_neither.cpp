/*
Author: sangheum Park
Course: CSCI-13500
Instructor: Tong Yi
Assignment: inc_dec_neither.cpp
*/

#include <iostream>

using namespace std;

int main()
{
  int num1,num2,num3;
  cin>> num1>>num2>> num3;
  if(num1<num2 && num2< num3 && num1<num3){
    cout<<"increasing"<<endl;
  } else if(num1>num2 && num2 > num3 && num1>num3){
    cout<<"decreasing"<<endl;
  } else cout<<"neither"<<endl;
  
}


