#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number : ";
    cin>>n;

    int i = 2;
    while(i<=n){
        cout<<i<<" ";
        i+=2;
    }

    return 0;
}