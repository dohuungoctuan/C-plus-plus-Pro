#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    k = max(k, n-k);
    sort(a, a+n, greater<int>());
    long long sum1 = 0;
    for(int i=0;i<k;i++)
        sum1+=a[i];
    long long sum2 = 0;
    for(int i=k;i<n;i++)
        sum2+=a[i];
    cout<<sum1 - sum2;
}
