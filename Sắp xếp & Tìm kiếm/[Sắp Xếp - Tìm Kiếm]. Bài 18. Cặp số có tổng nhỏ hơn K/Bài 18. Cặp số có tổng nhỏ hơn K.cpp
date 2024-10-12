#include<bits/stdc++.h>
using namespace std;
int tknpfirst(int a[],int n,int k,int i)
{
    int l=i+1, r=n-1;
    int res=-1;
    while(l<=r)
    {
        int m=(l+r)/2;
        if(a[m]<k)
        {
            res=m;
            l=m+1;
        }
        else
            r=m-1;

    }
    return res;
}
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        int aj=k-a[i];
        int l=tknpfirst(a,n,aj,i);
        if(l!=-1)
        {
            sum+=(l-i);
        }
    }
    cout<<sum;
}

