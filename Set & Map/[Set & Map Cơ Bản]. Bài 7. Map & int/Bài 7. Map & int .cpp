#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<int, int>mp;
    while(n--)
    {
        int a;
        cin>>a;
        mp[a]++;
    }
    for(auto x:mp)
        cout<<x.first<<" "<<x.second<<endl;
}

