/*
Author: sangheum Park
Course: CSCI-13500
Instructor: Tong Yi
Assignment: time.cpp

The function should 
create and return
a new moment of time 
that is min minutes 
after time0
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

Time addMinutes(Time time0, int min){
  time0.h += min/60;
  min = min%60;
  if(min+ time0.m >=60){
    time0.h++;
    time0.m = min+time0.m - 60;
  } else time0.m += min;

  cout << time0.h << " "<<time0.m<<endl;
  return time0;
}



int main() {
  Time time;
  time.h = 14;
  time.m = 45;

  addMinutes(time, 30);
  return 0;
}


