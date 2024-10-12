#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,b;
    cin>>n>>a>>b;
    long long sum1=0, sum2=0;
    long long min_value=1e12;
    sum1=a*n;
    if(n%2==0)
        sum2=n/2*b;
    else sum2=n/2*b+a;
    min_value=min(sum1,sum2);
    cout<<min_value;
}

