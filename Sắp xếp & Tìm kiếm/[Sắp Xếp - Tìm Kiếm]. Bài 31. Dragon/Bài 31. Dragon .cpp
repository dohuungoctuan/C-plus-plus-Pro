#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>a, pair<int,int>b)
{
    return a.first < b.first;
}
int main()
{
    int n,s;
    cin>>n>>s;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    sort(v.begin(),v.end(),cmp);
    for(int i = 0;i< v.size();i++)
    {
        if(s>v[i].first)
            s+=v[i].second;
        else{
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}

