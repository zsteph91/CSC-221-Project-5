// CSC 221 Project 5.cpp : Program 5: Random Number Guessing Game

#include <iostream>
#include <iomanip>
#include <random>
#include <string>
using namespace std;

int main()
{
    // generates a random number and asks the user to guess what the number is
    // if the user’s guess is higher than the random number, the program should display “Too high, try again.”
    // If the user’s guess is lower than the random number, the program should display “Too low, try again.”

    int upperLimit, randNum, guess, counter = 0;

    cout << "What range of numbers would you like to guess from? 1 - (largest number you want): ";
    cin >> upperLimit;

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution <> dist(1, upperLimit);
    randNum = dist(gen);

    do {
        counter++;

        cout << "What is your guess? ";
        cin >> guess;

        if (guess == randNum) {
            cout << "Total guesses: " << counter;
        }

        else if (guess > randNum) {
            cout << "Too high, try again. ";
        }

        else {
            cout << "Too low, try again. ";
        }

    } while (guess != randNum);
}


