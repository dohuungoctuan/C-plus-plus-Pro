#include<bits/stdc++.h>
using namespace std;
long long MOD=1000000007;
long long luythua(int n)
{
    long long ans=1;
    for(int i=1;i<=n;i++)
    {
        ans*=n%MOD;
        ans%=MOD;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    long long sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=luythua(i)%MOD;
        sum%=MOD;
    }
    cout<<sum;
}

