/*
Author: sangheum Park
Course: CSCI-13500
Instructor: Tong Yi
Assignment: minmax.cpp

finds the minimum and maximum storage 
in East basin in 2018.
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include<string>
using namespace std;

int main()
{
    string line, date;
	double eastSt,min_eastSt=1000,max_eastSt=0;

    ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) {
        cerr << "File cannot be opened for reading." << endl;
        exit(1); // exit if failed to open the file
    }

    getline(fin, line);
    while (fin >> date >> eastSt ) {

        fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
                              //ignorring the remaining columns 
		if(eastSt>max_eastSt) {
			max_eastSt = eastSt;
		}
		if(eastSt< min_eastSt){
		min_eastSt = eastSt;
		}        
    }
	
    cout << "minimum storage in East basin:" << min_eastSt << "billion gallons"<<endl;
    cout << "MAXimum storage in East basin:" << max_eastSt << "billion gallons"<<endl;

    fin.close();
    

}

