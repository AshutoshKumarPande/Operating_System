#include <iostream>
using namespace std;
int tim=0;
int main()

{
    int bt[20],p[20],w[20],tat[20],taround[20],i,j,n,tw=0,tt=0,pos,temp;
    float avtt,avwt;
    cout<<"Enter the total number of process: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        p[i];
    }
    for(i=1;i<=n;i++)
    {
        cout<<"Enter the waiting time: ";
        cin>>bt[i];
        p[i]=i;
    }
    for(i=1;i<=n;i++)
    {
        pos=i;
        for(j=i+1;j<=n;j++)
        {
            if(bt[pos]>bt[j])
            {
                pos=j;
            }
            temp=bt[i];
            bt[i]=bt[pos];
            bt[pos]=temp;
            temp=p[i];
            p[i]=p[pos];
            p[pos]=temp;
        }
    }
    for (i=1;i<=n;i++)
    {
        w[i]=tim;
        for(j=1;j<=bt[i];j++)
        {
            tim++;
            if(j==bt[i])
            {
                taround[i]=tim;
            }
        }

    }
    for(i=1;i<=n;i++)
    {
        tw+=w[i];
        tt+=taround[i];
    }
    avwt=float(tw/n);
    avtt=float(tt/n);
    for(i=1;i<=n;i++)
    {
        cout<<"waiting time and turn around time of process "<<i<<": "<<w[i]<<" and "<<taround[i]<<endl;
    }
    cout<<"Average waiting time: "<<avwt;
    cout<<endl<<"Average Turn around time: "<<avtt;

    return 0;
}
