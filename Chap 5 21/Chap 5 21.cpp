// Chap 5 21.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

double guesscount;
double guess;

int main()
{
    srand(time(0));
    int number = rand() % 100 + 1;
    guesscount = 10;
    cout << "Guess my number. You have " << guesscount << " guesses." << endl;
    do {
        cin >> guess;

        if (guess < number) {
            --guesscount;
            cout << "Higher (" << guesscount << " left)" << endl;
        }
        else if (guess > number) {
            --guesscount;
            cout << "Lower (" << guesscount << " left)" << endl;
        }
    } while (guess > number || guess < number && guesscount >= 1);
    if (guesscount > 0) {
        cout << "YOU FOUND THE NUMBER!!! it was " << number << " :)" << endl;
    }
    else if (guesscount <= 0)
        cout << "You've ran out of guesses! Tough luck, it was " << number << " :)" << endl;
}

// I still really like this one. Now with time seed.
