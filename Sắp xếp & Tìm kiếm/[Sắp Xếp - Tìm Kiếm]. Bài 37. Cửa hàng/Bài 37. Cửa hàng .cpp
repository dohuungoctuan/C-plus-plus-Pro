#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>a , pair<int,int>b)
{
    return a.first<b.first;
}
int main()
{
    int n;
    cin>>n;
    int ans = 0;
    int dem=0;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back({x,1});
        v.push_back({y,-1});
    }
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<v.size();i++)
    {
        dem+=v[i].second;
        ans = max(ans,dem);
    }
    cout<<ans;
}

