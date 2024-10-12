#include<bits/stdc++.h>
using namespace std;
long long pow1(long long a, long long b)
{
    long long res=1;
    for(int i=1;i<=b;i++)
        res*=a;
    return res;
}
int main()
{
    long long x,y,z,n;
    cin>>x>>y>>z>>n;
    long long tmp=x/__gcd(x,y)*y;
    tmp=tmp/__gcd(tmp,z)*z;
    long long res=pow1(10,n-1);
    long long ans=(res+(tmp-1))/tmp*tmp;
    if(ans>=pow1(10,n))
        cout<<"-1";
    else cout<<ans;
}

