#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    for(int i=n-1;i>=0;i--)
        cout<<a[i]<<" ";
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
            cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        if(i%2==1)
            cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=1;i<n;i++)
        cout<<a[i]+a[i-1]<<" ";
}

