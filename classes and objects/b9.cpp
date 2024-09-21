// Define a class Circle and define an instance member function to find the area of the
// circle.

#include <bits/stdc++.h>
using namespace std;

class Circle {
public:
    double findArea(double radius) {
        return 3.14 * radius * radius;
    }
};

int main() {
    Circle obj;
    double radius;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    double area = obj.findArea(radius);
    cout << "The area of the circle is: " << area << endl;

    return 0;
}
