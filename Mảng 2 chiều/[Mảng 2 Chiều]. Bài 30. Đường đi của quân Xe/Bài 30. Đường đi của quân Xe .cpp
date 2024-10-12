#include<bits/stdc++.h>
using namespace std;
int n,s,t;
int a[21][21];
int dx[4]={-1, 1, 0, 0};
int dy[4]={ 0, 0,-1, 1};
int res=0;
void dfs(int s, int t)
{
    a[s][t]=1;
    res++;
    for(int i=0;i<4;i++)
    {
        int i1=dx[i]+s;
        int j1=dy[i]+t;
        if(i1<n && i1>=0 && j1<n && j1>=0 && a[i1][j1]==0)
            dfs(i1,j1);
    }
}
int main()
{
    cin>>n>>s>>t;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    }
    --s; --t;
    dfs(s,t);
    cout<<res;
}

