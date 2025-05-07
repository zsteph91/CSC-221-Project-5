// CSC 221 Project 5.cpp : Program 1: Population

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float population, popIncrease, popIncDecimal, numDays, dailyIncrease, finalPop = 0;

    cout << "What is the starting number of organisms? "; // ask for the starting number of organisms, must be greater than 2
    cin >> population;

    if (population < 2) {
        cout << "Invalid: population too small" << endl;
    }
    cout << "What is the average daily population increase (%)? "; // ask for their average daily population increase (as a percentage), can't be negative
    cin >> popIncrease;

    if (popIncrease < 0) {
            cout << "Invalid: population must increase";
    }

    popIncDecimal = popIncrease / 100; // convert percentage to decimal so it can be used in calculations

    cout << "How many days do you want to predict? "; // ask for the number of days they will multiply, must be at least 1 day
    cin >> numDays;

    if (numDays < 1) {
        cout << "Invalid: need to predict for at least one day";
    }
    
    for (int i = 1; i <= numDays; i++) { // initialize a counter to go from 1 to numDays, increasing by one with eachiteration
        dailyIncrease = popIncDecimal * population; // calculate the number the population increases by each day
        population += dailyIncrease;
        finalPop = population + dailyIncrease; // add the daily increase to the old population each iteration
    }
    cout << "The population will be " << finalPop << " after " << numDays << " days." << endl;
}


