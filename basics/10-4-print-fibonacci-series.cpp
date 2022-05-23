#include <iostream>
using namespace std;

// Fibonacci Series
// 0 1 1 2 3 5 8 13 21

int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;

    int a = 0, b = 1;
    cout << a << " " << b << " ";
    for (int i = 1; i <= n; i++)
    {
        int nextNumber = a + b;
        cout << nextNumber << " ";

        a = b;
        b = nextNumber;
    }
}