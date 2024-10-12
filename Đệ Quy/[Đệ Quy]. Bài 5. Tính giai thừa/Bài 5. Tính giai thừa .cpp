#include<bits/stdc++.h>
using namespace std;
int gt(int n)
{
    if(n==0)
        return n+1;
    return n*gt(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<gt(n);
}

