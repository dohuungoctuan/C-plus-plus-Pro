#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[501][501];
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
int dem=0;
void dfs(int i, int j)
{
    a[i][j]=0;
    dem++;
    for(int k=0;k<4;k++)
    {
        int i1=dx[k]+i;
        int j1=dy[k]+j;
        if(i1>=0 && i1<n && j1>=0 && j1<m && a[i1][j1]==1)
            dfs(i1,j1);
    }
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int res=INT_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==1)
            {
                dem=0;
                dfs(i,j);
            }
            res=max(dem,res);
        }
    }
    cout<<res;
}

