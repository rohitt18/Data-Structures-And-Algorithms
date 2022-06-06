#include <iostream>
using namespace std;

void printTable(int n)
{
    for(int i=1;i<=10;i++){
        cout<<i*n<<" ";
    }cout<<endl;
}

int main()
{
    int n;
    cin >> n;

    printTable(n);
   
}