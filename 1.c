//First Come First Serve CPU Scheduling
#include <stdio.h>

int main(int argc, char const *argv[])
{
    //Read the total no of processes, and their burst time(taken arrival time of each process=0)
    int n;
    printf("Enter the Total no. of process: ");
    scanf("%d", &n);

    //Read the arrival time and burst time of all the processes
    int at[n], bt[n];
    printf("Enter the Arrival time of all the processes::\n");
    for(int i=0; i<n; i++){
        printf("P[%d]: ", i);
        scanf("%d", &at[i]);
    }

    printf("Enter the Burst time of all the processes::\n");
    for(int i=0; i<n; i++){
        printf("P%d]: ", i);
        scanf("%d", &bt[i]);
    }

    //execution start time of all the processess
    int st[n];
    st[0]=0;
    for(int i=1; i<n; i++){
        st[i]=st[i-1]+bt[i-1];
    }
    //calculation of waiting time
    int wt[n];
    wt[0]=0;
    for(int i=1; i<n; i++){
        wt[i]=st[i]-at[i];
    }

    //calculation of turn-around time
    int tat[n];
    for(int i=0; i<n; i++){
        tat[i]=bt[i]+wt[i];
    }

    //printing all the values
    printf("\n-----------------------------------------------------------------------------------------------------------------\n");
    printf("\tProcess\t\tArrival Time\t\tBurst Time\t\tWait time\t\tTurn-Around Time\n\n");
    for(int i=0; i<n; i++){
        printf("\t  P%d\t\t    %d\t\t\t  %d\t\t\t  %d\t\t\t   %d\n\n",i+1, at[i], bt[i], wt[i], tat[i]);
    }

    float twt=0, ttat=0;
    for(int i=0; i<n; i++){
        twt+=wt[i];
        ttat+=tat[i];
    }
    printf("\nAverage Waiting time: %f\n", twt/n);
    printf("\nAverage turn-around time: %f\n\n", ttat/n);
    return 0;
}
