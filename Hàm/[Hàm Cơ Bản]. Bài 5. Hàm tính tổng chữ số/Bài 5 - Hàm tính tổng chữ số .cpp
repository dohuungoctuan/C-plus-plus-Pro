#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int sum_digit(ll n)
{
    int sum=0;
    while(n)
    {
        sum+=n%10;
        n=n/10;
    }
    return sum;
}
int main()
{
    ll a;
    cin>>a;
    cout<<sum_digit(a);
}

