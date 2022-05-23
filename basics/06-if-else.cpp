#include <iostream>
using namespace std;

// if - else condition

// int main()
// {
//     int a;
//     cin >> a;

//     // if a is positive
//     if (a > 0)
//     {
//         cout << "A is positive" << endl;
//     }
//     else
//     {
//         cout << "A is negative" << endl;
//     }
// }

// int main()
// {
//     int a, b;
//     cin >> a >> b;

//     cout << "value of a and b is " << a << " " << b << endl;
// }

// int main()
// {
//     int a, b;
//     cout << "Enter the value of a" << endl;
//     cin >> a;
//     cout << "Enter the value of b" << endl;
//     cin >> b;

//     if (a > b)
//     {
//         cout << "A is greater" << endl;
//     }
//     else
//     {
//         cout << "B is greater" << endl;
//     }
// }

int main()
{
    int a;
    cout << "enter the value of a " << endl;
    cin >> a;
    if (a > 0)
    {
        cout << "A is positive";
    }
    else if (a < 0)
    {
        cout << "A is negative";
    }
    else
    {
        cout << "A is 0";
    }
}
