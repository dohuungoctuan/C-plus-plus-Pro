#include<bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
int main()
{
    int n;
    cin>>n;
    int a[n];
    long long ans=1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        ans*=a[i];
        ans%=mod;
    }
    cout<<ans;
}

