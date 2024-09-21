// Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
// number of instance member variables and also define instance member functions to
// set values for time and display values of time.

#include<bits/stdc++.h>
using namespace std;

class Time{
    private:
    int hours;
    int minutes;
    int seconds;

    public: 
    //member function to set the time values
    void setTime(int h,int m, int s){
        hours = h + (m/60) + (s/3600);
        minutes = (m + (s/60))%60;
        seconds = s%60;
    }

    void DisplayTime(){
        cout<<hours<<" hr" <<minutes<<"min"<<seconds<<"sec"<<endl;
    }
};

int main(){
    Time t1;

    t1.setTime(3,45,20);
    t1.DisplayTime();
    return 0;
}