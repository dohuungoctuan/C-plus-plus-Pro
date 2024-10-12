#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
map<int,int>mp1;
bool cmp(int x, int y)
{
    if(mp[x]!=mp[y])
        return mp[x]>mp[y];
    else return x<y;
}
bool cmp1(pair<int,int>a,pair<int,int>b)
{
    if(a.second==b.second)
        return mp1[a.first]<mp1[b.first];
    else return a.second>b.second;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
        if(mp1.find(a[i])==mp1.end())
            mp1[a[i]]=i;
    }
    vector<pair<int,int>>v;
    for(auto x:mp)
    {
        v.push_back(make_pair(x.first,x.second));
    }

    sort(v.begin(),v.end(),cmp1);
    sort(a,a+n,cmp);
    for(auto x:a)
        cout<<x<<" ";
    cout<<endl;
    for(auto x:v)
    {
        pair<int,int>k=x;
        for(int i=1;i<=k.second;i++)
            cout<<k.first<<" ";
    }
}

