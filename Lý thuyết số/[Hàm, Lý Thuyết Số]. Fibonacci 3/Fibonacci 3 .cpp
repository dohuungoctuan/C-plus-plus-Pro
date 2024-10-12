#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long fibo[92];
    fibo[0]=1;
    fibo[1]=1;
    for(int i=2;i<=92;i++)
    {
        fibo[i]=fibo[i-1]+fibo[i-2];
    }
    for(int i=0;i<=92;i++)
    {
        if(fibo[i]>=n)
        {
            cout<<fibo[i];
            return 0;
        }
    }
}

