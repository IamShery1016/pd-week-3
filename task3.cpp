#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

int main()
{
    int num1, num2, num3, num4, num5;
    cout << "Enter your 1 subject number:";
    cin >> num1;
    cout << "Enter your 2 subject number:";
    cin >> num2;
    cout << "Enter your 3 subject number:";
    cin >> num3;
    cout << "Enter your 4 subject number:";
    cin >> num4;
    cout << "Enter your 5 subject number:";
    cin >> num5;
    float result = (num1 + num2 + num3 + num4 + num5) / 500.0;
    float finalresult = result * 100.0;
    cout << "Your final result is:" << finalresult;
}