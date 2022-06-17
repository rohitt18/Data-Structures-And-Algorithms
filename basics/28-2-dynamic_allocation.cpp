#include <iostream>
using namespace std;

int getSum(int *arr,int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    return sum;
}

int main()
{
    // char ch = 'q';
    // cout << sizeof(ch) << endl;

    // char* c = &ch;
    // cout << sizeof(c) << endl;

    int n;
    cin>>n;

    // variable size input
    int* arr = new int[n];

    // taking inputs in array
    for(int i=0;i<n;i++){
        cin>>arr[i]; 
    }

    int ans = getSum(arr,n);

    cout<<" answer is "<<ans<<endl;

// case 1
    while(1){
        int i = 5;
    }

// case 2 
    while(1){
        int* ptr = new int;
    }


    return 0;
}