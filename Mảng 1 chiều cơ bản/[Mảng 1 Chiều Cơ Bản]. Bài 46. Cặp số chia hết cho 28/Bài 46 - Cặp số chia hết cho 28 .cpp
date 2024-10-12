#include<bits/stdc++.h>
using namespace std;
int cnt[30];
int main()
{
    int n;
    cin>>n;
    int a[n];
    long long dem=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        a[i]%=28;
    }
    for(int i=0;i<n;i++)
    {
        int x=a[i];
        if(x!=0)
        {
            int y=28-x;
            dem+=cnt[y];
        }
        else {
                int y=0;
                dem+=cnt[y];
        }
        cnt[a[i]]++;
    }
    cout<<dem;
}

