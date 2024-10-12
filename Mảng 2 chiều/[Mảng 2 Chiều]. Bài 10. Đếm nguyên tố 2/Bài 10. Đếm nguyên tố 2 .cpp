#include<bits/stdc++.h>
using namespace std;
bool check(int n)
{
    if(n<2)
        return 0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
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
    set<int>se;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j || j==(n-i-1))
            {
                if(check(a[i][j]))
                    se.insert(a[i][j]);
            }
        }
    }
    cout<<se.size();
}

