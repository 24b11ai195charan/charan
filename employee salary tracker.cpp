#include <iostream>
#include <string>

class BankAccount 
{
private: 
    double balance;
    std::string accountNumber;

public: 
    std::string holderName;
    BankAccount(std::string name, double initialBalance, std::string accNum) 
    {
        holderName = name;
        if (initialBalance >= 0) 
        {
            balance = initialBalance;
        }
         else 
         {
            balance = 0; 
            std::cout << "Warning: Initial balance cannot be negative. Setting to 0." << std::endl;
        }
        accountNumber = accNum;
        std::cout << "Account created for " << holderName << " with account number " << accountNumber << "." << std::endl;
    }
    void deposit(double amount) 
    {
        if (amount > 0) 
        {
            balance += amount;
            std::cout << "Deposited $" << amount << ". New balance: $" << balance << std::endl;
        } 
        else 
        {
            std::cout << "Deposit amount must be positive." << std::endl;
        }
    }
    void withdraw(double amount) 
    {
        if (amount > 0) 
        {
            if (balance >= amount) 
            {
                balance -= amount;
                std::cout << "Withdrew $" << amount << ". New balance: $" << balance << std::endl;
            } 
            else 
            {
                std::cout << "Insufficient funds." << std::endl;
            }
        } 
        else 
        {
            std::cout << "Withdrawal amount must be positive." << std::endl;
        }
    }
    void checkBalance() {
        std::cout << "Account holder: " << holderName << std::endl;
        std::cout << "Account number: " << accountNumber << std::endl;
        std::cout << "Current balance: $" << balance << std::endl;
    }
};
