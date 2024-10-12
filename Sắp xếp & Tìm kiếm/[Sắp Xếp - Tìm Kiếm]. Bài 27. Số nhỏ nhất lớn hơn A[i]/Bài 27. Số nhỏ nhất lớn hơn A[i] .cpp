#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        v.push_back(a[i]);
    }
    sort(a,a+n);
    int tmp=v.size();
    for(int i=0;i<tmp;i++)
    {
        auto it=upper_bound(a,a+n,v[i]);
        int res=it-a;
        if(res!=n)
            cout<<*it<<" ";
        else cout<<"_ ";
    }
}

