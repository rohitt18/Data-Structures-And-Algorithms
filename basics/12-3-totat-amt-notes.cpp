#include <iostream>
using namespace std;

int main()
{
    int amount;
    cout << "Enter the total amount ";
    cin >> amount;
    int x, y, z, a;

    cout << endl;

    switch (1)
    {
    case 1:
        x = amount / 100;
        amount = amount - 100 * x;
        cout << "No of 100 rupee notes are : " << x << endl;

    case 2:
        y = amount / 50;
        amount = amount - 50 * y;
        cout << "No of 50 rupee notes are : " << y << endl;

    case 3:
        z = amount / 20;
        amount = amount - 20 * z;
        cout << "No of 20 rupee notes are : " << z << endl;

    case 4:
        a = amount / 1;
        amount = amount - a;
        cout << "No of 1 rupee notes are : " << a << endl;
    }

    // switch (1)
    // {
    // case 1:
    //     x = amount / 100;
    //     amount = amount % 100;
    //     cout << "No of 100 rupee notes are : " << x << endl;

    // case 2:
    //     y = amount / 50;
    //     amount = amount % 50;
    //     cout << "No of 50 rupee notes are : " << y << endl;

    // case 3:
    //     z = amount / 20;
    //     amount = amount % 20;
    //     cout << "No of 20 rupee notes are : " << z << endl;

    // case 4:
    //     a = amount / 1;
    //     amount = amount % 1;
    //     cout << "No of 1 rupee notes are : " << a << endl;
    // }

    return 0;
}