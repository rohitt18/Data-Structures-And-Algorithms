#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // creating a 2D array
    int** arr = new int* [n];
    for(int i=0;i<n;i++){
        arr[i] = new int[n];
    }
    // creation DONE

    // taking inputs
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    // printing the 2d array
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    return 0;
}