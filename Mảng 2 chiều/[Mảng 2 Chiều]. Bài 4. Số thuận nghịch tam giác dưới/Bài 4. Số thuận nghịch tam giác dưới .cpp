#include<bits/stdc++.h>
using namespace std;
bool thng(int n)
{
    int k=n;
    int tmp=0;
    while(n!=0)
    {
        tmp=tmp*10+n%10;
        n/=10;
    }
    if(tmp==k)
        return true;
    return false;
}
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
        for(int j=0;j<=i;j++)
        {
            if(thng(a[i][j]))
                dem++;
        }
    }
    cout<<dem;
}

