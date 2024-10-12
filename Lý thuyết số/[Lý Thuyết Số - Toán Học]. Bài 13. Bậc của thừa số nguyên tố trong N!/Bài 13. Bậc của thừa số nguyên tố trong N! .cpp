#include<bits/stdc++.h>
using namespace std;
long long count2(long long n, long long x)
{
    long long dem=0;
    for(long long i=x;i<=n;i*=x)
    {
        dem+=n/i;
    }
    return dem;
}
int main()
{
    long long n,x;
    cin>>n>>x;
    cout<<count2(n,x);
}

