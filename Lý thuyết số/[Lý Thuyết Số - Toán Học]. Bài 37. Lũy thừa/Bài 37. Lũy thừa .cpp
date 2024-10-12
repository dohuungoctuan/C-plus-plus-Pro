#include<bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
long long pow1(long long a, long long b)
{
    long long res=1;
    while(b)
    {
        if(b%2==1)
            {
                res*=a%mod;
                res%=mod;
            }
        b/=2;
        a%=mod;
        a*=a;
    }
    return res;
}
int main()
{
    long long a,b;
    cin>>a>>b;
    cout<<pow1(a,b);
}

