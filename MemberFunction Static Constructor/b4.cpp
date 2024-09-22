// Define a class Counter and Write a program to Show Counter using Constructor.

#include <bits/stdc++.h>
using namespace std;

class Counter{
    private:
    int cnt;

    public:
    //constructor that initialize the count 0
    Counter() : cnt(0){
        cout<<"Counter initialized to "<<cnt<<endl;
    }
    void increase(){
        cnt++;
    }
    void display(){
        cout<<"Current count: "<<cnt<<endl;
    }
};

int main(){
    Counter c; // counter obj
    c.display();

    c.increase();
    c.increase();
    c.increase();
    c.increase();
    c.increase();

    c.display();

    return 0;
}