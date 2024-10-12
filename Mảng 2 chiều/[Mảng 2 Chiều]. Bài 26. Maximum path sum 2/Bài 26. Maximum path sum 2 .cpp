#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    }
    int f[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0) f[i][j]=a[i][j];
            else if(j==0) f[i][j]=max(f[i-1][j]+a[i][j],f[i-1][j+1]+a[i][j]);
            else if(j==n-1) f[i][j]=max(f[i-1][j]+a[i][j],f[i-1][j-1]+a[i][j]);
            else f[i][j]=max({f[i-1][j]+a[i][j],f[i-1][j-1]+a[i][j],f[i-1][j+1]+a[i][j]});
        }
    }
    int ans=0;
    for(int i=0;i<n;i++)
        ans=max(ans,f[n-1][i]);
    cout<<ans;
}

