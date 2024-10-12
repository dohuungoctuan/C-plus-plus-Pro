#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    a[0]=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=2;i<=n;i++)
        a[i]=a[i]+a[i-1];
    for(int i=2;i<=n;i++)
        cout<<a[i]-a[i-2]<<" ";
    cout<<endl;
    for(int i=3;i<=n;i++)
        cout<<a[i]-a[i-3]<<" ";
    cout<<endl;
    for(int i=4;i<=n;i++)
        cout<<a[i]-a[i-4]<<" ";

}

