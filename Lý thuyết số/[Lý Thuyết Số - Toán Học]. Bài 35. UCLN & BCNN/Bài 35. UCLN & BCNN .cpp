#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll a,b;
ll UCLN(ll a,ll b){
    while(b!=0){
        ll r=a%b;
        a=b;
        b=r;
    }
    return a;
}
int main()
{
   cin>>a>>b;
   cout<<UCLN(a,b)<<" "<<a/UCLN(a,b)*b;
    return 0;
}

