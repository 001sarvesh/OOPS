//  Define a class Greatest and define instance member function to find Largest among
// 3 numbers using classes.

#include <bits/stdc++.h>
using namespace std;

class Greatest {
public:
    int findLargest(int num1, int num2, int num3) {
        return max(num1, max(num2, num3));
    }
};

int main() {
    Greatest obj;
    int num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    int largest = obj.findLargest(num1, num2, num3);
    cout << "The largest number is: " << largest << endl;

    return 0;
}
