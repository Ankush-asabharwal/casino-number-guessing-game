#pragma once

#include <iostream>
#include <string>
using namespace std;

class Users{
    public :
    string username;
    string password;

    void display() {
        cout << "Username : " << username << endl;
        cout << "Password : " << password << endl;
    }
};
