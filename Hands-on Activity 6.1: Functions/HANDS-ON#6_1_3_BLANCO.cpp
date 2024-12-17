#include <iostream>
#include <cmath>
using namespace std;

double convert(double amount, double rate, bool toPesos)
{
    return toPesos ? amount * rate : amount / rate;
}

int main()
{
    double amount;
    float rate = 58.99;
    char choice;

    cout << "Enter amount: ";
    cin >> amount;
    cout << "Convert to (P)esos or (D)ollars?: ";
    cin >> choice;

    cout << "Converted: " << (choice == 'P' ? convert(amount, rate, true) : convert(amount, rate, false)) << endl;

    return 0;
}

