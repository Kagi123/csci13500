/*
Author: sangheum Park
Course: CSCI-13500
Instructor: Tong Yi
Assignment: smaller3.cpp

asks the user to input three integer numbers, 
and prints out the smallest of the three.

*/
#include <iostream>

using namespace std;

int main() {
  int first_num = 0;
  int second_num = 0;
  int third_num = 0;

  cout << "Enter the first number: " << endl;
	cin >> first_num;
  int answer = first_num;
  cout << "Enter the second number: " << endl;
	cin >> second_num;

  if (second_num < answer) {
    answer = second_num;
  } 
  cout << "Enter the third number: " << endl;
	cin >> third_num;

  if (third_num < answer) {
    answer = third_num;
  } 

	cout << "The smaller of the three is " << answer << endl;
  
}