//Name:  Sangheum Park
//Email: sangheum.park27@myhunter.cuny.edu
//Date:  May 11 2022
//prints all numbers in range 
//left ≤   x   ≤ right, separated by spaces. 
//(Don’t use loops, global or static variables.)
//eceives an array (as a pointer to its first element)
//and the size of the array, 
//and should return the sum of its elements. 
//The function itself should not do any 
//new dynamic memory allocations.

#include <iostream>
#include <ostream>

using namespace std;


void printRange(int left, int right){
    if(left <= right){
        cout << left << " ";
        printRange(left+1, right);
    }
}

int sumRange(int left, int right){
  int sum;
  if(left> right) return 0;
  else if(left == right) return left;
  else return left + sumRange(left+1, right);
  
}

int sumArray(int *arr, int size){
    if(size == 1)   return *arr;
    if(size <= 0)   return 0;
    return *arr + sumArray(arr + 1, size - 1);
}

bool isAlphanumeric(string s){
    if(s.length() == 0) return true;
    if(!isalnum(s[0]))  return false;
    return isAlphanumeric(s.substr(1));
}

int main() {
int x = sumRange(3,1);
  cout << x;
  return 0;
}

