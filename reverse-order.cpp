/*
Author: sangheum Park
Course: CSCI-13500
Instructor: Tong Yi
Assignment: reverse-order.cpp

asks the user to input two dates
 The program should report the West basin elevation
 for all days in the interval
 in the reverse chronological order.
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include<string>
using namespace std;

int main()
{
	string line, eastSt, westSt, start_date, end_date, date, result;
	double EastElevation, WestElevation;
	int starting = 0;
	int i = 0;
	string Date[365];
	double west_elevation[365];

	ifstream fin("Current_Reservoir_Levels.tsv");
	if (fin.fail()) {
		cerr << "File cannot be opened for reading." << endl;
		exit(1); // exit if failed to open the file
	}


	getline(fin, line);
	cout << "Enter earlier date:  " << endl;
	cin >> start_date;
	cout << "Enter later date:  " << endl;
	cin >> end_date;
	while (fin >> date >> eastSt >> EastElevation >> westSt >> WestElevation) {

		fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
							  //ignorring the remaining columns 
		if (date == start_date) {
			starting = 1;
		}
		if (starting == 1) {
			Date[i] = date;
			west_elevation[i] = WestElevation;
			i += 1;
		}
		if (date == end_date) {

			for (int a = (i - 1); a >= 0; a--) {
				cout << Date[a] << " " << west_elevation[a] << " ft" << endl;
			}
			fin.close();
		}
	}
}
   



