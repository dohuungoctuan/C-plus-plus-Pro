#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    set<string>se;
    stringstream ss(s);
    string w;
    map<string,int>mp;
    while(ss>>w)
    {
        se.insert(w);
        mp[w]++;
    }
    for(auto x:se)
        cout<<x<<" ";
    cout<<endl;
    stringstream sss(s);
    string k;
    while(sss>>k)
    {
        if(mp[k]!=0)
        {
            cout<<k<<" ";
            mp[k]=0;
        }
    }
}

