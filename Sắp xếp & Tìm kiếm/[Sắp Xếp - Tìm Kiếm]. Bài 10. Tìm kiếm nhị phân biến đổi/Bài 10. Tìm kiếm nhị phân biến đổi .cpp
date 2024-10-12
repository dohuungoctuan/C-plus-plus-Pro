#include<bits/stdc++.h>
using namespace std;
int tknp1(int a[],int n, int x)
{
    int l=0, r=n-1;
    int res=-1;
    while(l<=r)
    {
        int g=(l+r)/2;
        if(a[g]==x)
        {
            res=g;
            r=g-1;
        }
        else if(a[g]<x)
            l=g+1;
        else r=g-1;
    }
    return res;
}
int tknp2(int a[],int n, int x)
{
    int l=0, r=n-1;
    int res=-1;
    while(l<=r)
    {
        int g=(l+r)/2;
        if(a[g]==x)
        {
            res=g;
            l=g+1;
        }
        else if(a[g]<x)
            l=g+1;
        else r=g-1;
    }
    return res;
}
int tknp3(int a[],int n, int x)
{
    int l=0, r=n-1;
    int res=-1;
    while(l<=r)
    {
        int g=(l+r)/2;
        if(a[g]>=x)
        {
            res=g;
            r=g-1;
        }
        else l=g+1;
    }
    return res;
}
int tknp4(int a[],int n, int x)
{
    int l=0, r=n-1;
    int res=-1;
    while(l<=r)
    {
        int g=(l+r)/2;
        if(a[g]>x)
        {
            res=g;
            r=g-1;
        }
        else if(a[g]<=x)
            l=g+1;
    }
    return res;
}
int main()
{
    int n;
    int x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    cout<<tknp1(a,n,x)<<endl;
    cout<<tknp2(a,n,x)<<endl;
    cout<<tknp3(a,n,x)<<endl;
    cout<<tknp4(a,n,x)<<endl;
    if(tknp1(a,n,x)==-1)
        cout<<"0";
    else
        cout<<tknp2(a,n,x)-tknp1(a,n,x)+1;
}

