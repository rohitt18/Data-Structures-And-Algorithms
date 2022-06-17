#include <iostream>
using namespace std;

int main()
{
    int row;
    cin >> row;

    int col;
    cin >> col;

    // creating a 2D array
    int** arr = new int* [row];
    // har row ke liye kuch col daal rahe hai
    for(int i=0;i<row;i++){
        arr[i] = new int[row];
    }
    // creation DONE

    // taking inputs 
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    // printing the 2d array
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    return 0;
}