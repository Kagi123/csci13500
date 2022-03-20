/*
Author: sangheum Park
Course: CSCI-13500
Instructor: Tong Yi
Assignment: vigenere.cpp

the user enters the plaintext 
and the keyword, and 
the program reports the ciphertext.
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
string encryptVigenere(string text,string keyword){
    int cnt = 0;
    for(int i = 0; i < text.length(); i++)
        if(isalpha(text[i])){
            if(cnt == keyword.length()) cnt = 0;
            text[i] = shiftChar(text[i], keyword[cnt] - 97);
            cnt++;
        }  
    return text;
}

int main(){
   string inputText, keyword;
    cout << "Enter plaintext: " << endl;
    getline(cin, inputText, '\n');    
    cout << "Enter keyword: " << endl;
    getline(cin, keyword, '\n');

    cout << encryptVigenere(inputText, keyword) << endl;

    return 0;
}