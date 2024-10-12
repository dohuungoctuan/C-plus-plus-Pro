#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b;
    cin>>a>>b;
    long long dem;
    if(a%2==0)
        dem=a/2*b;
    else if(b%2==0)
        dem=b/2*a;
    else if(a%2!=0 && b%2!=0)
        dem=a/2*b+b/2;
    cout<<dem;
}


