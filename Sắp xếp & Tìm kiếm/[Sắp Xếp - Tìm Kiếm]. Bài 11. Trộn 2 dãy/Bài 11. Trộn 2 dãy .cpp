#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n+1],b[m+1];
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=m;i++)
        cin>>b[i];
    int i=1, j=1;
    while((i<=n) && (j<=m))
    {
        if(a[i]<=b[j])
        {
            cout<<"b"<<i<<" ";
            i++;
        }
        else
        {
            cout<<"c"<<j<<" ";
            j++;
        }
    }
    while(i<=n)
    {
        cout<<"b"<<i<<" ";
        i++;
    }
    while(j<=m)
    {
        cout<<"c"<<j<<" ";
        j++;
    }
}

