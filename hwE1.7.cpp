/*
Author: sangheum Park
Course: CSCI-13500
Instructor: Tong Yi
Assignment: HW E1.7

Enter three names and print them out, one in a line.
*/
#include <iostream>

using namespace std;

int main() {
	for (int i = 0; i < 3; i++) {
		cout << "Enter your name: " << endl;
		string name = "";
		cin >> name;
		cout << "" << name << endl;
	}
}