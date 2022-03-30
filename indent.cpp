/*
Author: sangheum Park
Course: CSCI-13500
Instructor: Tong Yi
Assignment: indent.cpp

reads the input line by line,
 it should also count the number 
of open and closed { } in it,
and keep track of how many blocks is 
currently open at the beginning of each line.
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

int countCharInString(string line, char character){
    int counter = 0;
    for(int i = 0; i < line.size(); i++)
         if(line[i] == character) {
           counter += 1;
         } else
           counter += 0;
    return counter;
}

int main() {
  string line,new_line;
  int a = 0;
  while (getline(cin, line, '\n')){
        string new_line = removeLeadingSpaces(line), b= "";
        if(new_line[0] != '}'){
          for(int i = 0; i < a; i++)
            b += '\t';
        } else {
          for(int i = 0; i < a - 1; i++)
            b += '\t';
        }
        
        cout << b << new_line << endl;
        a += countCharInString(line, '{') - countCharInString(line, '}');
    }
  return 0;
}
