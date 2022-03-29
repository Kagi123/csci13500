/*
Author: sangheum Park
Course: CSCI-13500
Instructor: Tong Yi
Assignment: read_open.cpp

*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
  string line;
  ifstream file ("data.txt");
  if (file.is_open())
  {
    while (getline(file,line))
    {
      cout << line << '\n';
    }
    file.close();
  }
  return 0;
}