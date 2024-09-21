// Define a class LargestNumber and define an instance member function to find the
// Largest of three Numbers using the class.

#include <bits/stdc++.h>
using namespace std;

class LargestNumber {
public:
    int findLargest(int a, int b, int c) {
        if (a >= b && a >= c)
            return a;
        else if (b >= a && b >= c)
            return b;
        else
            return c;
    }
};

int main() {
    LargestNumber object;

    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    int largest = object.findLargest(num1, num2, num3);
    
    cout << "The largest number is: " << largest << endl;

    return 0;
}
