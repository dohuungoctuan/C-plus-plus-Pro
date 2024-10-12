#include<bits/stdc++.h>
using namespace std;
long long MOD=1000000000+7;
int main()
{
    int n;
    cin>>n;
    long long a[n];
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i]%MOD;
        sum%=MOD;
    }
    cout<<sum;
}

