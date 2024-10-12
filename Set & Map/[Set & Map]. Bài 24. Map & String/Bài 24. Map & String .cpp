#include<bits/stdc++.h>
using namespace std;
int cnt[1000000];
int main()
{
    int n;
    cin>>n;
    int max_val=0;
    int min_val=1e5;
    map<string,int>mp;
    while(n--)
    {
        string a;
        cin>>a;
        mp[a]++;
    }
    for(auto x:mp)
        {
            cout<<x.first<<" "<<x.second<<endl;
            min_val=min(x.second,min_val);
            max_val=max(x.second,max_val);
        }
    cout<<endl;
    for(auto x:mp)
    {
        if(x.second==min_val)
            cout<<x.first<<" "<<x.second<<endl;
    }
    for(auto x:mp)
    {
        if(x.second==max_val)
            cout<<x.first<<" "<<x.second<<endl;
    }

}


