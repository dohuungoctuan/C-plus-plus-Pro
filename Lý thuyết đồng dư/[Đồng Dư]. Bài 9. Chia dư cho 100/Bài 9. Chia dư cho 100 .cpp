#include<bits/stdc++.h>
using namespace std;
long long MOD=100;
int main()
{
    long long ans=1;
    int n;
    cin>>n;
    int x=28;
    for(int i=1;i<=n;i++)
    {
        ans*=x%MOD;
        ans%=MOD;
    }
    cout<<ans;
}

