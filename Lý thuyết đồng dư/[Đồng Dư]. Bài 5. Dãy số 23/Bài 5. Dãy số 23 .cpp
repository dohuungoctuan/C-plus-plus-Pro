#include<bits/stdc++.h>
using namespace std;
long long MOD=1000000000+7;
int main()
{
    int n;
    cin>>n;
    long long f1=1;
    long long f2=1;
    int i=3;
    while(i<=n)
    {
        long long fn=2*f2+3*f1;
        fn%=MOD;
        f1=f2%MOD;
        f2=fn%MOD;
        i++;
    }
    cout<<f2;
}

