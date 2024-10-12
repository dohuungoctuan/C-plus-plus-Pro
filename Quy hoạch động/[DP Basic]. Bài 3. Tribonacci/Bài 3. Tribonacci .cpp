#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
long long f[1000001];
int main()
{
    int n;
    cin>>n;
    f[0]=0;
    f[1]=1;
    f[2]=1;
    for(int i=3;i<=1e6;i++)
        f[i]=((f[i-1]%mod)+(f[i-2]%mod)+(f[i-3]%mod))%mod;
    while(n--)
    {
        int x;
        cin>>x;
        cout<<f[x-1]<<endl;
    }
}

