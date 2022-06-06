#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "Enter the number :";
    cin >>n;

    switch (n)
    {
    case 1:
        cout << n << " is equivalent to " << "January" << endl;
        break;
    case 2:
        cout << n << " is equivalent to " << "February" << endl;
        break;
    case 3:
        cout << n << " is equivalent to " << "March" << endl;
        break;
    case 4:
        cout << n << " is equivalent to " << "April" << endl;
        break;
    case 5:
        cout << n << " is equivalent to " << "May" << endl;
        break;
    case 6:
        cout << n << " is equivalent to " << "June" << endl;
        break;
    case 7:
        cout << n << " is equivalent to " << "July" << endl;
        break;
    case 8:
        cout << n << " is equivalent to " << "August" << endl;
        break;
    case 9:
        cout << n << " is equivalent to " << "September" << endl;
        break;
    case 10:
        cout << n << " is equivalent to " << "October" << endl;
        break;
    case 11:
        cout << n << " is equivalent to " << "November" << endl;
        break;
    case 12:
        cout << n << " is equivalent to " << "December" << endl;
        break;
    }

    return 0;
}