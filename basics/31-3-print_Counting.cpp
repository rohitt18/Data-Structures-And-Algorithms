#include <iostream>
using namespace std;

void print(int n){

    // base case
    if(n==0){
        return;
    }

    // print (processing)
    cout << n <<" ";

    // recursive relation
    print(n-1);
}

int main()
{
    int n;
    cin >> n;

    print(n);

    return 0;
}