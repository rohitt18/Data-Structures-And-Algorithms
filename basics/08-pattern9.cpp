#include <iostream>
using namespace std;

// 1
// 2 3
// 3 4 5
// 4 5 6 7

// int main()
// {
//     int n;
//     cin >> n;

//     int i = 1;

//     while (i <= n)
//     {
//         int j = 1;
//         int count = i;
//         while (j <= i)
//         {
//             cout << count << " ";
//             count++;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// OR

int main()
{
    int n;
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        int j = i;
        while (j < i * 2) // or i+i
        {
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}