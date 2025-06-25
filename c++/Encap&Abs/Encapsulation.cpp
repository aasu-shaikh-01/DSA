#include <iostream>
#include <string>
#include <vector>

using namespace std;

class BankAccount
{
private:
    string accountNumber;
    double balance;

public:
    BankAccount(string accNum, double initialBalance)
    {
        accountNumber = accNum;
        balance = initialBalance;
    }

    // getter
    double getBalance() const
    {
        return balance;
    }

    // Method to deposit money:
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << " deposited amount: " << amount << endl;
        }
        else
        {
            cout << "Invalid deposit amount:" << endl;
        }
    }

    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << " withdrawal amount: " << amount << endl;
        }
        else
        {
            cout << "Invalid withdrawn amount:" << endl;
        }
    }

    // void displayChaiDetails()
    // {
    //     cout << "Tea Name: " << teaName << endl;
    //     cout << "servings: " << servings << endl;
    //     cout << "Ingredients: ";
    //     for (string ingredient : ingredients)
    //     {
    //         cout << ingredient << " ";
    //     }
    //     cout << endl;
    // }
};

int main()
{
    BankAccount myAccount("122", 500);
    myAccount.deposit(200);
    myAccount.withdraw(100);
    double item = myAccount.getBalance();
    cout << item << endl;
    return 0;
}