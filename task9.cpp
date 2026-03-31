#include <iostream>
#include <string>
using namespace std;
class BankAccount {
private:
    string accountNumber;
    double balance;
    int pin;
public:
    BankAccount(string acc, double bal, int p) : accountNumber(acc), balance(bal), pin(p) {}
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;}
    }
    void withdraw(double amount, int enteredPin) {
        if (enteredPin != pin) {
            cout << "Error: Incorrect PIN!" << endl;
        } else if (amount > balance) {
            cout << "Error: Insufficient funds!" << endl;
        } else if (amount <= 0) {
            cout << "Error: Invalid withdrawal amount!" << endl;
        } else {
            balance -= amount;
            cout << "Withdrawn: $" << amount << endl;
        }
    }
    double getBalance() const {
        return balance;
    }
};
int main() {
    BankAccount myAccount("ACC12345", 1000.0, 5566);
    cout << "Initial Balance: $" << myAccount.getBalance() << endl;
    myAccount.deposit(500.0);
    cout << "Balance after deposit: $" << myAccount.getBalance() << endl;
    cout << "\nAttempting withdrawal with wrong PIN:" << endl;
    myAccount.withdraw(200.0, 1111);
    cout << "\nAttempting withdrawal with correct PIN:" << endl;
    myAccount.withdraw(300.0, 5566);
    cout << "Final Balance: $" << myAccount.getBalance() << endl;
    cout << "\nAttempting to overdraw:" << endl;
    myAccount.withdraw(5000.0, 5566);
    return 0;
}