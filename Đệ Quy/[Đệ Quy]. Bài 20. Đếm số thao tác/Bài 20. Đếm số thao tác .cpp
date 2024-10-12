#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
int thaotac(int n)
{
    if(n==1) return 0;
    int x = mod, y = mod, z = mod;
    if(n%2==0) x = 1 + thaotac(n/2);
    if(n%3==0) y = 1 + thaotac(n/3);
    if(n>1) z = 1 + thaotac(n-1);
    return min({x,y,z});
}
int main()
{
    int n;
    cin>>n;
    cout<<thaotac(n);
}

