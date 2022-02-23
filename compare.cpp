/*
Author: sangheum Park
Course: CSCI-13500
Instructor: Tong Yi
Assignment: compare.cpp

asks the user to input two dates.
The program should check each day in the interval
and report which basin had higher elevation on that day
 by printing “East” or “West”, or print “Equal” if both basins are at the same level.
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include<string>
using namespace std;

int main()
{
	string line, eastSt, westSt, start_date, end_date, date,result;
	double EastElevation, WestElevation;
	int start = 0;

	ifstream fin("Current_Reservoir_Levels.tsv");
	if (fin.fail()) {
		cerr << "File cannot be opened for reading." << endl;
		exit(1); // exit if failed to open the file
	}


	getline(fin, line);
	cout << "Enter starting date:  " << endl;
	cin >> start_date;
	cout << "Enter ending date:  " << endl;
	cin >> end_date;
	while (fin >> date >> eastSt >> EastElevation >> westSt >> WestElevation) {

		fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
							  //ignorring the remaining columns 
		if (date == start_date) {
			start == 1;
		}
		if (start == 1) {
			if (EastElevation > WestElevation) {
				result = "East";
			}
			if (EastElevation < WestElevation) {
				result = "West";
			}
			if (EastElevation == WestElevation) {
				result = " Equal";
			}
			cout << date << result << endl;
		}
		if (date == end_date) {
			fin.close();
		}
	}
}
	
   
   



