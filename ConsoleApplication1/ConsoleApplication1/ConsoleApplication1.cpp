#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include<string>
using namespace std;

int main()
{
    string inputDate, line, date, eastSt;

    ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) {
        cerr << "File cannot be opened for reading." << endl;
        exit(1); // exit if failed to open the file
    }
    cout << "Enter date: " << endl;
    cin >> inputDate;

    getline(fin, line);
    while (fin >> date >> eastSt) {
        // this loop reads the file line-by-line
        // extracting 2 values on each iteration 

        fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
                              //ignorring the remaining columns 

        // for example, to print the date and East basin storage:
        if (inputDate == date) {
            cout << "East basin storage: " << eastSt << "billion gallons" << endl;
            fin.close();
        }

    }

    fin.close();


}


