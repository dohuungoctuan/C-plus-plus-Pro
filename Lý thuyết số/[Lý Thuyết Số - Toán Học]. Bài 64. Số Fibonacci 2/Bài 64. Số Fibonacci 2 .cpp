#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
typedef long long ll;
bool checkfibo(ll n)
{
    ll f1=0;
    ll f2=1;
    if(n==0 || n==1) return true;
    long long fn=f1+f2;
    while(fn<=n)
    {
        fn=f1+f2;
        if(fn==n)
            return true;
        f1=f2;
        f2=fn;

    }
    return false;
}
int main()
{
    long long n;
    cin>>n;
    if(checkfibo(n))
        cout<<"YES";
    else cout<<"NO";
}

