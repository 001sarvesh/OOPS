// Define a class Bill and define its member function get() to take detail of customer ,
// calculateBill() function to calculate electricity bill using below tariff :
// Upto 100 unit RS. 1.20 per unit
// From 100 to 200 unit RS. 2 per unit
// Above 200 units RS. 3 per unit.

#include <bits/stdc++.h>
using namespace std;

class Bill {
private:
    string customerName;
    int units;

public:
    void get() {
        cout << "Enter customer name: ";
        cin >> customerName;
        cout << "Enter number of units consumed: ";
        cin >> units;
    }

    float calculateBill() {
        float bill = 0.0;

        if (units <= 100) {
            bill = units * 1.20;
        } else if (units <= 200) {
            bill = (100 * 1.20) + ((units - 100) * 2.0);
        } else {
            bill = (100 * 1.20) + (100 * 2.0) + ((units - 200) * 3.0);
        }

        return bill;
    }

    void displayBill() {
        float totalBill = calculateBill();
        cout << "Customer Name: " << customerName << endl;
        cout << "Units Consumed: " << units << endl;
        cout << "Total Bill: Rs. " << totalBill << endl;
    }
};

int main() {
    Bill bill;
    bill.get();
    bill.displayBill();
    return 0;
}
