#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n,greater<int>());
    int dem=1;
    int res=a[0];
    for(int i=1;i<n;i++)
    {
        if(res>0)
        {
            res=min(res-1,a[i]);
            dem++;
        }
    }
    cout<<dem;
}

