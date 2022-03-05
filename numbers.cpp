/*
Author: sangheum Park
Course: CSCI-13500
Instructor: Tong Yi
Assignment: numbers.cpp

numbers.cpp
isdivisibleby
isprime
nextprime
countprime
is a twin prime?
next twin prime
*/
#include<iostream>

using namespace std;

bool isDivisibleBy(int n, int d){
  if(d!=0){
  if(n%d == 0 ) return true;
  else return false;
  } else return false;
  
}
bool isPrime(int n){
  int divide_num=0;
  for(int i=1; i<n; i++){
    if(n%i == 0){
      divide_num += 1;
    }
  }
  if(divide_num == 1) return true;
  else return false;
}

int nextPrime(int n){
  int j = 1;
  int answer = 0;
  while(true){
    int divide_num=0;
    for(int i=1; i<n+j; i++){
    if((n+j)%i == 0){
      divide_num += 1;
      }
    }
    if (divide_num == 1) {
      answer = n+j;
      break;
    } else j++;
  }

  return answer;
}

int countPrimes(int a, int b){
  int prime_num = 0;
  for(int i =a; i<b+1; i++){
      if(isPrime(i)==true) prime_num +=1;
  }
  return prime_num;
}

bool isTwinPrime(int n){
  if(isPrime(n) == true){
    if(isPrime(n-2) == true || isPrime(n+2) == true )
      return true;
    else return false;
  } else return false;
}

int nextTwinPrime(int n){
  int answer = 0;
  int j=0;
  while(true){
    if(isTwinPrime(nextPrime(n+j)) == true){
      answer = nextPrime(n+j);
      break;
    } else j++;
  }
  return answer;
}
int main(){
  int a;
  cout<<"Enter a integer: "<<endl;
    cin >> a;
  cout<<nextTwinPrime(a);
}