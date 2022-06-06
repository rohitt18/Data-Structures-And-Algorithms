#include <iostream>
using namespace std;

int main()
{

    int a;
    int b;

    cout<<"Enter the values of a & b ";
    cin>>a>>b;

    char operation;
    cout<<"Enter the operation to be performed : ";
    cin>>operation;

    switch (operation)
    {
    case '+':
        cout<<a+b<<endl;
        break;
    case '-':
        cout<<a-b<<endl;
        break;
    case '*':
        cout<<a*b<<endl;
        break;
    case '/':
        cout<<a/b<<endl;
        break;
    
    case '%':
        cout<<a%b<<endl;
        break;
    
    }

    return 0;
}