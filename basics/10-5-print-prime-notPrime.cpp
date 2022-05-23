#include <iostream>
using namespace std;

// Prime or Not
// 7

int main()
{
    int n;
    cout << "enter a no. :";
    cin >> n;

    bool isPrime = 1;

    for (int i = 2; i < n; i++)
    {
        // rem = 0 , Not a Prime
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
        // else
        // {
        //     // rem != 0 , Maybe Prime
        // }
    }
    if (isPrime)
    {
        cout << "Prime Number";
    }
    else
    {
        cout << "Not a Prime Number";
    }
}