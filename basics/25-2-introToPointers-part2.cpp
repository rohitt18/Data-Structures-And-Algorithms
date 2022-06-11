#include <iostream>
using namespace std;

int main()
{
    // pointer to int is created, and pointing to some garbage address
    // int *p;

    // int *p=0;

    // cout<<*p<<endl;


    // int i=5;
    // // int *p = &i;

    // int *p = 0;
    // p=&i;
    
    // cout<<p<<endl;
    // cout<<*p<<endl;



    int num = 5;
    // int a1 = num;
    // a1++;

    // cout<<num<<endl;


    // int *p = &num;
    // int a2 = *p;
    // a2++;

    // cout<<*p<<endl;


    int *p = &num;
    cout<<"before "<<num<<endl;

    (*p)++; 
    cout<<"after "<<num<<endl;


    // copying 1 pointer to another
    int *q = p;
    cout<<p<<" "<<q<<endl;
    cout<<*p<<" " << *q<<endl;

    return 0;
}