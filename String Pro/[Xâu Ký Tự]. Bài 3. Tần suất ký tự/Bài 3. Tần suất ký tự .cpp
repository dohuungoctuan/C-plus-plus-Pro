#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    map<char,int>mp;
    for(int i=0;i<a.size();i++)
    {
        mp[a[i]]++;
    }
    for(auto x:mp)
        cout<<x.first<<" "<<x.second<<endl;
    cout<<endl;
    for(int i=0;i<a.size();i++)
    {
        if(mp[a[i]]!=0)
        {
            cout<<a[i]<<" "<<mp[a[i]]<<endl;
            mp[a[i]]=0;
        }
    }
}

