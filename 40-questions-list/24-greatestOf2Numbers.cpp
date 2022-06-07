#include <iostream>
using namespace std;


int greatestNumber(int a,int b)
{
   if(a>b){
       return a;
   }
   return b;
}

int main()
{
    int a;
    int b;
    cout << "Enter the value of a & b ";
    cin>>a>>b;

    int ans = greatestNumber(a, b);
    cout<<ans;

    return 0;
}