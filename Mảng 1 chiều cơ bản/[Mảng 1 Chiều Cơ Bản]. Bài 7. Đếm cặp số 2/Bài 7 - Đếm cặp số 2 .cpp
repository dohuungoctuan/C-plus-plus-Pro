#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    int a[n];
    int sum=1e6;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=1;i<n;i++)
    {
        if(a[i]-a[i-1]<sum)
            sum=a[i]-a[i-1];
    }
    cout<<sum;
}

