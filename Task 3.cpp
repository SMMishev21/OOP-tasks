#include <iostream>
#include <cstring>
using namespace std;

class BankAccount {
private:
    char Name[24];
    char accountNumber[16];
    double balance;

public:

    BankAccount(const char* name, const char* accNumber, double initialBalance) {
        strncpy(Name, name, 23);
        Name[23] = '\0'; 
        strncpy(accountNumber, accNumber, 15);
        accountNumber[15] = '\0';
        balance = initialBalance;
    }


    void displayAccount() {
        cout  << Name << endl;
       cout << accountNumber << endl;
        cout << balance << endl;
    }


    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << amount <<  endl;
        } else {
            cout << endl;
        }
    }


    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << amount << endl;
        } else {
            cout << endl;
        }
    }
};

int main() {

    BankAccount account("Stiliyan Mishev", "123456789012345", 1000.0);
    account.displayAccount();

    account.deposit(500.0);
    account.displayAccount();

    account.withdraw(200.0);
    account.displayAccount();

    account.withdraw(2000.0); 
    account.displayAccount();

    return 0;
}