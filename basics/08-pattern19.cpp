#include <iostream>
using namespace std;

//       *
//     * *
//   * * *
// * * * *

int main()
{

    int n;
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        // space print karlo
        int space = 1;
        while (space <= n - i)
        {
            cout << " ";
            space++;
        }
        // stars print karlo
        int j = 1;
        while (j <= i)
        {
            cout << "*";
            j++;
        }
        i++;
        cout << endl;
    }
}