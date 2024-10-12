#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    long long sum=0;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n-1;i++)
    {
        int tmp=k-a[i];
        auto it=upper_bound(a+i+1,a+n,tmp);
        int res=(it-a);
        sum+=(n-res);
    }
    cout<<sum;
}

