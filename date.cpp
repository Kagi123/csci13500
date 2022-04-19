/*
Author: sangheum Park
Course: CSCI-13500
Instructor: Tong Yi
Assignment: date.cpp
prints date

*/

#include <iostream>
#include <math.h>

using namespace std;

class Date {
public:
    int year;
    int month;
    int day;
    string day_of_week;
};

void printDate(Date *input){
  cout << input->day_of_week<<", "<<input->month<<"/"<<input->day<<"/"<<input->year<<endl;
}


int main() {
  Date today ={2022,04,19,"Tuesday"};
  printDate(&today);
}


