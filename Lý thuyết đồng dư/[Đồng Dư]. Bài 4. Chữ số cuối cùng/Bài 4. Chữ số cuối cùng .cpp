#include<bits/stdc++.h>
using namespace std;
long long MOD=1000000000+7;
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    long long sum=1;
    long long mod=1;
    for(int i=1;i<=k;i++)
        mod*=10;
    for(int i=1;i<=m;i++)
    {
        sum*=n%mod;
        sum%=mod;
    }
    cout<<sum;

}

