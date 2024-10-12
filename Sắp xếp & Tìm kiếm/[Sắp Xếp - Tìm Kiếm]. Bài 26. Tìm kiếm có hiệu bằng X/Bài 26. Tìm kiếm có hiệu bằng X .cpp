#include<bits/stdc++.h>
using namespace std;
bool tknp(int a[],int n, int x, int i)
{
    int l=i+1, r=n-1;
    while(l<=r)
    {
        int m=(l+r)/2;
        if(a[m]==x)
            return true;
        else if(a[m]<x)
            l=m+1;
        else r=m-1;
    }
    return false;
}
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        int res=a[i]+k;
        if(tknp(a,n,res,i))
        {
            cout<<"1";
            return 0;
        }
    }
    cout<<"-1";
}

