/*
Author: sangheum Park
Course: CSCI-13500
Instructor: Tong Yi
Assignment: caesar.cpp

functions implementing 
Caesar cipher 
encryption
*/


#include <iostream>
#include <string>

using namespace std;

char shiftChar(char c, int rshift){
    if(65 <= c && c <= 90){
        if((c + rshift) > 90) 
          c += (rshift - 26);
        else c += rshift;
    } else if(97 <= c && c <= 122){
        if((c + rshift) > 122) 
          c += (rshift - 26);
        else c += rshift;
    }
    return c;
}


string encryptCaesar(string plaintext, int rshift){
    for(int i = 0; i < plaintext.length(); i++){
        plaintext[i] = shiftChar(plaintext[i], rshift);
    }
    return plaintext;
}

int main(){
    string inputText, shift;
    cout << "Enter plaintext: " << endl;
    getline(cin, inputText, '\n');    
    cout << "Enter shift: " << endl;
    getline(cin, shift, '\n');

    cout << encryptCaesar(inputText, stoi(shift)) << endl;

    return 0;
}