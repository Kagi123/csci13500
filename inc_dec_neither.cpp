/*
Author: sangheum Park
Course: CSCI-13500
Instructor: Tong Yi
Assignment: inc_dec_neither.cpp

Increasing, Decreasing or Neither
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  int num1,num2,num3;
  cout<<"Enter a number1: "<<endl;
  cin>> num1;
   cout<<"Enter a number2: "<<endl;
  cin>> num2;
   cout<<"Enter a number3: "<<endl;
  cin>> num3;
  if(num1<num2 && num2< num3){
    cout<<"increasing";
  } else if(num1>num2 && num2 > num3){
    cout<<"decreasing";
  } else cout<<"neither";
  
}
   



