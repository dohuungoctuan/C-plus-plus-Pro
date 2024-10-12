#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    int minn=INT_MAX;
    int maxx=INT_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
            minn=min(a[i][j],minn);
            maxx=max(a[i][j],maxx);
        }
    }
    cout<<minn<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==minn)
                cout<<i+1<<" "<<j+1<<endl;
        }
    }
    cout<<maxx<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==maxx)
                cout<<i+1<<" "<<j+1<<endl;
        }
    }
}

