#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n], b[m];
    set<int>se2;
    set<int>se1;
    set<int>se;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        se1.insert(a[i]);
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
        se2.insert(b[i]);
    }
    for(auto x:se1) if(!se2.count(x)) se.insert(x);
    for(auto x:se2) if(!se1.count(x)) se.insert(x);
    for(auto x:se)
        cout<<x<<" ";

}

