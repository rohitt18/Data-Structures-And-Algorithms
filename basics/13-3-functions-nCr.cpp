#include <iostream>
using namespace std;

// factorial
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

// nCr
int nCr(int n, int r)
{

    return (factorial(n) / (factorial(r) * factorial(n - r)));
}

int main()
{
    int n, r;
    cin >> n >> r;

    cout << "Answer is " << nCr(n, r) << endl;
}