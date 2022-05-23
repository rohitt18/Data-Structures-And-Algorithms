#include <iostream>
using namespace std;

int main()
{

    // Print 1 to n
    // print 1 2 3 4 ... n

    // int n;
    // cin >> n;
    // int i = 1;
    // while (i <= n)
    // {
    //     cout << i << " ";
    //     i = i + 1;
    // }

    // Print sum of n numbers
    // print 1 + 2 + 3 + 4 + 5 +... + n

    // int n;
    // cout << "Enter the value of n ";
    // cin >> n;
    // int i = 1;
    // int sum = 0;
    // while (i <= n)
    // {
    //     sum = sum + i;
    //     i = i + 1;
    // }
    // cout << "Value of sum is : " << sum;

    // Print sum of all even no.s

    // Print Farhanite to degree celcius table

    // Prime or not?

    int n;
    cin >> n;

    int i = 2;

    while (i < n)
    {
        // divide ho gaya, not prime
        if (n % i == 0)
        {
            cout << "Not Prime for " << i << endl;
        }
        else
        {
            cout << "Prime for " << i << endl;
        }
        i = i + 1;
    }
}