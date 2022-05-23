#include <iostream>
using namespace std;

// 1 => Even
// 0 => Odd
bool isEven(int n)
{
    if (n % 2 == 0) // alternative if(n&1) bec koi bhi no. ka &1 true ho toh voh odd no hota hai
    {
        return 1;
    }
    return 0;
}

int main()
{

    int n;
    cin >> n;

    if (isEven(n))
    {
        cout << n << " is Even" << endl;
    }
    else
        cout << n << " is Odd" << endl;
    return 0;
}