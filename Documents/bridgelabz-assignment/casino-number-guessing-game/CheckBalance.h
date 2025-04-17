#pragma once

#include <iostream>
using namespace std;

extern int balance;

class CheckBalance{
    public :
    void checkBalance() {
        cout << "Balance : " << balance << endl;
    }
};