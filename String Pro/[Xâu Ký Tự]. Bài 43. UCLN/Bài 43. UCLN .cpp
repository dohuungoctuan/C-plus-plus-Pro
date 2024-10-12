#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a; long long k;
    cin>>a>>k;
    long long res=0;
    for(int i=0;i<a.size();i++)
    {
        res=(res*10+(a[i]-'0'))%k;
    }
    cout<<__gcd(res,k);
}

