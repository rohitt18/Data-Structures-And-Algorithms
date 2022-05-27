void selectionSort(vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minKaIndex = i;
        for (int j = i + 1; j <= n - 1; j++)
        {
            if (arr[j] < arr[minKaIndex])
            {
                minKaIndex = j;
            }
        }
        swap(arr[minKaIndex], arr[i]);
    }
}