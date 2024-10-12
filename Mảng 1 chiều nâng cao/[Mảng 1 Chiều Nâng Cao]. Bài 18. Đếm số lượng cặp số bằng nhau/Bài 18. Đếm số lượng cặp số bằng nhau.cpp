#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<int, int>mp;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        mp[x]++;
    }
    long long sum = 0;
    for(auto x : mp)
    {
        sum += (1ll * x.second * (x.second - 1)) / 2;
    }
    cout<<sum;
}
