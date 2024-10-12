#include<bits/stdc++.h>
using namespace std;
int cnt[10];
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        a[i]=abs(a[i]);
        while(a[i]!=0)
        {
            int res=a[i]%10;
            cnt[res]++;
            a[i]/=10;
        }
    }
    for(int i=0;i<10;i++)
        cout<<i<<" "<<cnt[i]<<endl;
}

