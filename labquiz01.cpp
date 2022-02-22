/*
Author: sangheum Park
Course: CSCI-13500
Instructor: Tong Yi
Assignment: labquiz01.cpp

Enter an int, 
print that number of 
"I love C++" lines. 
*/

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    for(int i=0; i<num; i++){
      cout<<"I love C++ "<< endl;
    }  
}