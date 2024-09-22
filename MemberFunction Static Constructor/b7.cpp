// Define a class Box and write a program to enter length, breadth and height and
// initialise objects using constructor also define member functions to calculate volume
// of the box.

#include <bits/stdc++.h>
using namespace std;

class Box {
private:
    float length;
    float breadth;
    float height;

public:
    // Constructor to initialize the dimensions of the box
    Box(float l, float b, float h) {
        length = l;
        breadth = b;
        height = h;
    }

    // Member function to calculate the volume of the box
    float calculateVolume() {
        return length * breadth * height;
    }
};

int main() {
    float length, breadth, height;

    cout << "Enter length of the box: ";
    cin >> length;
    cout << "Enter breadth of the box: ";
    cin >> breadth;
    cout << "Enter height of the box: ";
    cin >> height;

    Box box(length, breadth, height);

    float volume = box.calculateVolume();
    cout << "Volume of the box: " << volume << endl;

    return 0;
}
