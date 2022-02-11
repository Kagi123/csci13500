/*
Author: sangheum Park
Course: CSCI-13500
Instructor: Tong Yi
Assignment: valid.cpp

After a valid value is obtained, 
print this number n squared.
*/

#include <iostream>

using namespace std;
int main() {
  int num;
  cout<< "please enter an integer: ";
  cin >> num;

  if(num<=0 || num >=100){
    while(num<=0 || num >=100){
    cout<< "please re-enter: ";
    cin >> num;
    }

  }

  cout<< "number square is "<< (num) * (num);
}