class Solution
{
public:
    void segregateElements(int arr[], int n)
    {
        // If array contains 0 or 1 element then return the same array as the ans
        if (n == 0 || n == 1)
        {
            return;
        }

        // Create an empty array to store result
        int temp[n];

        // Traversal array and store +ve element in
        // temp array
        int i = 0; // index of temp
        for (int j = 0; j < n; j++)
        {
            if (arr[j] >= 0)
            {
                temp[i] = arr[j];
                i++;
            }
        }

        // Traversal array and store -ve element in
        // temp array
        for (int j = 0; j < n; j++)
        {
            if (arr[j] < 0)
            {
                temp[i] = arr[j];
                i++;
            }
        }
        // Now all my +ve & -ve elements are stored into the temp array
        // So i will have to move those into the original array
        for (int x = 0; x < n; x++)
        {
            arr[x] = temp[x];
        }
    }
};