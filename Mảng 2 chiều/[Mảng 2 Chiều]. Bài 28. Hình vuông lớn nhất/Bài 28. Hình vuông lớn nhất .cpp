#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    }
    int res=0;
    for(int i=0;i<=n-3;i++)
    {
        for(int j=0;j<=n-3;j++)
        {
          int tmp=0;
          for(int x=i;x<i+3;x++)
          {
              for(int y=j;y<j+3;y++)
                tmp+=a[x][y];
          }
          res=max(res,tmp);
        }
    }
    cout<<res;
}

