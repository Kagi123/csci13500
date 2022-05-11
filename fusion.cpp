//Name:  Sangheum Park
//Email: sangheum.park27@myhunter.cuny.edu
//Date:  May 09 2022
//appends elements of 
//the second vector into 
//the first and empties
//the second vector

#include <iostream>
#include <string>
#include <vector>

using namespace std;


void gogeta(vector<int> &goku, vector<int> &vegeta) {
 for(int i=0; i<vegeta.size(); i++){
   goku.push_back(vegeta[i]);
 }
  vegeta.clear();
}

int main() {
  
   return 0; 
}

