#pragma once

#include <iostream>
#include <vector>
#include <fstream>
#include "Users.h"
using namespace std;

class Register{
    public :
    vector<Users> users;
    void addUser(Users user) {
        users.push_back(user);

        ofstream file("userData.txt", ios::app);
        file << "Username : " << user.username << " "
        << "Password : " << user.password << endl;
        file.close();
        
    }

};