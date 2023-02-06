#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

int main()
{
    int weight;
    cout << "Enter your weight:";
    cin >> weight;
    float num = weight * 15;
    cout << "It will take you days:" << num;
}