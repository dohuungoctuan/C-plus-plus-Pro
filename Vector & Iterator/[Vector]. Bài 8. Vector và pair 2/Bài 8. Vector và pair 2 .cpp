#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<pair<pair<int, int>, int>>a(n);
    for(int i=0;i<n;i++)
        cin>>a[i].first.first>>a[i].first.second>>a[i].second;
    for(auto x:a)
    {
        cout<<x.first.first+x.first.second+x.second<<" ";
    }
}

