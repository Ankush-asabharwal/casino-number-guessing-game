#pragma once

#include <iostream>
#include <vector>
#include "Users.h"
using namespace std;


class Admin {
    public :
    vector<Users> users;

    void addUser(Users user) {
        users.push_back(user);
    }

    void displayUsers() {
        for (int i = 0; i < users.size(); i++) {
            users[i].display();
        }
    }
};