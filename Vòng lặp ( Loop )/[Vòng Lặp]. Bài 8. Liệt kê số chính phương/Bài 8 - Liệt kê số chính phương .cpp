#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long i;
    for(i=1;i<=sqrt(n);i++)
    {
        if(i*i<=n)
            cout<<i*i<<" ";
    }
}

