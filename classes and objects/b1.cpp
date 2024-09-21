// Define a class Complex to represent a complex number. Declare instance member
// variables to store real and imaginary part of a complex number, also define instance
// member functions to set values of complex number and print values of complex
// number

#include <bits/stdc++.h>
using namespace std;

class Complex{
    private:
    double real; //instance variable for real
    double img; // instance variable for imaginary

    public: 
    void setValues(double r, double i){
        real = r;
        img = i;
    }

    void PrintValues(){
        if(img >= 0){
            cout<<real <<" + " << img << "i" <<endl;
        }
        else{
            cout<< real << " - " << -img<<"i" <<endl;
        }
    }
};

int main(){
    Complex c1;
    c1.setValues(4,2.5);
    c1.PrintValues();

    return 0;
}