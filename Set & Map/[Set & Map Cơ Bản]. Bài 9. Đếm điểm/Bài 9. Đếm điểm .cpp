#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<pair<int, int>, int>mp;
    while(n--)
    {
        int x,y;
        cin>>x>>y;
        pair<int, int>tmp;
        tmp=make_pair(x,y);
        mp[tmp]++;
    }
    for(auto x:mp)
    {
        pair<int, int>tmp = x.first;
        cout<<tmp.first<<" "<<tmp.second<<" "<<x.second<<endl;
    }
}

