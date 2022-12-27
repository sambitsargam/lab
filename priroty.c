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