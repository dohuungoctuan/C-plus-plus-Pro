#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],b[n];
    set<int>se;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=n-1;i>=0;i--)
    {
        se.insert(a[i]);
        b[i]=se.size();
    }
    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        cout<<b[x]<<endl;
    }
}

