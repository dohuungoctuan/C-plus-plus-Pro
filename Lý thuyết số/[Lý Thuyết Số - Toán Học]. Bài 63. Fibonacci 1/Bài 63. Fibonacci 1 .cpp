#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
typedef long long ll;
int fibo(int n)
{
    ll f0=0;
    ll f1=1;
    if(n==1) return f0;
    if(n==2) return f1;
    n-=2;
    while(n--)
    {
        long long fn=f0+f1;
        fn%=mod;
        f0=f1;
        f0%=mod;
        f1=fn;
    }
    return f1;
}
int main()
{
    int n;
    cin>>n;
    cout<<fibo(n);
}

