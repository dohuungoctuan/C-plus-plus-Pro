#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    k%=n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=k;i<n;i++)
        cout<<a[i]<<" ";
    for(int i=0;i<k;i++)
        cout<<a[i]<<" ";

}

