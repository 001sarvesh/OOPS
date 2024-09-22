// Define a class Date and write a program to Display Dateand initialise date object
// using Constructors

#include <bits/stdc++.h>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    // Constructor to initialize date
    Date(int d = 1, int m = 9, int y = 2024) : day(d), month(m), year(y) {
        cout << "Date has been initialized: " << day << "/" << month << "/" << year << endl;
    }

    // Method to increment the day
    void increment() {
        day++;
        // Simple logic to handle month overflow (not comprehensive)
        if (day > 30) { // Assumes 30 days for simplicity
            day = 1;
            month++;
            if(month > 12) {
                month = 1;
                year++;
            }
        }
    }
    // Method to display the date
    void display() {
        cout << "Value of Date is: " << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    Date d; // Initialize with default date
    d.display();

    // Increment the date multiple times
    for(int i = 0; i < 99; ++i) { // Incrementing 99 times for testing
        d.increment();
    }

    d.display(); // Show the updated date

    return 0;
}




// #include <bits/stdc++.h>
// using namespace std;

// class Date{
//     private:
//     int date;

//     public:
//     Date() : date(0){
//         cout<<"Date has been initialized :"<<date<<endl;
//     }
//     void increment(){
//         date++;
//     }
//     void display(){
//         cout<<"Value of Date is :"<<date<<endl;
//     }
// };

// int main(){
//     Date d;
//     d.display();

//     d.increment();
//     d.increment();
//     d.increment();
//      d.increment();
//     d.increment();
//     d.increment();

//     d.display();

//     return 0;
// }