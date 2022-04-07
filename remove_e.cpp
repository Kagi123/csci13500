/*
Author: sangheum Park
Course: CSCI-13500
Instructor: Tong Yi
Assignment: remove_e.cpp

 Removes all `e` 
characters from 
the original string

*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void remove_e(string &sentence){

sentence.erase(remove(sentence.begin(), sentence.end(), 'e'), sentence.end());
}

int main(){
  string sentence = "Hello, Woerlde";
  remove_e(sentence);
  cout << sentence <<endl;
}


