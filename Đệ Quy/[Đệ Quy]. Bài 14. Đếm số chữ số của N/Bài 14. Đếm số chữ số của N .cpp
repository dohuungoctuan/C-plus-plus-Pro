#include<bits/stdc++.h>
using namespace std;
int tongcs(long long n)
{
    if(n<10)
        return 1;
    return 1+tongcs(n/10);
}
int main()
{
    long long n;
    cin>>n;
    cout<<tongcs(n);
}

