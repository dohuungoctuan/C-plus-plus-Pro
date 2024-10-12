#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<string,int>a, pair<string,int>b)
{
    if(a.second!=b.second)
        return a.second>b.second;
    return a.first<b.first;
}
int main()
{
    string a;
    string k=" - ";
    map<string,int>mp;
    while(getline(cin,a))
    {
        int tmp=a.find(k);
        string team1=a.substr(0,tmp);
        tmp+=3;
        string team2=a.substr(tmp);
        int cnt1=team1.rfind(" ");
        int index1=stoi(team1.substr(cnt1));
        int cnt2=team2.find(" ");
        int index2=stoi(team2.substr(0,cnt2));
        string doi1=team1.substr(0,cnt1);
        string doi2=team2.substr(cnt2+1);
        mp[doi1]+=index1;
        mp[doi2]+=index2;
    }
    vector<pair<string,int>>v;
    for(auto x:mp)
    {
        v.push_back({x.first,x.second});
    }
    sort(v.begin(),v.end(),cmp);
    for(auto x:v)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
}

