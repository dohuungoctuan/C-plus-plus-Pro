#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    while(n/10!=0)
    {
        int sum=0;
        while(n!=0)
        {
         sum+=n%10;
         n=n/10;
        }
        n=sum;
    }
    cout<<n;
}

