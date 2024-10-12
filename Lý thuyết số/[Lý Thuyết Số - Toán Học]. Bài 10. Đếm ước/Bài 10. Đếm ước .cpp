#include<bits/stdc++.h>
using namespace std;
long long mod=1000000007;
int main()
{
    int n;
    cin>>n;
    long long dem=1;
    while(n--)
    {
        int x,y;
        cin>>x>>y;
        dem*=y+1;
        dem%=mod;
    }
    cout<<dem;
}

