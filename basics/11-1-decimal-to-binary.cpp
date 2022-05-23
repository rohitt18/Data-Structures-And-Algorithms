#include <iostream>
#include <math.h>
using namespace std;

// Decimal to Binary

int main()
{
    int n;
    cin >> n;

    int ans = 0;

    int i = 0;

    while (n != 0)
    {
        int bit = n & 1;

        ans = (bit * pow(10, i)) + ans;

        n = n >> 1;
        i++;
    }
    cout << "Answer is " << ans << endl;
}