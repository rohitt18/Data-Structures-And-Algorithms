#include <iostream>
using namespace std;

// * * * *
//   * * *
//     * *
//       *

int main()
{

    int n;
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        // space print karlo
        int space = 1;
        while (space <= i - 1)
        {
            cout << " ";
            space++;
        }
        // stars print karlo
        int stars = 1;
        while (stars <= n - i + 1)
        {
            cout << "*";
            stars++;
        }
        cout << endl;
        i++;
    }
}