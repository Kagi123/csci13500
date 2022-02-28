/*
Author: sangheum Park
Course: CSCI-13500
Instructor: Tong Yi
Assignment: Positive or Zero or Negative.cpp

asks the user to input 
find the number is
Positive or Zero or Negative
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  int num;
  cout<<"Enter a number: "<<endl;
  cin>> num;
  if(num>0){
    cout<<"positive";
  } else if(num == 0){
    cout<<"zero";
  } else if (num <0){
    cout<<"negative";
  }
  
}
   



