#include <iostream>
using namespace std;

// * * * *
// * * * *
// * * * *
// * * * *

int main()
{
    int n;
    cin >> n;

    int i = 1;
    // agar 0 se chalu karoge toh i<n lagana condition mai

    // har row ke liye
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << "*";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}
