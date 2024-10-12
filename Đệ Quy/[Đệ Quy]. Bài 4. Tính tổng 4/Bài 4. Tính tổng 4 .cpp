#include<bits/stdc++.h>
using namespace std;
long long sum(int n)
{
    if(n==0)
        return n;
    else if(n%2==0)
        return n+sum(n-1);
    else
        return -n+sum(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<sum(n);
}

