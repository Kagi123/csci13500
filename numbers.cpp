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
#include <math.h>

using namespace std;

bool isPrime(int n){
   for(int i = 2; i <sqrt(n); i++)
        if(n % i == 0) return false;
    return true;
}

bool isTwinPrime(int n){
  if(isPrime(n) == true && (isPrime(n-2) == true || isPrime(n+2) == true))
      return true;
  else return false;
}

int largestTwinPrime(int a, int b){
  int twinprime = -1;
  for(int i =a; i<b+1; i++){
      if(isTwinPrime(i)== true) twinprime = i;
  }
  return twinprime;
}
