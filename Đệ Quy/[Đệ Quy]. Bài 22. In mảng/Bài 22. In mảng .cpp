#include<bits/stdc++.h>
using namespace std;
void trph(int a[], int n)
{
    if(n==0)
        cout<<a[n]<<" ";
    else
    {
        trph(a,n-1);
        cout<<a[n]<<" ";
    }
}
void phtr(int a[], int n)
{
    if(n==0)
        cout<<a[n]<<" ";
    else
    {
        cout<<a[n]<<" ";
        phtr(a,n-1);
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++)
        cin>>a[i];
    n=n-1;
    trph(a,n);
    cout<<endl;
    phtr(a,n);
}

