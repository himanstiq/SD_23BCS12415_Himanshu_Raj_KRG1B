#include <bits/stdc++.h>
using namespace std;

class deposit
{
private:
    int balance;

public:
    deposit(int amount) : balance(amount) {}
    void addAmount(int amount)
    {
        balance += amount;
    }
    int getBalance() const
    {
        return balance;
    }
};

class withdraw
{
private:
    int balance;

public:
    withdraw(int amount) : balance(amount) {}

    void removeAmount(int amount)
    {
        balance -= amount;
    }

    int getBalance() const
    {
        return balance;
    }
};

int main()
{
    deposit d(1000);
    d.addAmount(500);

    withdraw w(1000);
    w.removeAmount(200);

    cout << "Banking Application Demonstration:" << endl;
    cout << "Deposit balance: " << d.getBalance() << endl;
    cout << "Withdraw balance: " << w.getBalance() << endl;

    return 0;
}