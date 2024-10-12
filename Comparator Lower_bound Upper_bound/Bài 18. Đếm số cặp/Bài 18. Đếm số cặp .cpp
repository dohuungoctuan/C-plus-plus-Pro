#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    long long dem=0;
    for(int i=0;i<n;i++)
    {
        int res=a[i]+k;
        auto it1=lower_bound(a+i+1,a+n,res);
        auto it2=upper_bound(a+i+1,a+n,res);
        int tmp=it2-it1;
        dem+=tmp;
    }
    cout<<dem;
}

