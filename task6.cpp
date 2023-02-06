#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

main()
{
    string movie;
    int adultticketprice;
    int childticketprice;
    int soldadultprice;
    int soldchildprice;
    cout << "Enter movie name:";
    cin >> movie;
    cout << "Enter adult ticket price:";
    cin >> adultticketprice;
    cout << "Enter child ticket price:";
    cin >> childticketprice;
    cout << "Enter number of adult ticket price:";
    cin >> soldadultprice;
    cout << "Enter number of child ticket sold:";
    cin >> soldchildprice;
    int childtotal = childticketprice * soldchildprice;
    cout << "Child total is:" << childtotal;
    int adulttotal = adultticketprice * soldadultprice;
    cout << "Adult total is:" << adulttotal;
    int final = childtotal + adulttotal;
    cout << "Total amount generated:" << final;
    int donation = final / 10.0;
    cout << "Your donation is:" << donation;
}