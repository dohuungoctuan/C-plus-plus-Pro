#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
    if(n==0)
        return n;
    return n*n+sum(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<sum(n);
}

