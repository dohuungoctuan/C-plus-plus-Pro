#include<bits/stdc++.h>
using namespace std;
bool kt(long long n)
{
    int sum=0;
    while(n)
    {
        sum+=n%10;
        n/=10;
    }
    sum=sum%10;
    if(sum==8)
        return true;
    else return false;
}
int main()
{
    long long n;
    cin>>n;
    if(kt(n))
        cout<<"28tech";
    else cout<<"29tech";
}

