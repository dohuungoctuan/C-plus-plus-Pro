#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    map<string,pair<int,int>>mp;
    while(cin>>a)
    {
       int x,y;
       cin>>x>>y;
       mp[a].first+=x;
       mp[a].second+=(x*y);
    }
    for(auto it=mp.rbegin(); it!=mp.rend();it++)
    {
        cout<<(*it).first<<" : "<<fixed<<setprecision(2)<<(double)((double)mp[(*it).first].second/mp[(*it).first].first)<<endl;
    }
}

