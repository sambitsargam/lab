#include <stdio.h>
#include<stdlib.h>

void swap(int arr[], int x, int y){
    int temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}
int main() {
    int pid[10] = {0}, at[10] = {0}, bt[10] = {0}, ct[10] = {0}, tat[10] = {0}, wt[10] = {0}, rt[10] = {0};
    int n;
    int total_tat, total_wt;
    float avg_tat, avg_wt;
    int et = 0;
    printf("Enter the no of process: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        printf("Enter process id, arrival time, burst time: ");
        scanf("%d %d %d", &pid[i], &at[i], &bt[i]);
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(at[i]>at[j]){
                swap(pid, i, j);
                swap(at, i, j);
                swap(bt, i, j);
            }
        }
    }
    for(int i=0; i<n; i++){
        if(et>=at[i]){
            et = et+bt[i];
            ct[i] = ct[i] + et;
        }
        else{
            et = at[i];
            et = et+bt[i];
            ct[i] = ct[i] + et;
        }
    }
    for(int i=0; i<n; i++){
        tat[i] = ct[i] - at[i];
        total_tat += tat[i];
    }
    for(int i=0; i<n; i++){
        wt[i] = tat[i] - bt[i];
        total_wt+= wt[i];
    }
    for(int i=0; i<n; i++){
        rt[i] = wt[i];
    }
    printf("\nProcess\t AT\t BT\t CT\t TAT\  WT\t\n");
    for(int i=0; i<n; i++){
        printf("%d\t\t %d\t %d\t %d\t %d\t %d\t\n",pid[i], at[i], bt[i], ct[i], tat[i], wt[i]);
    }
    printf("Total tat = %d\n",total_tat);
    printf("total wt = %d\n",total_wt);
    avg_tat = total_tat/5.0;
    avg_wt = total_wt/5.0;
    printf("Avg tat = %f\n",avg_tat);
    printf("Avg wt = %f\n",avg_wt);
    return 0;
}