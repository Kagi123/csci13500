/*
Author: sangheum Park
Course: CSCI-13500
Instructor: Tong Yi
Assignment: sum.cpp

adding integers
*/

#include <iostream>
using namespace std;
int main() {
    int num;
    int sum = 0;
    while(cin >> num) {
          sum += num;
    }
    cout << sum << endl;
}