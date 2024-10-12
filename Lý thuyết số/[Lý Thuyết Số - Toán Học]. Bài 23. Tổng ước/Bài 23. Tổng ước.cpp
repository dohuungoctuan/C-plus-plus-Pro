#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    long long n;
    cin>>n;
    ll sum=0;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
           {
               sum+=i;
        if((i*i)!=n)
            sum+=n/i;
           }
    }
    cout<<sum;

}

