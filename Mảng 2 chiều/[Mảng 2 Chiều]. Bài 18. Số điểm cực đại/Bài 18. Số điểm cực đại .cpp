#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[500][500];
int dx[8]={-1,-1,1 ,1,-1,0 ,1,0};
int dy[8]={-1,1 ,-1,1, 0,-1,0,1};
bool dfs(int i, int j)
{
    for(int l=0;l<8;l++)
    {
        int i1=i+dx[l];
        int j1=j+dy[l];
        if(i1>=0 && i1<n && j1>=0 && j1<m && a[i1][j1]>=a[i][j])
            return false;
    }
    return true;
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
            if(dfs(i,j)==true)
            {
                dem++;
            }
        }
    }
    cout<<dem;

}

