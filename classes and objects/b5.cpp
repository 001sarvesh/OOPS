// Define a class ReverseNumber and define an instance member function to find
// Reverse of a Number using class.

#include <bits/stdc++.h>
using namespace std;

class ReverseNumber {
public:
    int findReverse(int num) {
        int reverse = 0;
        while (num > 0) {
            reverse = reverse * 10 + num % 10;
            num /= 10; 
        }
        return reverse;
    }
};

int main() {
    ReverseNumber obj;

    int number;
    cout << "Enter a number: ";
    cin >> number;

    int reversed = obj.findReverse(number);
    
    cout << "The reverse of " << number << " is: " << reversed << endl;

    return 0;
}
