#include <iostream>
using namespace std;

// int main()
// {
//     int a, b = 1;
//     a = 10;
//     if (++a)
//     {
//         cout << b;
//     }
//     else
//     {
//         cout << ++b;
//     }
// }

// int main()
// {
//     int a = 1;
//     int b = 2;

//     if (a-- > 0 && ++b > 2)
//     {
//         cout << "Stage 1 - Inside if" << endl;
//     }
//     else
//     {
//         cout << "Stage 2 - Inside else" << endl;
//     }
//     cout << a << " " << b << endl;
// }

int main()
{
    int a = 1;
    int b = 2;

    if (a-- > 0 || ++b > 2)
    // agar pehla hi condition true hua toh dusra check bhi nahi karega aur code execute ho jayega bec || operator hai
    {
        cout << "Stage 1 - Inside if" << endl;
    }
    else
    {
        cout << "Stage 2 - Inside else" << endl;
    }
    cout << a << " " << b << endl;
}

// int main()
// {
//     int number = 3;
//     cout << (25 * (++number));
// }

// int main()
// {
//     int a = 1;
//     int b = a++;
//     int c = ++a;
//     cout << b << endl;
//     cout << c << endl;
// }
