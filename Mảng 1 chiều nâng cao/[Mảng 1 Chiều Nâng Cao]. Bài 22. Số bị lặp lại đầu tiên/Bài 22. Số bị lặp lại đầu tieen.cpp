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
        if(mp[x] > 1)
        {
            cout<<x;
            return 0;
        }
    }
    cout<<"-1";
}

