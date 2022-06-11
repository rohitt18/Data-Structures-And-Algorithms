#include <iostream>
using namespace std;

int main()
{
    // IMPORTANT CONCEPT
    //  Pointer Arithmetic

    int i = 3;
    int *p = &i;

    cout<<(*p)++<<endl;
    cout<<*p<<endl;

    *p = *p + 1;
    cout<<*p<<endl;
    cout<<"before p "<<p<<endl;

    p = p + 1;
    cout<<"after p "<<p<<endl;

    return 0;


}