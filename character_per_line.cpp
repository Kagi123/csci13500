
//Author: sangheum Park
//Course: CSCI-13500
//Instructor: Tong Yi
//Assignment: character per line.cpp


#include <iostream>
#include <string>

using namespace std;

int main()
{
  string word;
  cin>>word;

  for(int i=0; i<word.length(); i++){
    cout<<word[i]<<endl;
  }
  
}

