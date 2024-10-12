#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin>>n>>m;
    set<int>set_a;
    set<int>set_b;
    set<int>giao;
    set<int>hop;
    int a[n], b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
        set_a.insert(a[i]);
        hop.insert(a[i]);
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
        set_b.insert(b[i]);
        hop.insert(b[i]);
    }
    for(auto x : set_a)
    {
        if(set_b.count(x))
            giao.insert(x);
    }
    for(auto x : giao)
        cout<<x<<" ";
    cout<<endl;
    for(auto x : hop)
        cout<<x<<" ";


}
