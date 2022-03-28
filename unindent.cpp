/*
Author: sangheum Park
Course: CSCI-13500
Instructor: Tong Yi
Assignment: unindent.cpp

takes one line of code
as input and returns
its copy without leading spaces and tabs
*/

#include <iostream>

using namespace std;

string removeLeadingSpaces(string line);

string removeLeadingSpaces(string line){
    string result;
    bool word = false;
    for(int i = 0; i < line.length(); i++){
        if(isspace(line[i])==false) word = true;
        if(word) result += line[i];
    }
    return result;
}

int main() {
  string line;
  while(getline(cin, line)){
   cout << removeLeadingSpaces(line);
  cout << endl;
 }
  return 0;
}
