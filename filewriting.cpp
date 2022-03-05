/*
Author: sangheum Park
Course: CSCI-13500
Instructor: Tong Yi
Assignment: filewriting.cpp

*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    string str;
    ofstream ofile("hello.txt");
    ofile << "Hello, World!";
    ofile.close();
    ifstream ifile("hello.txt");
    getline(ifile, str);
    cout << str << endl;
}