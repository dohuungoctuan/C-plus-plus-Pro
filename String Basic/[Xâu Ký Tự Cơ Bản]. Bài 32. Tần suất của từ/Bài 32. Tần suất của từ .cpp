#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    getline(cin,a);
    map<string,int>mp;
    stringstream ss(a);
    string w;
    while(ss>>w)
    {
        mp[w]++;
    }
    for(auto x:mp)
        cout<<x.first<<" "<<x.second<<endl;
}

