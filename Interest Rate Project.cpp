#include <iostream>

using namespace std;
double getBalance (int amount, double rate, int y);

int main()
{
    int deposit = 0;
    double interestRate = 0.0;
    double acctBalance = 0.0;

    cout << "Deposits";
    cin >> deposit;
    cout << "Rate (in decimal form): " ;
    cin >> interestRate;

    cout << fixed << setprecision(2);
    for (int year = 1; year < 4; year += 1)
    (
        acctBalance = getBalance(deposit, interestRate, year);
        cout << "Year" << year << ": 0"
        << acctBalance << endl;
     )
    return 0;
}

double getBalance(int amount, double rate; int y)
{
    double balance = 0.0;
    balance = amount * pow((1 + rate), y);
    return balance;
}
