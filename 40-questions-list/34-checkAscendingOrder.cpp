
#include <iostream>
using namespace std;

bool checkAscending(int arr[],int n){
    int i=0;
    while(i<n){
        if(arr[i]>arr[i+1]){
            return 0;
        }
        if(arr[i]<arr[i+1]){
            i++;
        }
    }
    return 1;
}

int main()
{

    int n;
    cin>>n;

    int arr[n];

    // taking inputs
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    if(checkAscending(arr,n)){
        cout<<"Sorted in ascending order"<<endl;
    }else{
        cout<<"NOT Sorted in ascending order"<<endl;

    }



    return 0;
}