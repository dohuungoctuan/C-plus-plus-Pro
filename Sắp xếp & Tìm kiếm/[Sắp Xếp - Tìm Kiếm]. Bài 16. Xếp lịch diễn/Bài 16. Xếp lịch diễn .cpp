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
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end(),cmp);
    int dem=1;
    int res=v.size();
    pair<int,int>tmp=v[0];
    for(int i=1;i<res;i++)
    {
        pair<int,int>tmp1=v[i];
        if(tmp1.first>tmp.second)
        {
            dem++;
            tmp=tmp1;
        }
    }
    cout<<dem;
}

