#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,k;
    cin>>n>>x>>k;
    long long a[n+2];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=n+1;i>k;i--)
    {
        a[i]=a[i-1];
    }
    a[k]=x;
    n++;
    for(int i=1;i<=n;i++)
        cout<<a[i]<<" ";
}

