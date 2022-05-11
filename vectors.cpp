//Name:  Sangheum Park
//Email: sangheum.park27@myhunter.cuny.edu
//Date:  May 06 2022
//Vectors Define function vector<int> makeVector(int n) 
//which, if n is positive, 
//return a vector of ints of 0 to n-1, 
//otherwise, return an 
//empty vector.

#include <iostream> 
#include <vector>

using namespace std;

vector<int> makeVector(int n) {
    vector<int> v;
  if(n>0){
    for (int i = 0; i < n; ++i) {
        v.push_back(i);
    }
  }
  return v;
}

int main(){

    return 0;
}


