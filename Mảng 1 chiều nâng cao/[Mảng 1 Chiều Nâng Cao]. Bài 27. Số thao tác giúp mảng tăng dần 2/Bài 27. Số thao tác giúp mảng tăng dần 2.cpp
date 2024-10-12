#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin>>n>>k;
    long long a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    long long dem = 0;
    for(int i=1;i<n;i++)
    {
        if(a[i] < a[i-1])
        {
            int tmp = a[i-1] - a[i] + 1;
            int r = 0;
            if(tmp % k == 0) r = tmp / k;
            else r = tmp / k + 1;
            dem += r;
            a[i] += (r * k);
        }
    }
    cout<<dem;
}
