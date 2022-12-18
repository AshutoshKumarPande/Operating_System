#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
int i,j,n,time,sum_wait=0,sum_turnaround=0,smallest;
cout<<"\nEnter number of Processes: ";
cin>>n;
int at[n],bt[n],pt[n],rt[n],remain;
remain=n;
cout<<"\nEnter arrival time, burst time and priority for:\n ";
for(i=0;i<n;i++)
{
 cout<<"\nProcess "<<i+1<<": ";
 cin>>at[i];
 cin>>bt[i];
 cin>>pt[i];
 rt[i]=bt[i];
}
pt[n-1]=n+1;
cout<<"\n\nProcess\t|Turnaround time|waiting time\n";
for(time=0;remain!=0;time++)
{
smallest=n-1;
for(i=0;i<n;i++)
{
if(at[i]<=time && pt[i]<pt[smallest] && rt[i]>0)
{
smallest=i;
}
}
rt[smallest]--;
if(rt[smallest]==0)
{
remain--;
cout<<"  P:"<<smallest+1<<"\t|\t    "<<time+1-at[smallest]<<"\t\t|\t"<<time+1-at[smallest]-bt[smallest]<<"\n";
sum_wait+=time+1-at[smallest];
sum_turnaround+=time+1-at[smallest]-bt[smallest];
}
}
cout<<"\nAverage Waiting Time: "<<sum_wait*1.0/n;
cout<<"\nAverage Turn Around Time: "<<sum_turnaround*1.0/n<<endl;
return 0;
}
