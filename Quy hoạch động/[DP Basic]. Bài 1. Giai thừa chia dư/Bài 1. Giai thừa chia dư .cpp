#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
long long a[1000001];
int main()
{
    int n;
    cin>>n;
    a[1]=1;
    for(int i=2;i<=1e6;i++)
        a[i]=((a[i-1]%mod)*(i%mod))%mod;
    while(n--)
    {
        int x;
        cin>>x;
        cout<<a[x]<<endl;
    }
}

