#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    a[0]=0;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=2;i<=n;i++)
    {
        a[i]=a[i-1]+a[i];
    }
    for(int i=k;i<=n;i++)
    {
        cout<<a[i]-a[i-k]<<" ";
    }

}

