#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    int a[n];
    int dem=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>x;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==x)
                dem++;
        }
    }
    cout<<dem;

}

