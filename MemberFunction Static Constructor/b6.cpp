// Define a class student and write a program to enter student details using constructor
// and define member function to display all the details.

#include<bits/stdc++.h>
using namespace std;

class Student{
    private: 
    string name;
    int age;
    string rollNum;

    public:
    //constructor to initialize student details
    Student(string p, int q, string r){
        name = p;
        age = q;
        rollNum = r;
    }
    void Display(){
        cout<<"Student Name: "<<name <<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Roll Number : "<<rollNum<<endl;
    }
};

int main(){
    string name;
    int age;
    string rollNum;

    cout<<"Enter Student Name: ";
    getline(cin,name);
    cout<<"Enter age :";
    cin>>age;
    cin.ignore();
    cout<<"Enter roll NUmber: ";
    getline(cin,rollNum);

    Student student(name,age,rollNum);

    student.Display();
    return 0;
}