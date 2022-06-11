#include <iostream>
using namespace std;

int main()
{
    int num = 5;

    cout<<num<<endl;

    // address of Operator - &
    cout<<"adress of num is "<<&num<<endl;

    int *ptr = &num;

    cout<<"adress is : "<< ptr << endl;
    cout << "value is : " << *ptr << endl;


    double d = 4.2;
    double *p2 = &d;

    cout<<"adress is : "<< p2 << endl;
    cout << "value is : " << *p2 << endl;

    cout<<"size of integer is "<<sizeof(num)<<endl;
    cout<<"size of pointer ptr is "<<sizeof(ptr)<<endl;
    cout<<"size of pointer p2 is "<<sizeof(p2)<<endl;

    return 0;
}