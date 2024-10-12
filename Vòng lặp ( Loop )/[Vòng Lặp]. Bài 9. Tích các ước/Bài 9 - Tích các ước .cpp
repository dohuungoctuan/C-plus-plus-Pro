#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long res=1;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            res=res*i*n/i;
        }
    }
    long long i=sqrt(n);
    if(i*i==n)
        res=res/i;
    cout<<res;
}

