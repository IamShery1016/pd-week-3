#include <iostream>
using namespace std;

main()
{
    int number;
    cout<<"Enter your four digit numbers:";
    cin>>number;
    int num1=number%10;
   int d1=number/10;
    int num2=d1%10;
   int d2=d1/10;
   int num3=d2%10;
   int d3=d2/10;
   int num4=d3%10;
   int total=num1+num2+num3+num4;
   cout<<"Your sum is:"<<total;
}