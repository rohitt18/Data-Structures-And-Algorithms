#include <iostream>
using namespace std;

double circumference(int r)
{
    return 2 * 3.14 * r;
}

int main()
{
    int radius;
   
    cout << "Enter the radius ";
    cin >> radius;

    double ans = circumference(radius);
    cout << ans;

    return 0;
}