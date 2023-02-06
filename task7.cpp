#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

main()
{
    float vegetablePrice = 0.194;
    float fruitPrice = 19.4;
    int fruit;
    int vegetable;
    cout << "Enter vegetable in kg:";
    cin >> vegetable;
    cout << "Enter fruit in kg:";
    cin >> fruit;
    float vegetablecost = vegetablePrice * vegetable;
    cout << "Your vegetable price is:" << vegetablecost;
    float fruitcost = fruitPrice * fruit;
    cout << "Your fruit cost is:" << fruitcost;
    float total = vegetablecost + fruitcost;
    cout << "Your total price in coins is:" << total;
    float total1 = total / 1.94;
    cout << "Your final price in euro is:" << total1;
}