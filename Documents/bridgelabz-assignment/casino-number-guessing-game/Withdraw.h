#pragma once

#include <iostream>
using namespace std;

extern int balance;

class Withdraw{
    public :
    void withdraw(int amount) {
        balance -= amount;
        cout << "Withdrawl Successfully!" << endl;
        cout << "Balance : " << balance << endl;
    }
};