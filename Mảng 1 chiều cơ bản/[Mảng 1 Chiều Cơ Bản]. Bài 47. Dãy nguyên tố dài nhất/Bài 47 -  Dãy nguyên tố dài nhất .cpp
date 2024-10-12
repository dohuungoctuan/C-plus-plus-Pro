#include<bits/stdc++.h>
using namespace std;
bool nto[1000001];
void sang()
{
    for(int i=0;i<1000001;i++)
        nto[i]=true;
    nto[0]=nto[1]=false;
    for(int i=2;i<=sqrt(1000001);i++)
    {
        if(nto[i]==true)
        {
            for(int j=i*i;j<1000001;j+=i)
                nto[j]=false;
        }
    }
}
int main()
{
    sang();
    int n;
    cin>>n;
    int a[n+1];
    int dem=0;
    int sum=0;
    int res=-1;
    int sum1=0;
    int dem1=0;
    a[n]=4;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<=n;i++)
    {
       if(nto[a[i]])
       {
           dem1++;
           sum1+=a[i];
       }
       else
       {
           if(dem1>dem)
           {
               dem=dem1;
               sum=sum1;
               res=i-1;
           }
           else if(dem1==dem && sum1>sum)
           {
               sum=sum1;
               res=i-1;
           }
       dem1=0;
       sum1=0;
       }
    }
    if(res==-1)
        cout<<"NOT FOUND";
    else {
            cout<<dem<<endl;
    for(int i=res-dem+1;i<=res;i++)
        cout<<a[i]<<" ";
    }
}

