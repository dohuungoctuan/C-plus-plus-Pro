#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>a, pair<int,int>b)
{
    return a.second<b.second;
}
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    sort(v.begin(),v.end(),cmp);
    int tmp=v[0].second;
    int dem = 1;
    for(int i=1;i<v.size();i++)
    {
        if(v[i].first>=tmp)
        {
            dem++;
            tmp=v[i].second;
        }
    }
    cout<<dem;
}

