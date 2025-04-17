#pragma once

#include <iostream>
using namespace std;

class Rules{
    public :
    void showRules() {
        cout << "\nGame Rules:\n";
        cout << "1. Guess number between 1-10.\n";
        cout << "2. If your number & system number both even, you win.\n";
        cout << "3. Else, you lose your bet.\n\n";
    }
};