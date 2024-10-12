#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    while(b)
    {
        int du=a%b;
        a=b;
        b=du;
    }
    return a;
}
int lcm(int a, int b)
{
    return a/gcd(a,b)*b;
}
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<gcd(gcd(a,b),gcd(c,d))<<" ";
    cout<<lcm(lcm(a,b),lcm(c,d));
}

