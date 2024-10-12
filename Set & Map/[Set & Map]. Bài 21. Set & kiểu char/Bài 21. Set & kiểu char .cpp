#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<char, int>mp;
    while(n--)
    {
        char x;
        cin>>x;
        mp[x]++;
    }
    cout<<mp.size()<<endl;
    for(auto x:mp)
        cout<<x.first<<" ";
    cout<<endl;
    for(auto it =mp.rbegin();it!=mp.rend();++it)
        cout<<(*it).first<<" ";
}

