#include <iostream>
using namespace std;

int getSum(int *arr, int n){

    cout << endl << "Size : " << sizeof(arr) << endl;

    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    return sum;
}

// int arr[] or int *arr ==> both of them are the same
// arr[i] or i[arr] ==> both of them are the same

int main()
{
    int arr[5] = {1,2,3,4,5};

    cout << "Sum is " << getSum(arr+3,2);

    return 0;
}