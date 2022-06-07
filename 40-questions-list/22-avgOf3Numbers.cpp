#include<iostream>
using namespace std;

void printAverage(int a,int b,int c){
    cout<<(a+b+c)/3<<endl;
}

int main()
{
    int a,b,c;
    cout<<"Enter the values of a,b & c "; 
    cin>>a>>b>>c;

    printAverage(a,b,c);

    return 0;
}
