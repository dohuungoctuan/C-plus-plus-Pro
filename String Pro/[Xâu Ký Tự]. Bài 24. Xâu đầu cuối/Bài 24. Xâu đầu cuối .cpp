#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    map<char,long long>mp;
    long long sum=a.size();
    for(auto x:a)
        mp[x]++;
    for(auto x:mp)
    {
        sum+=((x.second*(x.second-1))/2);
    }
    cout<<sum;
}

