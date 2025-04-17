#include <iostream>
#include "Users.h"
#include "Admin.h"
#include "Register.h"
#include "Login.h"
#include "Rules.h"
#include "Deposit.h"
#include "Withdraw.h"
#include "CheckBalance.h"
#include "PlayGame.h"
#include "Logout.h"
using namespace std;

int balance = 0;

int main() {
    Register reg;
    Login login;
    Deposit deposit;
    Withdraw withdraw;
    CheckBalance cb;
    PlayGame game;
    Rules rules;
    Logout logout;

    int choice;
    string name, pass;
    bool isLoggedIn = false;

    while (true) {
        if (!isLoggedIn) {
            cout << "\n Welcome to the Casino Game:\n";
            cout << "1. Register\n";
            cout << "2. Login\n";
            cout << "9. Exit\n";
        } else {
            cout << "\n Casino Game Menu:\n";
            cout << "3. Show Rules\n";
            cout << "4. Deposit\n";
            cout << "5. Withdraw\n";
            cout << "6. Check Balance\n";
            cout << "7. Play Game\n";
            cout << "8. Logout\n";
            cout << "9. Exit\n";
        }

        cout << "Enter your choice: ";
        cin >> choice;

        if (!isLoggedIn) {
            switch (choice) {
                case 1: {
                    Users user;
                    cout << "Enter username: ";
                    cin >> user.username;
                    cout << "Enter password: ";
                    cin >> user.password;
                    reg.addUser(user);
                    login.users.push_back(user); 
                    cout << "Registration successful!\n";
                    break;
                }

                case 2: {
                    cout << "Enter username: ";
                    cin >> name;
                    cout << "Enter password: ";
                    cin >> pass;
                    isLoggedIn = login.login(name, pass);
                    break;
                }

                case 9: {
                    cout << "Exiting the Casino... Bye!\n";
                    return 0;
                }

                default: {
                    cout << "Invalid choice. Please register or login first.\n";
                }
            }
        } else {
            switch (choice) {
                case 3: rules.showRules(); break;
                case 4: {
                    int amt;
                    cout << "Enter amount to deposit: ";
                    cin >> amt;
                    deposit.deposit(amt);
                    break;
                }
                case 5: {
                    int amt;
                    cout << "Enter amount to withdraw: ";
                    cin >> amt;
                    if (amt > balance)
                        cout << "Insufficient balance!\n";
                    else
                        withdraw.withdraw(amt);
                    break;
                }
                case 6: cb.checkBalance(); break;
                case 7: {
                    int bet, multiplier;
                    cout << "Enter bet amount: ";
                    cin >> bet;
                    if (bet > balance) {
                        cout << "Insufficient balance!\n";
                        break;
                    }
                    cout << "Enter multiplier (e.g., 2): ";
                    cin >> multiplier;
                    game.play(name, bet, multiplier);
                    break;
                }
                case 8: logout.logout(name); isLoggedIn = false; break;
                case 9: cout << "Exiting the Casino... Bye!\n"; return 0;
                default: cout << "Invalid choice. Try again.\n";
            }
        }
    }

    return 0;
}
