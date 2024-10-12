#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<char,int>a, pair<char,int>b)
{
    if(a.second!=b.second)
        return a.second<b.second;
    else return a.first>b.first;
}
bool cmp1(pair<char,int>a, pair<char,int>b)
{
    if(a.second!=b.second)
        return a.second<b.second;
    else return a.first<b.first;
}
int main()
{
    string a;
    cin>>a;
    map<char,int>mp;
    for(int i=0;i<a.size();i++)
    {
        mp[a[i]]++;
    }
    vector<pair<char,int>>v;
    for(auto x:mp)
    {
        pair<char,int>tmp=x;
        v.push_back(make_pair(x.first,x.second));
    }
    sort(v.begin(),v.end(),cmp1);
    pair<char,int>tmp1=v[v.size()-1];
    cout<<tmp1.first<<" "<<tmp1.second<<endl;
    sort(v.begin(),v.end(),cmp);
    pair<char,int>tmp=v[0];
    cout<<tmp.first<<" "<<tmp.second<<endl;
}

