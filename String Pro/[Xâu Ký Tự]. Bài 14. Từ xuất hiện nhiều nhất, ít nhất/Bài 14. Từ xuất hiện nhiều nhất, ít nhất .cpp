#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
bool cmp(pair<string,int>a, pair<string,int>b)
{
    if(a.second!=b.second)
        return a.second<b.second;
    return a.first>b.first;
}
bool cmp1(pair<string,int>a, pair<string,int>b)
{
    if(a.second!=b.second)
        return a.second<b.second;
    return a.first<b.first;
}
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string w;
    while(ss>>w)
    {
        mp[w]++;
    }
    vector<pair<string,int>>v;
    for(auto x:mp)
        v.push_back(make_pair(x.first,x.second));
    sort(v.begin(),v.end(),cmp1);
    pair<string,int>tmp=v[v.size()-1];
    cout<<tmp.first<<" "<<tmp.second<<endl;
    sort(v.begin(),v.end(),cmp);
    pair<string,int>tmp1=v[0];
    cout<<tmp1.first<<" "<<tmp1.second<<endl;

}

