/*
Author: sangheum Park
Course: CSCI-13500
Instructor: Tong Yi
Assignment: HW E2.10

cost per 100 miles
*/
#include <iostream>

using namespace std;

int main() {
  cout << "The number of gallons: " << endl;
	int gallons = 0;
	cin >> gallons;
  cout << "fuel efficiency: " << endl;
	float fuel_efficiency = 0;
	cin >> fuel_efficiency;
  cout << "price of gas: " << endl;
	float price = 0;
	cin >> price;


	cout << "cost per 100miles " << (100/fuel_efficiency) * price << endl;
  cout << "How far car can go " << fuel_efficiency * gallons << endl;
  
}