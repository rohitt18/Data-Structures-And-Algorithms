#include <iostream>
using namespace std;

// int main()
// {

//     int a, b;
//     cout << "Enter the values of a & b ";
//     cin >> a >> b;

//     int ans = 1;

//     for (int i = 1; i <= b; i++)
//     {
//         ans = ans * a;
//     }
//     cout << "Answer is " << ans << endl;
//     return 0;
// }

// OR

int power()
{
    int a, b;
    cin >> a >> b;

    int ans = 1;

    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}

int main()
{

    int answer = power();
    cout << "answer is " << answer << endl;
    int answer1 = power();
    cout << "answer is " << answer1 << endl;
    int answer2 = power();
    cout << "answer is " << answer2 << endl;
}