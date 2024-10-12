#include<bits/stdc++.h>
using namespace std;
int dx[4]={-1, 1, 0, 0};
int dy[4]={0, 0, 1, -1};
int n,m;
char a[101][101];
int res=0;
multiset<int>se;
void dfs(int i, int j)
{
    res++;
    a[i][j]='.';
    for(int k=0;k<4;k++)
    {
        int i1=dx[k]+i;
        int j1=dy[k]+j;
        if(i1<n && i1>=0 && j1<m && j1>=0 && a[i1][j1]=='*')
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
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            res=0;
            if(a[i][j]=='*')
            {
                dfs(i,j);
                se.insert(res);
            }
        }
    }
    for(auto x:se)
        cout<<x<<" ";
}

