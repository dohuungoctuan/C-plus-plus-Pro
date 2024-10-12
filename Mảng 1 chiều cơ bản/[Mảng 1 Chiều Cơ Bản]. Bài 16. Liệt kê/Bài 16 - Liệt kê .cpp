#include<bits/stdc++.h>
using namespace std;
bool nto(int n)
{
    if(n<2)
        return false;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
bool thuannghich(int n)
{
    int res=n;
    int tmp=0;
    while(n!=0)
    {
        tmp=tmp*10+n%10;
        n/=10;
    }
    if(res==tmp)
        return true;
    else return false;
}
bool scp(int n)
{
    int res=sqrt(n);
    if(res*res==n)
        return true;
    return false;
}
bool tcs( int n)
{
    int sum=0;
    while(n!=0)
    {
        sum+=n%10;
        n/=10;
    }
    if(nto(sum))
        return true;
    return false;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    int dem1=0, dem2=0, dem3=0, dem4=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(nto(a[i])) dem1++;
        if(thuannghich(a[i])) dem2++;
        if(scp(a[i])) dem3++;
        if(tcs(a[i])) dem4++;
    }
    cout<<dem1<<endl<<dem2<<endl<<dem3<<endl<<dem4;
}

