#include<bits/stdc++.h>
using namespace std;
int cnt[1000001];
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        cnt[a[i]]++;
    }
    for(int i=0;i<=1000000;i++)
    {
        if(cnt[i]!=0)
            {
                cout<<i<<" "<<cnt[i]<<endl;
            }
    }
}

