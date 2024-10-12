#include<bits/stdc++.h>
using namespace std;
int k=1000000000+7;
int main()
{
    int n;
    cin>>n;
    long long a[n];
    long long sum1=0;
    long long sum2=1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        sum1+=a[i];
        sum1%=k;
        sum2*=a[i];
        sum2%=k;
    }
    cout<<sum1%k<<endl;
    cout<<sum2%k;

}

