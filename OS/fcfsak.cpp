/* #include <stdio.h>
#include <string.h>
int main()
{
    char pn[10][10], t[10];
    int arr[10], bur[10], star[10], finish[10], tat[10], wt[10], i, j, n, temp;
    int totwt = 0, tottat = 0;
    printf("Enter the number of processes:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the ProcessName, Arrival Time& Burst Time:");
        scanf("%s%d%d", &pn[i], &arr[i], &bur[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                temp = bur[i];
                bur[i] = bur[j];
                bur[j] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        if (i == 0)
            star[i] = arr[i];
        else
            star[i] = finish[i - 1];
        wt[i] = star[i] - arr[i];
        finish[i] = star[i] + bur[i];
        tat[i] = finish[i] - arr[i];
    }
    printf("\nPName Arrtime Burtime WaitTime TAT ");
    for (i = 0; i < n; i++)
    {
        printf("\n%s\t%3d\t%3d\t%3d\t%2d\n", pn[i], arr[i], bur[i], wt[i], star[i], tat[i], finish[i]);
        totwt += wt[i];
        tottat += tat[i];
    }
    printf("\nAverage Waiting time:%f", (float)totwt / n);
    printf("\nAverage Turn Around Time:%f", (float)tottat / n);
    return 0;
} */

#include <iostream>
using namespace std;
int main()
{
    int n, bt[20], wt[20], tat[20], avwt = 0, avtat = 0, i, j;
    cout << "Enter total number of processes(maximum 20):";
    cin >> n;

    cout << "\nEnter Process Burst Time aka DURATION \n";
    for (i = 0; i < n; i++)
    {
        cout << "P[" << i + 1 << "]:";
        cin >> bt[i];
    }
    wt[0] = 0; // waiting time for first process is 0
    // calculating waiting time
    for (i = 1; i < n; i++)
    {
        wt[i] = 0;
        for (j = 0; j < i; j++)
            wt[i] += bt[j];
    }
    cout << "\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time";
    // calculating turnaround time
    for (i = 0; i < n; i++)
    {
        tat[i] = bt[i] + wt[i];
        avwt += wt[i];
        avtat += tat[i];
        cout << "\nP[" << i + 1 << "]"
             << "\t\t" << bt[i] << "\t\t" << wt[i] << "\t\t" << tat[i];
    }
    avwt /= i;
    avtat /= i;
    cout << "\n\nAverage Waiting Time:" << avwt;
    cout << "\nAverage Turnaround Time:" << avtat;

    return 0;
}
