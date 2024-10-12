#include<bits/stdc++.h>
using namespace std;
int dx[8]={-1,-2,-2,-1,1,2,2,1};
int dy[8]={-2,-1,1,2,2,1,-1,-2};
int n,s,t,u,v;
int a[101][101];
void dfs(int s, int t)
{
    a[s][t]=0;
    for(int i=0;i<8;i++)
    {
        int i1=dx[i]+s;
        int j1=dy[i]+t;
        if(j1>=0 && i1>=0 && j1<=n && i1<=n && a[i1][j1]==1)
            dfs(i1,j1);
    }
}
int main()
{
    cin>>n;
    cin>>s>>t>>u>>v;
    s=s-1; t=t-1; u=u-1; v=v-1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    }
    dfs(s,t);
    if(a[u][v]==0)
        cout<<"YES";
    else cout<<"NO";
}

