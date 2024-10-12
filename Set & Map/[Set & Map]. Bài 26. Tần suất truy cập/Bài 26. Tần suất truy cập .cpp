#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    map<string,int>mp;
    while(cin>>a)
    {
       mp[a]++;
    }
    for(auto x:mp)
        cout<<x.first<<" "<<x.second<<endl;
}

