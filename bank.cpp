#include<iostream>
using namespace std;

class BankAccount {
private:
    double balance;
    int accountNumber;

public:
    string holderName;

    BankAccount(double b, int an, string hn) {
        balance = b;
        accountNumber = an;
        holderName = hn;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid Deposit AMOUNT" << endl << "Please Enter Correct AMOUNT" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount <= balance && amount > 0) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Invalid Withdrawal AMOUNT" << endl << "Please Enter Correct AMOUNT" << endl;
        }
    }

    void checkBalance() {
        cout << "Account Holder : " << holderName << endl;
        cout << "Account Number : " << accountNumber << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount accS(6899.9, 85, "Sashank");

    accS.checkBalance();
    accS.deposit(1500.0);
    accS.withdraw(2000.0);
    accS.withdraw(6000.0);
    accS.checkBalance();

    return 0;
}
