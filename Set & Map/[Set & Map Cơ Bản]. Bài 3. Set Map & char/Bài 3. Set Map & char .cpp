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
    auto it=mp.rbegin();
    {
        cout<<(*it).first<<" ";
        mp.erase((*it).first);
    }
    auto it1=mp.begin();
    {
        cout<<(*it1).first<<" ";
        mp.erase((*it1).first);
    }
    auto it2=mp.rbegin();
    {
        cout<<(*it2).first<<" ";
    }
    auto it3=mp.begin();
    {
        cout<<(*it3).first<<" ";
    }
}

