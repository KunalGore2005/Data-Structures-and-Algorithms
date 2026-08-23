#include<iostream>
using namespace std;

class BankAccount{
private:
    int accountNumber;
    double balance;
public:
    BankAccount(int accNum){
        accountNumber = accNum;
        balance = 0.0;
    }
    void deposit(double amount){
        if(amount > 0){
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }
    void withdraw(double amount){
        if(amount > 0 && amount <= balance){
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Invalid withdrawal amount." << endl;
        }
    }
    void getBalance(){
        cout << "Current Balance: " << balance << endl;
    }
    void displayAccount(){
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }

};

int main()
{
    BankAccount account(123456);
    account.deposit(1000);
    account.getBalance();
    account.withdraw(500);
    account.getBalance();
    account.displayAccount();

    return 0;
}