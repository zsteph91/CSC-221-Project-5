// CSC 221 Project 5.cpp : Program 4: Patterns

#include <iostream>
#include <iomanip>
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // create two patterns of "+"s in the shape of a triangle and inverted triangle

    int rows;

    cout << "How many rows would you like? ";
    cin >> rows;

    for (int a = 1; a <= rows; a++) { // increase columns from 1 to row
        for (int i = 1; i <= a; i++) { // print "+" in an increasing triangle shape
            cout << "+";
        }
        cout << endl;
    }
    
    cout << endl;

    for (int b = rows; b >= 1; b--) { // decrease columns from row to 1
        for (int j = 1; j <= b; j++) { // print "+" in an inverted triangle shape
            cout << "+";
        }
        cout << endl;
    }
}


