// This is Rahim
#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

int main()
{
    Faster;

    int n;
    cout << "Enter the number of process : ";
    cin >> n;

    vector<int> process(30);
    vector<int> burst_time(30);
    vector<int> waiting_time(30);
    vector<int> turn_around_time(30);

    float average_waiting_time = 0, average_turn_around_time = 0;

    cout << "Enter The Process Number : ";
    for (int i = 0; i < n; i++)
    {
        cin >> process[i];
    }

    cout << "Enter The Burst Time : ";
    for (int i = 0; i < n; i++)
    {
        cin >> burst_time[i];
    }

    sort(burst_time.begin(), burst_time.end());
    sort(process.begin(), process.end());

    cout << "Process \t Burst Time \t Waiting Time \t Turn Arounf Time\n";

    for (int i = 0; i < n; i++)
    {
        waiting_time[i] = 0;
        turn_around_time[i] = 0;
        for (int j = 0; j < n; j++)
        {
            waiting_time[i] += burst_time[i];
        }

        turn_around_time[i] = waiting_time[i] + burst_time[i];
        average_waiting_time += waiting_time[i];
        average_turn_around_time += turn_around_time[i];

        cout << process[i] << "\t" << burst_time[i] << "\t\t" << waiting_time[i] << "\t\t" << turn_around_time[i] << endl;
    }
    average_waiting_time = average_waiting_time / n;
    average_turn_around_time = average_turn_around_time / n;
    cout << "Average Waiting Time = " << average_waiting_time;
    cout << "Average Turn Around Time = " << average_turn_around_time;

    return 0;
}