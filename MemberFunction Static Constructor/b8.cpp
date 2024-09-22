// Define a class Bank and define member functions to read principal , rate of interest
// and year. Another member functions to calculate simple interest and display it.
// Initialise all details using constructor.

#include <bits/stdc++.h>
using namespace std;

class Bank {
private:
    float principal;
    float rate;
    int years;

public:
    Bank(float p, float r, int y) {
        principal = p;
        rate = r;
        years = y;
    }

    float calculateSimpleInterest() {
        return (principal * rate * years) / 100;
    }

    void displaySimpleInterest() {
        float interest = calculateSimpleInterest();
        cout << "Simple Interest: " << interest << endl;
    }
};

int main() {
    float principal;
    float rate;
    int years;

    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter rate of interest: ";
    cin >> rate;
    cout << "Enter number of years: ";
    cin >> years;

    Bank bank(principal, rate, years);
    bank.displaySimpleInterest();

    return 0;
}
