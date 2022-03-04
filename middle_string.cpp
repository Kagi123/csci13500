/*
Author: sangheum Park
Course: CSCI-13500
Instructor: Tong Yi
Assignment: middle_string.cpp

*/

#include <string>
#include <iostream>
using namespace std;

string middle(string str){
  string result ="";
  if(str.size()%2 == 0){
   result += str[(str.size()/2)-1];
    result += str[str.size()/2];
   } else 
    result += str[str.size()/2];
  return result;
  }
int main(){
  
  cout<<middle("hello")<<endl;

  }
