#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long fibo[100];
    fibo[0]=0;
    fibo[1]=1;
    for(int i=2;i<=92;i++)
    {
        fibo[i]=fibo[i-1]+fibo[i-2];
    }
    int n;
    cin>>n;
    long long a[n][n];
    int tmp=n*n;
    long long val=0;
    int l=0, r=n-1, t=0, b=n-1;
    while(val<tmp)
    {
        for(int i=l;i<=r;i++)
            a[l][i]=fibo[val++];
        t++;
        for(int i=t;i<=b;i++)
            a[i][r]=fibo[val++];
        r--;
        for(int i=r;i>=l;i--)
            a[b][i]=fibo[val++];
        b--;
        for(int i=b;i>=t;i--)
            a[i][l]=fibo[val++];
        l++;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }

}

