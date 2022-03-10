/*
Author: sangheum Park
Course: CSCI-13500
Instructor: Tong Yi
Assignment: test-ascii.cpp

report all characters from 
the input line together with their ASCII codes.
*/
#include<iostream>

using namespace std;

int main(){
  cout<<"Input: "<<endl;
  string s;
  getline(cin, s);
  for(int i=0; i<s.length(); i++){
    cout << s[i] << " " << int(s[i])<< endl;
  }
}