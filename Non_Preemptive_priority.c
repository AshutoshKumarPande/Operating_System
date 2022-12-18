#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
int i,j,bt[20],p[20],pr[20],tat[20],wt[20],n,totalwt=0,totaltat=0,min,temp;
float avgtat,avgwt;
printf("\nEnter the total number of process: ");
scanf("%d",&n);
printf("\nEnter the Burst Time and Priority\n");
for(i=0;i<n;i++)
{
printf("\nProcess %d: ",i+1);
printf("\nBurst Time: ");
scanf("%d",&bt[i]);
printf("\nPriority: ");
scanf("%d",&pr[i]);
p[i]=i+1;
}
for(i=0;i<n;i++)
{
	min=i;
	for(j=i+1;j<n;j++)
	{
		if(pr[j]<pr[min])
		{
		min=j;
		}
		temp=pr[min];
		pr[min]=pr[i];
		pr[i]=temp;
		temp=p[min];
		p[min]=p[i];
		p[i]=temp;
		temp=bt[min];
		bt[min]=bt[i];
		bt[i]=temp;
	}
}
wt[0]=0;
for(i=0;i<n;i++)
{
wt[i]=0;
for(j=0;j<i;j++)
{
wt[i]+=bt[j];
}
totalwt+=wt[i];
}
tat[0]=0;
for(i=0;i<n;i++)
{
tat[i]=wt[i]+bt[i];
totaltat+=tat[i];
}
avgwt=(float)totalwt/n;
avgtat=(float)totaltat/n;
printf("\n Process\t\t Burst Time\t\t Waiting Time\t\t Turnaround Time\n");
for(i=0;i<n;i++)
{
printf("%d\t\t\t\t%d\t\t\t\t%d\t\t\t\t%d\n",p[i],bt[i],wt[i],tat[i]);
}
printf("Average waiting Time: %f\n",avgwt);
printf("Average Turnaround Time: %f\n",avgtat);
return 0;
}
