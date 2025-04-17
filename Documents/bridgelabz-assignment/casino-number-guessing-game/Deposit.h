#pragma once

#include <iostream>
using namespace std;

extern int balance;

class Deposit{
    public :
    void deposit(int amount) {
        balance += amount;
        cout << "Deposit Successfully!" << endl;
        cout << "Balance : " << balance << endl;
    }
};