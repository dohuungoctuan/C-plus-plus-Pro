#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n], b[m];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
        cin>>b[i];
    sort(b,b+m);
    for(int i=0;i<n;i++)
    {
        auto it=lower_bound(b,b+m,a[i])-1;
        cout<<(it-b)+1<<" ";
    }

}

