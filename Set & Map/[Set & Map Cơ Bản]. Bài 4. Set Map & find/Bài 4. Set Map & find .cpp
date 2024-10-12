#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n], b[m];
    for(int i=0;i<n;i++)
        cin>>a[i];
    set<int>se;
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
        se.insert(b[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(se.count(a[i]))
            cout<<"28tech"<<" ";
        else cout<<"29tech"<<" ";
    }
}

