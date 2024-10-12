#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500][500];
int dx[4]={-1, 0, 0, 1};
int dy[4]={0, -1, 1 , 0};
void dfs(int i, int j)
{
    a[i][j]=0;
    for(int l=0;l<4;l++)
    {
        int i1=i+dx[l];
        int j1=j+dy[l];
        if(i1>=0 && j1<m && i1<n && j1>=0 && a[i1][j1]==1)
            dfs(i1,j1);
    }
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cin>>a[i][j];
    }
    int dem=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==1)
            {
                dem++;
                dfs(i,j);
            }
        }
    }
    cout<<dem;
}

