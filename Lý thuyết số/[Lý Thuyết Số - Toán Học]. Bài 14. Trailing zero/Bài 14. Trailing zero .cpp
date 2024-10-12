#include<bits/stdc++.h>
using namespace std;
long long mod=1000000007;
long long count2(long long n, long long x)
{
    long long dem=0;
    for(long long i=x;i<=n;i*=x)
    {
        dem+=n/i;
        dem%=mod;
    }
    return dem;
}
int main()
{
    long long n;
    cin>>n;
    cout<<count2(n,5);

}

