#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    getline(cin,a);
    map<string,int>mp;
    stringstream ss(a);
    string w;
    vector<string>v;
    while(ss>>w)
    {
        mp[w]++;
        v.push_back(w);
    }
    string k;
    for(auto x:v)
    {
        if(mp[x]!=0)
        {
            cout<<x<<" "<<mp[x]<<endl;
            mp[x]=0;
        }
    }
}

