#include <iostream>
#include<cmath>
#include<windows.h>
using namespace std;

int main(){

    int initialvelocity;
    int accelration;
    int time;
   
    cout<<"Enter your initial velocity:";
    cin>>initialvelocity;
    cout<<"Enter your accelration:";
    cin>>accelration;
    cout<<"Enter your time:";
    cin>>time;
     int finalVelocity=initialvelocity+(accelration*time);
     cout<<"Your final result is:"<<finalVelocity;
}