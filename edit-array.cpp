/*
Author: sangheum Park
Course: CSCI-13500
Instructor: Tong Yi
Assignment: edit-array.cpp

creates an array of 10 integers, 
and provides the user with an interface 
to edit any of its elements. 
*/
#include <iostream>
using namespace std;

int main()
{
     int myData[10];
    for (int i = 0; i < 10; i++) {
        myData[i] = 1;
     }
     int ind;
     int val;
     do{
       for (int i = 0; i < 10; i++) {
        myData[i];
        cout<< myData[i] << '\t';
        } cout<< endl;

       cout<< "Enter index: ";
       cin >> ind;
       cout<<"Enter value";
       cin >> val;

       if(ind>=0 && ind<10){
         myData[ind] = val;
       } else cout<< "index out of range";

     }while(ind>=0 && ind<10);
    
}


