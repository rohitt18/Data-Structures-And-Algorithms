#include <iostream>
using namespace std;

// sum of 1-n;

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int sum = 0;

    cout << "Printing sum from 1 to " << n << endl;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << sum << endl;
}