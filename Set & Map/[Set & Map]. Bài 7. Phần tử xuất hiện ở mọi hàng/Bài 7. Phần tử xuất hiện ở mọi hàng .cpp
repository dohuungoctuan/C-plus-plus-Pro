#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<vector<int>>v;
    for(int i=1;i<=n;i++)
    {
        vector<int>tmp;
        for(int i=1;i<=n;i++)
        {
            int x;
            cin>>x;
            tmp.push_back(x);
        }
        v.push_back(tmp);
    }
    map<int, int>mp;
    vector<int>v1 = v[0];
    for(auto x:v1)
        mp[x]=1;
    for(int i=1;i<n;i++)
    {
        vector<int>tmp = v[i];
        for(auto x:tmp)
        {
            if(mp[x]==i)
                mp[x]=i+1;
        }
    }
    bool check=false;
    for(auto x:mp)
    {
        if(x.second==n)
        {
            cout<<x.first<<endl;
            check=true;
        }
    }
    if(check==false)
        cout<<"NOT FOUND";
}

