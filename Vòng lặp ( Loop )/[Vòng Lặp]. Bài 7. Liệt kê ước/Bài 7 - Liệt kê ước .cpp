#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    int i=sqrt(n);
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
            sum+=2;
    }
    if(i*i==n)
        sum-=1;
    cout<<sum<<endl;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
        }
    }
}

