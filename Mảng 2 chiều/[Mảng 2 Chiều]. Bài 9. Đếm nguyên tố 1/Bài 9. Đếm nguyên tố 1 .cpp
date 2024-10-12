#include<bits/stdc++.h>
using namespace std;
bool nto(int n)
{
    if(n<2)
        return false;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
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
    int dem=0;
    for(int i=0;i<n;i++)
    {
        if(nto(a[i][i]))
            dem++;
        if(nto(a[i][n-i-1]))
            dem++;
    }
    if(n%2!=0)
    {
        int tmp=n/2;
        if(nto(a[tmp][tmp]))
            dem--;
    }
    cout<<dem;
}

