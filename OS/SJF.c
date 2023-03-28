#include <stdio.h>
#include <conio.h>
#define MAX 30

void main()
{
    int n, t, process[MAX], burst_time[MAX], waitingtime[MAX], turnaroundtime[MAX];
    float average_time_around_time = 0, average_waiting_time = 0;
    clrscr();
    printf("NOP");
    scanf("%d",&n);
    printf("PN");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&process[i]);
    }
    printf("enter Burst time");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&burst_time[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; i < n-i-1; i++)
        {
            if (/* condition */)
            {
                /* code */
            }
            
        }
        
    }
    
}