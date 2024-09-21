// Define a class Rectangle and define an instance member function to find the area of
// the rectangle.

#include <bits/stdc++.h>
using namespace std;

class Rectangle {
public:
    int findArea(int length, int width) {
        return length * width;
    }
};

int main() {
    Rectangle obj;
    int length, width;

    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;

    int area = obj.findArea(length, width);
    cout << "The area of the rectangle is: " << area << endl;

    return 0;
}
