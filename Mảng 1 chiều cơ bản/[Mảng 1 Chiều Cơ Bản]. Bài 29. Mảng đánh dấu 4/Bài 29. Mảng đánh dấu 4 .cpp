#include<bits/stdc++.h>
using namespace std;
int cnt[1000001];
int main()
{
    int n;
    cin>>n;
    int a[n];
    int max_val=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        cnt[a[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        max_val=max(cnt[a[i]], max_val);
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        if(cnt[a[i]]==max_val)
        {
            cout<<a[i]<<" "<<cnt[a[i]];
            return 0;
        }
    }
}

