#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=1;i<=n-1;i++)
        cin>>b[i];
    long long sum=a[0];
    for(int i=1;i<n;i++)
    {
        if(b[i]==1)
            sum+=a[i];
        else if(b[i]==2) sum-=a[i];
    }
    cout<<sum;
}

