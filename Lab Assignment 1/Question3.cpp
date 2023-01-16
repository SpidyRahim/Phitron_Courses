#include <iostream>
using namespace std;

int merge(int arr[], int left[], int leftSize, int right[], int rightSize, int k)
{
    int i = 0, j = 0, count = 0;
    while (i < leftSize && j < rightSize)
    {
        if (left[i] + right[j] < k)
        {
            i++;
        }
        else if (left[i] + right[j] > k)
        {
            j++;
        }
        else
        {
            int l = i, r = j;
            // increment count for all pairs that sum to k
            while (l < leftSize && left[l] + right[j] == k)
            {
                count++;
                l++;
            }
            while (r < rightSize && left[i] + right[r] == k)
            {
                count++;
                r++;
            }
            i = l;
            j = r;
        }
    }
    return count;
}

int mergeSort(int arr[], int size, int k)
{
    if (size < 2)
    {
        return 0;
    }
    int mid = size / 2;
    int left[mid];
    int right[size - mid];
    int i;
    for (i = 0; i < mid; i++)
    {
        left[i] = arr[i];
    }
    for (i = mid; i < size; i++)
    {
        right[i - mid] = arr[i];
    }
    int count = 0;
    count += mergeSort(left, mid, k);
    count += mergeSort(right, size - mid, k);
    count += merge(arr, left, mid, right, size - mid, k);
    return count;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    int count = mergeSort(arr, n, k);
    cout << count << endl;
    return 0;
}