#include <iostream>
using namespace std;

// Approach 1 : Brute force O(n2)
// bool pairSum(int arr[],int n,int k){
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]+arr[j]==k){
//                 cout<<i<<" "<<j<<endl;
//                 return true;
//             }
//         }
//     }
//     return false;
// }


// Approach 1 : 2-pointer-approach O(n)
bool pairSum(int arr[],int n, int k){
    int low=0;
    int high=n-1;
    while(low<high){
        if(arr[low]+arr[high]==k){
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if(arr[low]+arr[high]>k){
            high--;
        }
        else if(arr[low]+arr[high]<k){
            low++;
        }
    }
    return false;
}


int main()
{
    int n;
    cin >> n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int k;
    cin>>k;

    cout << pairSum(arr, n, k) << endl;

    return 0;
}