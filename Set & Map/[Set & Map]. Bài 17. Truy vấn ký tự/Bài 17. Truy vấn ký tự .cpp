#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a; cin>>a;
    map<char, int>mp;
    for(auto x:a)
        mp[x]++;
    auto ans=mp.begin()->first;
    auto result=mp.begin()->first;
    for(auto x:mp)
    {
        if(x.second > mp[ans]) ans=x.first;
        if(x.second <= mp[result]) result=x.first;
    }
    cout<<ans<<" "<<mp[ans]<<endl;
    cout<<result<<" "<<mp[result]<<endl;
    cout<<mp.size();
}

