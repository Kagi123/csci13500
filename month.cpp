/*
Author: sangheum Park
Course: CSCI-13500
Instructor: Tong Yi
Assignment: month.cpp

asks the user to input the year and the month (1-12) 
and prints the number of days in that month 
(taking into account leap years).
*/
#include <iostream>

using namespace std;

int main() {
  int year = 0;
  int month = 0;

  cout << "Enter year: " << endl;
	cin >> year;
  cout << "Enter month: " << endl;
	cin >> month;
  if(month != 2) {
    if(month <8){
      if(month %2 == 0){
        cout << "30 days"<< endl;
      }
      else cout << "31 days"<<endl;
    }
    if(month >=8){
      if(month %2 == 0){
        cout << "31 days"<< endl;
      }
      else cout << "30 days"<<endl;
    }

  }

  if(month == 2){
  if (year % 4 != 0) 
    cout << "28 days" <<endl;
  else if (year % 100 != 0) 
  cout << "29 days" <<endl;
  else if (year % 400 != 0) 
  cout << "28 days" <<endl;
  else cout << "29 days" <<endl;  
  }

}