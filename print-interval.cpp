/*
Author: sangheum Park
Course: CSCI-13500
Instructor: Tong Yi
Assignment: print-interval.cpp

Write a program print-interval.cpp 
that asks the user to input two integers L and U 
(representing the lower and upper limits of the interval), 
and print out all integers in the range L ≤ i < U 
separated by spaces. 
*/

#include <iostream>

using namespace std;
int main() {
  int left_num;
  int right_num;

  cout<<"Please enter L: "<<endl;
  cin >>left_num;
  cout<<"Please enter U: "<<endl;
  cin>>right_num;

  for(int i = left_num; i < right_num; i++) {
    
    cout << i<< " ";
  }

}