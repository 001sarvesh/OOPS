// . Define a class Area and define instance member functions to find the area of the
// different shapes like square, rectangle , circle etc

#include <bits/stdc++.h>
using namespace std;

class Area {
public:
    int findSquareArea(int side) {
        return side * side;
    }

    int findRectangleArea(int length, int width) {
        return length * width;
    }

    double findCircleArea(double radius) {
        return 3.14 * radius * radius;
    }
};

int main() {
    Area obj;
    int choice;
    
    cout << "Choose the shape to find the area:\n";
    cout << "1. Square\n";
    cout << "2. Rectangle\n";
    cout << "3. Circle\n";
    cin >> choice;

    if(choice == 1) {
        int side;
        cout << "Enter the side of the square: ";
        cin >> side;
        int area = obj.findSquareArea(side);
        cout << "The area of the square is: " << area << endl;
    } 
    else if (choice == 2) {
        int length, width;
        cout << "Enter the length and width of the rectangle: ";
        cin >> length >> width;
        int area = obj.findRectangleArea(length, width);
        cout << "The area of the rectangle is: " << area << endl;
    } 
    else if (choice == 3) {
        double radius;
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        double area = obj.findCircleArea(radius);
        cout << "The area of the circle is: " << area << endl;
    }
    else {
        cout << "Invalid choice." << endl;
    }

    return 0;
}
