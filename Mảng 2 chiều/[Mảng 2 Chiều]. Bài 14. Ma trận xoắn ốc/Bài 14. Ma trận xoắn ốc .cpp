#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n][n];
    int val=1;
    int l=0, r=n-1, t=0, b=n-1;
    while(val<=n*n)
    {
        for(int i=l;i<=r;i++)
            a[l][i]=val++;
        t++;
        for(int i=t;i<=b;i++)
            a[i][b]=val++;
        r--;
        for(int i=r;i>=l;i--)
            a[b][i]=val++;
        b--;
        for(int i=b;i>=t;i--)
            a[i][l]=val++;
        l++;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}

