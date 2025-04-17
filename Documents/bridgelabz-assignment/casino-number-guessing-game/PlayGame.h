#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

extern int balance;

class PlayGame{
    public :
    void play(string name, int betAmount, int multiplier) {
        int num;
        cout << "Choose the number from 1 to 10" << endl;
        cin >> num;
        srand(time(0));
        int random = rand() % 10 + 1;
        if (random % 2 == 0 && num % 2 ==0) {
            balance += betAmount * multiplier;
            cout << "You Won!" << endl;
            cout << "Balance : " << balance << endl;
        }
        else {
            balance -= betAmount;
            cout << "You Lost!" << endl;
            cout << "Balance : " << balance << endl;
        }
        ofstream file("history.txt", ios::app);
        file << name << " bet ₹" << betAmount << " guessed " << num 
        << " actual: " << random << " balance: ₹" << balance << endl;
        file.close();
        cout << "Round Over!" << endl;
    }
};