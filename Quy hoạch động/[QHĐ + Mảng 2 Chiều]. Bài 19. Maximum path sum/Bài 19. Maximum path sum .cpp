#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cin>>a[i][j];
    }
    long long f[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i==0 && j==0) f[i][j]=a[i][j];
            else if(i==0) f[i][j]=f[i][j-1]+a[i][j];
            else if(j==0) f[i][j]=f[i-1][j]+a[i][j];
            else f[i][j]=max(f[i-1][j]+a[i][j], f[i][j-1]+a[i][j]);
        }
    }
    cout<<f[n-1][m-1];
}

