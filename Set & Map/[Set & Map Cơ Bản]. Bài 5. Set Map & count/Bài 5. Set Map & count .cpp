#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n], b[m];
    map<int, int>mp;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
        mp[b[i]]++;
    }
    for(int i=0;i<n;i++)
    {
            cout<<mp[a[i]]<<" ";
    }
}

