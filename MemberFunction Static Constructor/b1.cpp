// Define a class Complex to represent a complex number with instance variables a and
// b to store real and imaginary parts. Also define following member functions
// a. void setData(int,int)
// b. void showData()
// c. Complex add(Complex)

#include <bits/stdc++.h>
using namespace std;

class Complex{
    private:
    int a;
    int b;

    public: 
    //function to set data fro real and img part
    void setData(int real , int imag){
        a = real;
        b = imag;
    }

    void showData(){
        cout<< "Complex number : "<< a << " + " << b <<"i"<<endl;
    }

    Complex add(Complex c){
        Complex temp;
        temp.a = a + c.a; // adding real parts
        temp.b = b + c.b; // adding imag part
        return temp;
    }
};

int main(){
    Complex c1,c2,c3;

    c1.setData(3,4);
    c2.setData(5,6);

    //Adding
    c3 = c1.add(c2);

    c1.showData();
    c2.showData();
    c3.showData();

    return 0;
}