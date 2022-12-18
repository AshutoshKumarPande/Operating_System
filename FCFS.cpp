#include <iostream>
using namespace std;
int tim=0;
int main()
{
    int n,b[20],i,j,w[20],tw,taround[20],tt=0;
    float avw,avt;
    cout<<"Enter the number of processes: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"Enter the burst time of "<<i<<" process: ";
        cin>>b[i];

    }
    for (i=1;i<=n;i++)
    {
        w[i]=tim;
        for(j=0;j<=b[i];j++)
        {
            tim++;
            if(j==b[i])
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
    avw=float(tw/n);
    avt=float(tt/n);
    for(i=1;i<=n;i++)
    {
        cout<<"waiting time and turn around time of process "<<i<<": "<<w[i]<<" and "<<taround[i]<<endl;
    }
    cout<<"Average waiting time: "<<avw;
    cout<<endl<<"Äverage Turn around time: "<<avt;

    return 0;
}
