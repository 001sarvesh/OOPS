// Define a class Factorial and define an instance member function to find the Factorial
// of a number using class.

#include <bits/stdc++.h>
using namespace std;

class Factorial{
    public:
    int findFactorial(int n){
        if(n == 0 || n == 1) {
            return 1; 
        }
        return n * findFactorial(n - 1);
    }
};

int main(){
    Factorial f;

    int num;
    cout<<"Enter a Number ";
    cin>>num;

    int result = f.findFactorial(num);

    cout<<"Factorial of "<< num << "is : "<<result<<endl;

    return 0;
}