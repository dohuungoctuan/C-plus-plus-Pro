#include<bits/stdc++.h>
using namespace std;
double sum(int n)
{
    if(n==1)
        return n;
    return 1.0/n+sum(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<fixed<<setprecision(3)<<(double)sum(n);
}

