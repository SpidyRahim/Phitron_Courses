#include <iostream>
#include <algorithm>
using namespace std;

bool check_subset(int a1[], int a2[], int n1, int n2)
{
    // Sort both arrays
    sort(a1, a1 + n1);
    sort(a2, a2 + n2);

    int i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        // Check if current element in a1 is present in a2
        if (a1[i] < a2[j])
        {
            return false;
        }
        else if (a1[i] == a2[j])
        {
            i++;
        }
        j++;
    }
    // If all elements of a1 are present in a2
    if (i == n1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n1, n2;
    //cout << "Enter the size of first array: ";
    cin >> n1;
    int a1[n1];
    //cout << "Enter the elements of first array: ";
    for (int i = 0; i < n1; i++)
    {
        cin >> a1[i];
    }
    //cout << "Enter the size of second array: ";
    cin >> n2;
    int a2[n2];
    //cout << "Enter the elements of second array: ";
    for (int i = 0; i < n2; i++)
    {
        cin >> a2[i];
    }

    if (check_subset(a1, a2, n1, n2))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}