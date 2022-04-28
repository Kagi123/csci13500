/*
Author: sangheum Park
Course: CSCI-13500
Instructor: Tong Yi
Assignment: money.cpp

define class money
*/

#include <iostream>

using namespace std;

class Money{

public:

int dollars;
int cents;

};

Money add_money(Money x, Money y){
  Money result;
  result.dollars = x.dollars + y.dollars;
  result.cents = x.cents + y.cents;

  if(result.cents >=100){
    result.dollars += (result.cents/100);
    result.cents = result.cents % 100;
  }
  return result;
}

int main() {
  
  return 0;
}


