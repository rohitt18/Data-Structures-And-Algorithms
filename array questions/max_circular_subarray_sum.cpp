#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // calculating the sum of orginal array(totalSum)
    int totalSum = 0;
    for(int i=0;i<n;i++){
        totalSum = totalSum + a[i];
    }

    // inverting the a into a2 (matlab saare elements ko -ve kar diya)
    vector<int> a2;

    for(int i=0;i<n;i++){
        a2.push_back(-1*a[i]);
    }

    // applying kadane's algo on reversed sign wala array (a2)
    // that will give the sum of non contributing elements
    int currSum = 0;
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currSum += a2[i];
        maxi = max(maxi, currSum);
        if (currSum < 0)
        {
            currSum = 0;
        }
    }

    // max subarray sum = total sum - sum of non-contributing elements
    cout<<"Max subarray sum is "<< totalSum-(-maxi)<<endl;

    return 0;
}