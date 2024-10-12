#include<bits/stdc++.h>
using namespace std;
int nto[1000001];
int k=1000000;
void sang()
{
    for(int i=0;i<=k;i++)
        nto[i]=1;
    nto[0]=nto[1]=0;
    for(int i=2;i<=sqrt(k);i++)
    {
        if(nto[i])
        {
            for(int j=i*i;j<=k;j+=i)
                nto[j]=0;
        }
    }
}
int prime[1000001];
int main()
{
    sang();
    int n;
    cin>>n;
    for(int i=0;i<=k;i++)
    {
        if(nto[i])
            prime[i]=prime[i-1]+1;
        else prime[i]=prime[i-1];
    }
    while(n--)
    {
        int x;
        cin>>x;
        cout<<prime[x]<<endl;
    }
}

