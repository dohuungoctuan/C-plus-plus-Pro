#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    map<string,int>mp;
    while(getline(cin,a))
    {
        int i=a.find('\n');
        string tmp=a.substr(0,i);
        mp[tmp]++;
    }
    for(auto x:mp)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
}

