#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int chan=0;
    int le=0;
    long long  ans=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
            ans+=chan;
        else ans+=le;
        if(a[i]%2==0) chan++;
        else le++;
    }
    cout<<ans;
}

