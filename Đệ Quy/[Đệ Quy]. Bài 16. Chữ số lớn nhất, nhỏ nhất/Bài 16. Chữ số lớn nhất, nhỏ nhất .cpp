#include<bits/stdc++.h>
using namespace std;
long long tongcs(long long n)
{
    if(n<10)
        return n;
    return max(tongcs(n/10),n%10);
}
long long tongcs1(long long n)
{
    if(n<10)
        return n;
    return min(tongcs1(n/10),n%10);
}
int main()
{
    long long n;
    cin>>n;
    cout<<tongcs(n)<<" "<<tongcs1(n);
}

