#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n;
    cin>>n;
    cout<<(long long)floor(n)<<endl;
    cout<<fixed<<setprecision(2)<<n-floor(n)<<endl;
}

