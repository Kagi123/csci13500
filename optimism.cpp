//Name:  Sangheum Park
//Email: sangheum.park27@myhunter.cuny.edu
//Date:  May 09 2022
//given a vector of integers, 
//returns a vector with only 
//the positive integers 
//in the same order.

#include <iostream>
#include <string>
#include <vector>

using namespace std;


vector<int> goodVibes(vector<int> v) {
 vector<int> list;
    for(int i = 0; i < v.size(); i++)
        if(v[i] >= 0)
            list.push_back(v[i]);
    return list;
}

int main() {
  
   return 0; 
}

