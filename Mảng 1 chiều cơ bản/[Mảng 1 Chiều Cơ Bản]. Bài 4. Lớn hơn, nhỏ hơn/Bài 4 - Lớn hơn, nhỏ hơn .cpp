#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    int a[n];
    int dem1=0;
    int dem2=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>x;
    for(int i=0;i<n;i++)
    {
        if(a[i]<x)
            dem1++;
        else if(a[i]>x)
            dem2++;
    }
    cout<<dem1<<endl<<dem2;
}

