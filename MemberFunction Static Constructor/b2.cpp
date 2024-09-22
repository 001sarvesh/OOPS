// Define a class Time to represent a time with instance variables h,m and s to store
// hour, minute and second. Also define following member functions
// a. void setTime(int,int,int)
// b. void showTime()
// c. void normalize()
// d. Time add(Time)

#include<bits/stdc++.h>
using namespace std;

class Time{
    private:
    int h;
    int m;
    int s;

    public:
    void setTime(int hour,int min, int sec){
        h = hour;
        m = min;
        s = sec;
        normalize(); // normalize the time
    }
    void showTime(){
        cout<< h << "hours" << m <<"minutes, " << s << "seconds" << endl;
    }

    void normalize(){
        if(s >= 60){
            m += s/60;
            s = s%60;
        }
        if(m>=60){
            h += m/60;
            m = m%60;
        }
    }

    Time add(Time t){
        Time total;
        total.s = s + t.s;
        total.m = m + t.m;
        total.h = h + t.h;
        total.normalize();
        return total;
    }
};

int main(){
    Time t1,t2,t3;

    t1.setTime(2,35,30);
    t2.setTime(1,3,45);

    cout<<"Time 1:";
    t1.showTime();

    cout<<"Time 2: ";
    t2.showTime();

    t3 = t1.add(t2);

    cout<<"Sum of Time 1 and Time 2: ";
    t3.showTime();
    return 0;
}