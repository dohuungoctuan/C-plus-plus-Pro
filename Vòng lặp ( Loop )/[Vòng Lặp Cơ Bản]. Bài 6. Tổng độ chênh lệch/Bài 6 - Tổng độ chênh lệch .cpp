#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long sum=0;
    while(n/10!=0)
    {
        sum+=abs((n%10)-(n/10%10));
        n=n/10;
    }
    cout<<sum;

}

