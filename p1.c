// fcfs

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

// sjf

#include<stdio.h>

#include<stdlib.h>

void swap(int *x, int *y)
{
 int temp=*x;
*x=*y;
*y=temp;
}
void sortat(int p[], int at[], int bt[], int n) {
int i, j;
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
/* sort the process having less arrival*/
if(at[i]>at[j])
{ swap(&p[i], &p[j]);
swap(&at[i], &at[j]);
swap(&bt[i], &bt[j]);
}
/* if two processes have the same arrival time than sort them having less burst time */
else if(at[i]==at[j])
{ if(bt[i]>bt[j])
swap(&p[i], &p[j]);
swap(&at[i], &at[j]);
swap(&bt[i], &bt[j]);
}
}
}
}

/* calculate turnaround time and waiting time */
void tatwt( int ct[], int at[], int bt[], int tat[], int wt[], int n)
{
int i;
for(i=0;i<n;i++)
{
tat[i]=ct[i]-at[i];
wt[i]=tat[i]-bt[i];
}
}
int main()
{
int *p, *at, *bt, *tat, *wt, *ct, pos, i, j, min=1000, n;
float awt=0, atat=0;
printf("\nenter the number of process:"); 
scanf("%d", &n); 
p=(int*)malloc(n*sizeof(int));
 at=(int*)malloc(n*sizeof(int));
  bt=(int*)malloc(n*sizeof(int));
   ct=(int*)malloc(n*sizeof(int));
    wt=(int*)malloc(n*sizeof(int));
	 tat=(int*)malloc(n*sizeof(int));
	  printf("enter the process");
for(i=0;i<n;i++)
{
scanf("%d",&p[i]);
}
printf("enter the arrival time"); for(i=0;i<n;i++)
{
scanf("%d",&at[i]);
}
printf("enter the burst time"); for(i=0;i<n;i++)
{
scanf("%d",&bt[i]);
}
sortat(p, at, bt, n);
ct[0]=at[0] + bt[0];
for(i=1; i<n; i++)
{
for(j=i; j<n; j++)
{
if(at[j]<=ct[i-1])
{
if(bt[j]<min)
{
min=bt[j];
pos=j;
}
}
}
/* when you get less burst time process, swap p, at, bt at position 2, and when getting 2nd less burst time swap at position 3rd and so on. */

swap(&p[i], &p[pos]);
swap(&at[i], &at[pos]);
swap(&bt[i], &bt[pos]);
min=1000;
ct[i]=ct[i-1]+bt[i];
}

tatwt(ct, at, bt, tat, wt, n);
printf("\np\t at\t bt\t ct\t tat\t wt"); for(i=0;i<n;i++)
{
printf("\n%d\t %d\t %d\t %d\t %d\t %d",p[i], at[i], bt[i], ct[i], tat[i], wt[i]);
}
for(i=0;i<n;i++)
{
atat+=tat[i];
awt+=wt[i];
}
// average turnaround time and average waiting time
atat=atat/n;
awt=awt/n;
printf("\n avg tat=%.2f and avg wt=%.2f",atat, awt);

return 0;
}

// PRIORITY NON-PRIMITIVE

#include<stdio.h>
#include<stdlib.h>
typedef struct priority{
int process;
int at,bt,ct,wt,tat,rt,prt;
}priority;

int sort(priority arr[],int n){
int i,j;
priority k;
for(i=0;i<1;i++){
for(j=i+1;j<n;j++){
if(arr[i].at>=arr[j].at){
k=arr[i];
arr[i]=arr[j];
arr[j]=k;
}
}
}
for(i=1;i<n-1;i++){
for(j=i+1;j<n;j++){
if(arr[i].prt>=arr[j].prt){
if(arr[i].prt==arr[j].prt){
if(arr[i].at>arr[i].at){
k=arr[i];
arr[i]=arr[j];
arr[j]=k;
}

}
else{
k=arr[i];
arr[i]=arr[j];
arr[j]=k;
}
             }
}
}

}

int main(){
int n,i,j,temp=0,per;
float avtat=0,avwt=0;
printf("-------priority CPU scheduling-------\n");
printf("enter the no of processes:");
scanf("%d",&n);
priority arr[n];
for(i=0;i<n;i++){
arr[i].process=i;
printf("enter the arrival time for process %d-->",arr[i].process);
scanf("%d",&arr[i].at);
printf("enter the burst time for process %d-->",arr[i].process);
scanf("%d",&arr[i].bt);
        printf("enter the priority for process %d-->",arr[i].process);
scanf("%d",&arr[i].prt);
        }
        printf("after sorting:\n");
        printf("process\t\tarrival time\tburst time\tpriority\n");
        for(i=0;i<n;i++){
        printf("%5d\t%5d\t\t%5d\t%5d\n",arr[i].process,arr[i].at,arr[i].bt,arr[i].prt);
        }
sort(arr,n);
printf("after sorting:\n");
printf("process\t\tarrival time\tburst time\n");
for(i=0;i<n;i++){
printf("%5d\t%5d\t\t%5d\t%5d\n",arr[i].process,arr[i].at,arr[i].bt,arr[i].prt);
}
printf("after calculating ct,tat,wt,rt-->\n");
printf("process arrival time\tburst time\tpriority\tcompletion time\tturn around time\twaiting time\tresponse time\n");
if(arr[0].at>0){
temp=arr[0].at;
}
for(i=0;i<n;i++){
per=0;
arr[i].ct=temp+arr[i].bt;
            j=i+1;
            if(arr[i].ct<arr[j].at){
            per=arr[j].at-arr[i].ct;
           }
temp=arr[i].ct+per;
arr[i].tat=arr[i].ct-arr[i].at;
arr[i].wt=arr[i].tat-arr[i].bt;
arr[i].rt=arr[i].wt;
avtat=avtat+arr[i].tat;
avwt=avwt+arr[i].wt;
printf("%5d\t%5d\t\t%5d\t%5d\t%5d\t%5d\t%5d\t%5d\n",arr[i].process,arr[i].at,arr[i].bt,arr[i].prt,arr[i].ct,arr[i].tat,arr[i].wt,arr[i].rt);
}
printf("average tat:%f \naverage wt:%f\n",avtat/n,avwt/n);
return 0;

}

// ROUNDROBIN 
#include<stdio.h>
int main()
{

      int i, limit, total = 0, x, counter = 0, time_quantum;
      int wait_time = 0, turnaround_time = 0, arrival_time[10], burst_time[10], temp[10],rt[10]={0};
      float average_wait_time, average_turnaround_time;
      printf("\nEnter Total Number of Processes:");
      scanf("%d", &limit);
      x = limit;
    for (i=0;i<limit;i++)
    {
            printf("\nEnter Details of Process[%d]\n", i + 1);

            printf("Arrival Time:t");
            scanf("%d", &arrival_time[i]);

            printf("Burst Time:t");
            scanf("%d", &burst_time[i]);

            temp[i] = burst_time[i];
    }
      printf("\nEnter Time Quantum:\t");
      scanf("%d", &time_quantum);
      printf("\nProcess ID\tAT\tBT\tCT\tTAT\tWT\tRT");
      printf("\n--------------------------------------------------------------------------------\n");
       for(i=0,total=0;x!=0;)
       {
          if(rt[i]==0)
                  {
                  rt[i]=total;
                  }
        if(temp[i] <= time_quantum && temp[i] > 0)
        {
       
         total = total + temp[i];
                  temp[i] = 0;
                  counter = 1;
        }
        else if(temp[i] > 0)
        {
                  temp[i] = temp[i] - time_quantum;
                  total = total + time_quantum;
        }
       rt[0]=0;
     
         if(temp[i] == 0 && counter == 1)
            {
                  x--;
                 
                  printf("\nPr[%d]\t\t %d\t %d\t %d\t %d \t %d\t %d", i + 1,arrival_time[i], burst_time[i],total, total - arrival_time[i], total - arrival_time[i] - burst_time[i],rt[i]-arrival_time[i]);
                  wait_time = wait_time + total - arrival_time[i] - burst_time[i];
                  turnaround_time = turnaround_time + total - arrival_time[i];
                  counter = 0;
            }
         if(i == limit - 1)
            {
                  i = 0;
            }
            else if(arrival_time[i + 1] <= total)
            {
                  i++;
            }
            else
            {
                  i = 0;
            }
      }
      average_wait_time = wait_time *1.0 / limit;
      average_turnaround_time = turnaround_time*1.0 / limit;
      printf("\n\nAverage Waiting Time:%f", average_wait_time);
      printf("\nAvg Turnaround Time:%f\n", average_turnaround_time);
return 0;
}

