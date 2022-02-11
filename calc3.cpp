/*
Author: sangheum Park
Course: CSCI-13500
Instructor: Tong Yi
Assignment: calc3.cpp

simple calculator that 
can add and 
subtract integers,
can understand squared numbers.  
*/

#include <iostream>
using namespace std;
int main() {
    int result = 0;
    int num1 = 0;
	int num2 = 0;
	char sig;
    cin >> num1;
	result = num1;
	int i = 0;
	
    while (cin >> sig) {
		if(i == 0 && sig == '^'){
			result *= result;
		}

		if(sig == '+'){
			cin >> num2;
			result += num2;
			i=2;
		}else if(sig == '-'){
			cin >> num2;
			result -= num2;
			i=3;
		}
		
		if(sig == '^'){
			if(i == 2){
				result -= num2;
				result += (num2*num2);
			} else if(i == 3){
				result += num2;
				result -= (num2*num2);
			}

		}

		if(sig == ';'){
			cout << result << endl;
			i=0;
			result = 0;
			num1 = 0;
			num2 = 0;
			cin >> num1;
			result = num1;
		}
		
    }

    
}