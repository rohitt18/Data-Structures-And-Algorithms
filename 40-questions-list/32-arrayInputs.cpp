#include <iostream>
using namespace std;

void printArray(int arr[],int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } cout<<endl;

}

int main(){

    int n;
    cin>>n;

    int names[n];

    // taking inputs
    for(int i=0;i<n;i++){
        cin>>names[i];
    }


    printArray(names,n);

    return 0;
}