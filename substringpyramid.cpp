/*
Author: sangheum Park
Course: CSCI-13500
Instructor: Tong Yi
Assignment: substring.cpp

substring pyramid
*/


#include <iostream>
#include <string>
using namespace std;
int main(){
  string line;
  cout<<"enter line: "<<endl;
  getline(cin, line);
  for(int i = 0; i <= line.length(); i++)
    cout << line.substr(0, i) << endl;

  for(int i = line.length()-1; i > 0; i--)
    cout << line.substr(0, i) << endl;
}