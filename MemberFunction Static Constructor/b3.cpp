// Define a class Cube and calculate Volume of Cube and initialise it using constructor

#include<bits/stdc++.h>
using namespace std;

class Cube{
    private:
    int side;

    public:
    //constructor to initialize the side
    Cube(int x) : side(x){

    }
    //method to caluclate volume
    int calVolume(){
        int volume = side*side*side;
        return volume;
    }
};

int main(){
    Cube c(5);
    cout<<"Volume of the cube : "<<c.calVolume() <<endl;
    return 0;
}