#include <iostream>

using namespace std;

int main() {
  cout << "enter ";
  string name;
  cin >> name;
  size_t index = name.find(' ');
  if(index == string::npos){
    cout << "no space in input name, cannot proceed" << endl;
    return -1;
  }

  string firstName = name.substr(0, index);
  string lastName = name.substr(index+1);
  cout << lastName + ", "+ firstName << endl;
  return 0;
}