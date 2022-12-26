#include <iostream>
using namespace std;
int partition(char arr[], int s, int e)
{
    int pivot = arr[s];
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }
    // pivot ke right place e dibo
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);
    // left right part niye kaj korbo
    int i = s, j = e;

    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot) // left e jodi element already pivot er cheye choto hoy tahole kichu kora lagbe na just i++ kore dilam
        {
            i++;
        }
        while (arr[j] > pivot) // same boro hole kichu kora lagbe na just j-- kore pivot er dike gelam
        {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]); // jodi kichu boro kinba choto thake ta swap korbo and i++ kore agabo j-- kore pichabo pivot er dike
        }

        return pivotIndex;
    }
}

void quickSort(char arr[], int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }
    // partition korbo ekhon
    int p = partition(arr, s, e);
    // left side sort korbo recursion diye
    quickSort(arr, s, p - 1);
    quickSort(arr, p + 1, e);
}

int main()
{
    int n;
    cin >> n;
    char arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    quickSort(arr, 0, n - 1); // call kore dilam

    // sorted array k print kore dibo
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}