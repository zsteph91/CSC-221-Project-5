// CSC 221 Project 5.cpp : Program 2: Student Lineup

#include <iostream>
#include <iomanip>
#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    // read student names from the file LineUp.txt
    // output the count of the number of students in the file
    // output which student will be at the front of the alphabetically organized line
    // output which student will be at the end of that line

    ifstream inFile("LineUp.txt");
    if (!inFile) { // check that the file exists
        cerr << "Error opening file" << endl;
        return 1;
    }

    string name, first = "z", last = "A"; // set the first and last name variable
    int count = 0; // variable to count students in the file
    while (inFile >> name) {
        if (first > name) { // check ascii value for alphabetical order
            first = name;
        }
        if (last < name) {
            last = name;
        }
        count += 1;
    }

    inFile.close();

    cout << "There are " << count << " students in the class." << endl << first << " will be at the front of the line, and " << last 
        << " will be at the end of the line." << endl;
}


