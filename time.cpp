/*
Author: sangheum Park
Course: CSCI-13500
Instructor: Tong Yi
Assignment: time.cpp

define
class
time
*/

#include <iostream>

using namespace std;

class Time { 
public:
    int h;
    int m;
};

int minutesSinceMidnight(Time time){
  int result;
  result = time.h*60 + time.m;
  return result;
}
int minutesUntil(Time earlier, Time later){
  int result;
  result = (later.h - earlier.h)*60;
  if(later.m> earlier.m){
    result += later.m - earlier.m;
  } else {
    result -= (earlier.m - later.m);
  }
  return result;
}




int main() {
  Time time;
  time.h = 1;
  time.m = 30;
  Time time2;
  time2.h = 2;
  time2.m = 10;

  cout << minutesSinceMidnight(time)<<endl;
  cout << minutesUntil(time,time2)<<endl;
  
  return 0;
}


