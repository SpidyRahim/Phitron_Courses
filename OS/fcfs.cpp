/* #include <stdio.h>
#define max 30

int main()
{
    int n, bt[max], at[max], wt[max], tat[max], temp[max];
    float awt = 0, atat = 0;
    printf("Enter the process number : ");
    scanf("%d", &n);

    printf("Enter the burst time of the process : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &bt[i]);
    }

    printf("Enter the arrival time of the process : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &at[i]);
    }
    temp[0] = 0;

    printf("Process\t Burst Time\t Arrival Time\t Waiting Time\t Turn Around Time\n");

    for (int i = 0; i < n; i++)
    {
        wt[i] = 0;
        tat[i] = 0;

        temp[i + 1] = temp[i] + bt[i];
        wt[i] = temp[i] - at[i];
        tat[i] = wt[i] + bt[i];

        awt += wt[i];
        atat += tat[i];

        printf("%d\t%d\t\t%d\t\t%d\t\t%d\n", i + 1, bt[i], at[i], wt[i], tat[i]);
    }

    awt = awt / n;
    atat = atat / n;
    printf("Avarage Waiting Time = %f\n", awt);
    printf("Avarage Turn Around Time = %f\n", atat);
} */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, i, j, k, a, b, c[100], w[100], t[100];
    float a1 = 0, s1 = 0, s2 = 0, a2;
    vector<pair<int, int>> v;

    cin >> n;

    for (i = 0; i < n; ++i)
    {
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }

    sort(v.begin(), v.end());
    int x = 0;
    for (i = 0; i < n; ++i)
    {
        c[i] = x + v[i].second;
        x += v[i].second;
    }

    for (i = 0; i < n; ++i)
    {
        t[i] = c[i] - v[i].first;
        s1 += t[i];
    }

    for (i = 0; i < n; ++i)
    {
        w[i] = t[i] - v[i].second;
        s2 += w[i];
    }

    for (i = 0; i < n; ++i)
    {
        printf("P[%d] %d %d\n", i + 1, w[i], t[i]);
    }

    printf("%f %f\n", s2 / n, s1 / n);

    return 0;
}
