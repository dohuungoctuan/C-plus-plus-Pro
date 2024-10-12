#include<bits/stdc++.h>
using namespace std;
int cnt[10000001];
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        cnt[a[i]]=1;
    }
    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        if(cnt[x]==1)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
