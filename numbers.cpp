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
Largest twin prime in range
*/

#include<iostream>

using namespace std;

bool isDivisibleBy(int n, int d){
  return n%d == 0;
  
}
bool isPrime(int n){
   for(int i = 2; i < n-1; i++)
        if(n % i == 0) return false;
    return true;
}

int nextPrime(int n){
  int i = 1;
  while(true){
  if(isPrime(n+i)) return n+i;
    else i++;
    }
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
  int i=1;
  while(true){
    if(isTwinPrime(n+i)) return n+i;
    else i++;
  }
}

int largestTwinPrime(int a, int b){
  int twinprime = -1;
  for(int i =a; i<b+1; i++){
      if(isTwinPrime(i)== true) twinprime = i;
  }
  return twinprime;
}
