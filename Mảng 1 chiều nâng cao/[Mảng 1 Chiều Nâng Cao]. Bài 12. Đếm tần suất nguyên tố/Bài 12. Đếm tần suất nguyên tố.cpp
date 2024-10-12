#include<bits/stdc++.h>
using namespace std;
bool nto(int n)
{
    if(n < 2)
        return false;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int main()
{
    int x;
    vector<int>v;
    map<int,int>mp;
    while(cin >> x)
    {
        if(nto(x))
        {
            v.push_back(x);
            mp[x]++;
        }
    }
    for(int i=0;i<v.size();i++)
    {
        if(mp[v[i]]!=0)
        {
            cout<<v[i]<<" "<<mp[v[i]]<<endl;
            mp[v[i]] = 0;
        }
    }
}
