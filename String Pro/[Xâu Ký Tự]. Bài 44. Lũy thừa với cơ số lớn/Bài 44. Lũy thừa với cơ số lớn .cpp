#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
long long ltnp(long long a, long long b)
{
    long long res=1;
    while(b!=0)
    {
        if(b%2==1)
        {
            res*=a;
            res%=mod;
        }
        b/=2;
        a%=mod;
        a*=a;
        a%=mod;
    }
    return res;
}
int main()
{
    string a; long long k;
    cin>>a>>k;
    long long res=0;
    for(int i=0;i<a.size();i++)
    {
        res=(res*10+(a[i]-'0'))%mod;
    }
    res=ltnp(res,k);
    cout<<res;
}

