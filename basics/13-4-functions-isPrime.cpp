#include <iostream>
using namespace std;

// 1 => Prime
// 0 => Not Prime
bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i != 0)
        {
            return 0;
        }
    }
    return 1; // hamesha return 0 wala statement pehle ayega fir hi return 1 wala ayega last mai varna error
}

int main()
{
    int n;
    cin >> n;

    if (isPrime(n))
    {
        cout << "Prime" << endl;
    }
    else
    {
        cout << "Not Prime" << endl;
    }
}