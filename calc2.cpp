/*
Author: sangheum Park
Course: CSCI-13500
Instructor: Tong Yi
Assignment: calc2.cpp

simple calculator that 
can add and subtract integers,
*/

#include <iostream>
using namespace std;
int main() {
    int result = 0;
    int num = 0;
	char sig;
    cin >> num;
	result = num;
    while (cin >> sig >> num) {
		if(sig == ';') {
			cout << result << endl;
			result = num;
		}
        else if (sig == '+'){
			result += num;
		}
		else if (sig == '-'){
			result -= num;
		} 
    }

    cout << result << endl;
}