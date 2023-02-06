#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

main()
{
    int pound;
    cout << "Enter size of bag in pounds:";
    cin >> pound;
    int cost;
    cout << "Enter the cost of bag";
    cin >> cost;
    int area;
    cout << "Enter area in square feet covered in bag:";
    cin >> area;
    float cost2 = cost / pound;
    cout << "cost of fertilizer per pound:" << cost2;
    float area2 = pound * area;
    cout << "Cost of fertilizing the area per square feet:" << area2;
}