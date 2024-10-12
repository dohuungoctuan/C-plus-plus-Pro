#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a+1,a+n);
    int tmp=n-k-1;
    long long sum=a[0];
    for(int i=1;i<=tmp;i++)
        sum-=a[i];
    for(int i=tmp+1;i<n;i++)
        sum+=a[i];
    cout<<sum;
}

