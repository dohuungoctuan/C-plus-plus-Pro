#include<bits/stdc++.h>
using namespace std;
int cnt[1000000];
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
      cnt[a[i]]++;
      cout<<cnt[a[i]]<<" ";
    }
}

