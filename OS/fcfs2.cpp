#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct process
{
    int id, arrival_time, burst_time, waiting_time, turn_around_time;
};

bool compareArrivalTime(const process &a, const process &b)
{
    return a.arrival_time < b.arrival_time;
}

int main()
{
    int n;
    cout << "Enter the number of processes: ";
    cin >> n;

    vector<process> processes(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the arrival time and burst time for process " << i + 1 << ": ";
        cin >> processes[i].arrival_time >> processes[i].burst_time;
        processes[i].id = i + 1;
    }

    sort(processes.begin(), processes.end(), compareArrivalTime);

    int current_time = 0;
    for (int i = 0; i < n; i++)
    {
        int waiting_time = max(0, current_time - processes[i].arrival_time);
        processes[i].waiting_time = waiting_time;
        processes[i].turn_around_time = waiting_time + processes[i].burst_time;
        current_time += processes[i].burst_time;
    }

    double total_waiting_time = 0, total_turn_around_time = 0;
    for (int i = 0; i < n; i++)
    {
        total_waiting_time += processes[i].waiting_time;
        total_turn_around_time += processes[i].turn_around_time;
    }

    double average_waiting_time = total_waiting_time / n;
    double average_turn_around_time = total_turn_around_time / n;

    cout << "Process\tWaiting Time\tTurnaround Time" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << processes[i].id << "\t" << processes[i].waiting_time << "\t\t" << processes[i].turn_around_time << endl;
    }

    cout << "Average waiting time: " << average_waiting_time << endl;
    cout << "Average turnaround time: " << average_turn_around_time << endl;

    return 0;
}
