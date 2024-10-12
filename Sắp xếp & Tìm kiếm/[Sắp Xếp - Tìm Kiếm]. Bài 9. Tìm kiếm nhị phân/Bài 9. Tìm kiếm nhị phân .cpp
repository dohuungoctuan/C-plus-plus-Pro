#include<bits/stdc++.h>
using namespace std;
bool tknp(int a[],int n, int x)
{
    int l=0, r=n-1;
    while(l<=r)
    {
        int g=(l+r)/2;
        if(a[g]==x)
            return true;
        else if(a[g]<x)
            l=g+1;
        else r=g-1;
    }
    return false;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int q; cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        if(tknp(a,n,x))
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

