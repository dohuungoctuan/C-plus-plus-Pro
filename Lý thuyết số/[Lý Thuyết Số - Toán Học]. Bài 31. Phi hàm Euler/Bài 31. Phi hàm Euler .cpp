#include<bits/stdc++.h>
using namespace std;
long long euler(long long n)
{
    long long res=n;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            res=res-res/i; // res = res * (1 - 1/i)
            while(n%i==0)
            {
                n/=i;
            }
        }
    }
    if(n>1)
        res=res-res/n;
    return res;
}
int main()
{
    long long n;
    cin>>n;
    cout<<euler(n);
}

