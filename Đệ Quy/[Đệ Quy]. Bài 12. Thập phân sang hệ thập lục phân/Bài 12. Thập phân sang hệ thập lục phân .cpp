#include<bits/stdc++.h>
using namespace std;
void tlp (long long n)
{
    if(n<16)
    {
        if(n>=0 && n<=9)
            cout<<n;
        else cout<<(char)(n+55);
    }
    else
    {
        tlp(n/16);
        int res=n%16;
        if(res>=0 && res<=9)
            cout<<res;
        else cout<<(char)(res+55);
    }
}
int main()
{
    long long n;
    cin>>n;
    tlp(n);
}

