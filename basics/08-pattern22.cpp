#include <iostream>
using namespace std;

// 1 1 1 1
//   2 2 2
//     3 3
//       4

int main()
{

    int n;
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        int space = 1;
        while (space <= i - 1)
        {
            cout << " ";
            space++;
        }
        int j = 1;
        while (j <= n - i + 1)
        {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
}