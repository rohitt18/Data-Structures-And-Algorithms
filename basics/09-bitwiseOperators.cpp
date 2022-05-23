#include <iostream>
using namespace std;

int main()
{
    // AND(&) , OR(|) , NOR(~) , XOR(^)

    int a = 4;
    int b = 6;

    cout << " a&b " << (a & b) << endl;
    cout << " a|b " << (a | b) << endl;
    cout << " ~a " << (~a) << endl;
    cout << " a^b " << (a ^ b) << endl;

    // Right & left shift

    cout << (17 >> 1) << endl;
    cout << (17 >> 2) << endl;
    cout << (19 << 1) << endl;
    cout << (21 << 2) << endl;

    // post & pre increment/decrement

    int i = 7;

    cout << ++i << endl;
    cout << i++ << endl;
    cout << i-- << endl;
    cout << --i << endl;
}