#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    a[0]=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=2;i<=n;i++)
    {
       a[i]=a[i]+a[i-1];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
            cout<<a[j]-a[i-1]<<" ";
    }
}

