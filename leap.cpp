/*
Author: sangheum Park
Course: CSCI-13500
Instructor: Tong Yi
Assignment: leap.cpp

find leap year or
common year
*/
#include <iostream>

using namespace std;

int main() {
  int year = 0;

  cout << "Enter year: " << endl;
	cin >> year;
  if (year % 4 != 0) 
    cout << "Common year " <<endl;
  else if (year % 100 != 0) 
  cout << "leap yeaer " <<endl;
  else if (year % 400 != 0) 
  cout << "Common year " <<endl;
  else cout << "leap yeaer " <<endl;  

}