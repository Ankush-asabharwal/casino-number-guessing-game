#pragma once

#include<string>
#include<iostream>
using namespace std;


class Logout{
    public:
    void logout(string username) {
        cout << "👋 " << username << ", you are now logged out!\n";
    }
};
