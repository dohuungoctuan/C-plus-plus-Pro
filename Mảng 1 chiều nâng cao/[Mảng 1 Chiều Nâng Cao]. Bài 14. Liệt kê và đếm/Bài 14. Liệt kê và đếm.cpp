#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<long long, int>a, pair<long long, int>b)
{
    if(a.second != b.second)
        return a.second > b.second;
    return a.first < b.first;
}
bool check(long long n)
{
    while(n >= 10)
    {
        int x = n % 10;
        int y = n / 10 % 10;
        if(x < y)
            return false;
        n /= 10;
    }
    return true;
}
int main()
{
    long long n;
    map<long long, int>mp;
    while(cin >> n)
    {
        if(check(n))
            mp[n]++;
    }
    vector<pair<long long ,int>>v;
    for(auto x : mp)
    v.push_back({x.first, x.second});
    sort(v.begin(), v.end(), cmp);
    for(auto x : v)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
}

