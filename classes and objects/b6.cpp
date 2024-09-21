// Define a class Square to find the square of a number and write a C++ program to
// Count number of times a function is called.

#include <bits/stdc++.h>
using namespace std;

class Square {
private:
    static int count;

public:
    int findSquare(int num) {
        count++;
        return num * num;
    }

    static int getCount() {
        return count;
    }
};

int Square::count = 0;

int main() {
    Square obj;
    int num;

    cout << "Enter a number: ";
    cin >> num;

    int square = obj.findSquare(num);
    cout << "The square of " << num << " is: " << square << endl;
    cout << "Function called " << Square::getCount() << " times." << endl;

    return 0;
}
