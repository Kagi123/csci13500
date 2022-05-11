//Name:  Sangheum Park
//Email: sangheum.park27@myhunter.cuny.edu
//Date:  May 11 2022
//appends one vector after another. 

#include <iostream>
#include <ostream>
#include <string>
#include <vector>

using namespace std;
using std::vector;

vector<int> append(vector<int> a, vector<int> b) {
  for(int i=0; i<b.size(); i++){
    a.push_back(b[i]);
  }
     return a;
 }
 

int main() {

   return 0; 
}

