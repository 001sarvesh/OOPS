//  Define a class StaticCount and create a static variable. Increment this variable in a
// function and call this 3 times and display the result

#include <bits/stdc++.h>
using namespace std;

class StaticCount {
    static int count; 

public:
    void increment() {
        count++; 
    }

    static void displayCount() {
        cout << "Count: " << count << endl; // Display the current count
    }
};

int StaticCount::count = 0;

int main() {
    StaticCount obj;

    for(int i=0; i<53; i++){
        obj.increment();
    }

    StaticCount::displayCount();

    return 0;
}
