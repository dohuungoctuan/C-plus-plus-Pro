#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    map<char,int>mp;
    for(int i=0;i<a.size();i++)
        mp[a[i]]++;
    for(auto x:mp)
        cout<<x.first<<" "<<x.second<<endl;
}

