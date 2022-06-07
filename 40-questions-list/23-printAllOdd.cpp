#include <iostream>
using namespace std;

// 1+3+5+7 = 16
// 1+3+5+7+9 = 25

void printAllOdd(int n)
{
    int i =1;
    int sum = 0;
    while(i<=n){
        sum = sum + i;
        i = i + 2;
    }
    cout<<sum<<endl;
}

int main()
{
    int n;
    cout << "Enter the value of n ";
    cin >>n;

    printAllOdd(n);

    return 0;
}
