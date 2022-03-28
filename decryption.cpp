/*
Author: sangheum Park
Course: CSCI-13500
Instructor: Tong Yi
Assignment: decryption.cpp
uses the above functions 
to demonstrate encryption 
and decryption 
for both ciphers.
*/


#include <iostream>
#include <string>
using namespace std;

char shiftChar(char c, int shift){
    if(65 <= c && c <= 90){
        if((c - shift) < 65) 
          c -= shift - 26;
        else c -= shift;
    } else if(97 <= c && c <= 122){
        if((c - shift) < 97) 
          c -= shift - 26;
        else c -= shift;
    }
    return c;
}
string decryptCaesar(string plainText, int lshift){
    for(int i = 0; i < plainText.length(); i++)
        plainText[i] = shiftChar(plainText[i], lshift);
    return plainText;
}

string decryptVigenere(string plainText, string keyword){
    int counter = 0;
    for(int i = 0; i < plainText.length(); i++)
        if(isalpha(plainText[i])){
            if(counter == keyword.length()) counter = 0;
            plainText[i] = shiftChar(plainText[i], keyword[counter] - 97);
            counter++;
        }
    return plainText;
}

int main(){


    return 0;
}