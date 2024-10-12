#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int dem=0;
    sort(a,a+n);
    for(int i=1;i<n;i++)
    {
        if((a[i]-a[i-1])<=k)
            continue;
        else
        {
            dem++;
        }
    }
    cout<<++dem;
}

