/*
Author: sangheum Park
Course: CSCI-13500
Instructor: Tong Yi
Assignment: smaller.cpp

find smallest of three
*/
#include <iostream>

using namespace std;

int main() {
  int first_num = 0;
  int second_num = 0;

  cout << "Enter the first number: " << endl;
	cin >> first_num;
  cout << "Enter the second number: " << endl;
	cin >> second_num;

  int answer = first_num;

  if (second_num < first_num) {
    answer = second_num;
  } 

	cout << "The smaller of the two is " << answer << endl;
  
}