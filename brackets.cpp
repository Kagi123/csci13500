/*
Author: sangheum Park
Course: CSCI-13500
Instructor: Tong Yi
Assignment: brackets.cpp

return the diffrence between open curly brackets and 
closed brackets
*/

#include <iostream>
#include <string>

using namespace std;

int unbalanced_brackets(string input){
  int result = 0;
  for (int i=0; i<input.length(); i++){
    if (input[i] == '{') result +=1;
    else result -= 1;
  }
  return result;
}

int main() {
  string input = "{{}}}";
  cout<< unbalanced_brackets(input);
}


