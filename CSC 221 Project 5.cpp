// CSC 221 Project 5.cpp : Program 3: Population Bar Chart

#include <iostream>
#include <iomanip>
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // produces a bar chart for the population growth of a town
    // The data is stored in intervals over the past several years, with the year and the population for that year 
    // (rounded to the nearest 1,000 people) in each line of the file
    // ask for the name of the town and the name of the data file
    // open the file and verify that it has opened with no errors
    // Then the program should read the year and the population figure and display the year and population on a bar chart
    // For each year, it should display the year and a bar consisting of one asterisk for each 1,000 people

    string townName, fileName, stars;
    int population, numStars, year = 1900;

    cout << "What is the name of your town? ";
    cin >> townName;
    cout << "What is the name of your file? ";
    cin >> fileName;

    cout << townName << "'s Population Growth:" << endl;
    cout << "(each * represents 1,000 people)" << endl;

    ifstream inFile(fileName);
    if (!inFile) {
        cerr << "Error opening the file " << fileName << endl;
        return 1;
    }
    while (inFile >> population) {
        cout << year << " ";
        year += 20;
        numStars = population / 1000;
        for (int i = 0; i < numStars; i++) {
            cout << "*";
        }
        cout << endl;
    }

    inFile.close();
}


