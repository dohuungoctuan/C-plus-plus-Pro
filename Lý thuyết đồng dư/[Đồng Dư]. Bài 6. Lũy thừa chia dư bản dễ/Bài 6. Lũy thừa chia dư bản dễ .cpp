#include<bits/stdc++.h>
using namespace std;
long long MOD=1000000000+7;
int main()
{
    int a,b;
    cin>>a>>b;
    long long sum=1;
    for(int i=1;i<=b;i++)
    {
        sum*=a%MOD;
        sum%=MOD;
    }
    cout<<sum;
}

