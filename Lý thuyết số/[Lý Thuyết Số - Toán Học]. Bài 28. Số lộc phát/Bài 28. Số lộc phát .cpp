#include<bits/stdc++.h>
using namespace std;
bool locphat(long long n)
{
    while(n!=0)
    {
        int tmp=n%10;
        if(tmp!=0 && tmp!=6 && tmp!=8)
            return false;
        n/=10;
    }
    return true;
}
int main()
{
    long long n;
    cin>>n;
    if(locphat(n))
        cout<<"1";
    else cout<<"0";
}

