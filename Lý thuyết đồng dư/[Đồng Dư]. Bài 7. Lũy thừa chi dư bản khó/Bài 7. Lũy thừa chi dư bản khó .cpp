#include<bits/stdc++.h>
using namespace std;
long long MOD=1000000000+7;
int main()
{
    long long a,b;
    cin>>a>>b;
    long long sum=1;
    while(b!=0)
    {
        if(b%2==1)
        {
            sum*=a%MOD;
            sum%=MOD;
        }
        b/=2;
        a%=MOD;
        a*=a;
    }
    cout<<sum;
}

