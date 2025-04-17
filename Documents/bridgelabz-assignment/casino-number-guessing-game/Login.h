#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "Admin.h"
using namespace std;


class Login : public Admin {
    public : 
    bool login(string uname, string pass) {
        for (auto user : users) {
            if (user.username == uname && user.password == pass) {
                cout << "Login Successful\n";
                return true;
            }
        }
        cout << "Login Failed\n";
        return false;
    }
};